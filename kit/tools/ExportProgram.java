// Export every discovered function, assembly, references and decompiler status.
// @category PopMetal
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import java.io.PrintWriter;
import java.nio.file.*;

public class ExportProgram extends GhidraScript {
    public void run() throws Exception {
        Path out = Path.of(getScriptArgs()[0], currentProgram.getName());
        Files.createDirectories(out.resolve("functions"));
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new Exception(decompiler.getLastMessage());
        int total = 0, completed = 0;
        try (PrintWriter index = new PrintWriter(Files.newBufferedWriter(out.resolve("functions.tsv")));
             PrintWriter strings = new PrintWriter(Files.newBufferedWriter(out.resolve("strings.tsv")))) {
            index.println("address\tname\tbytes\tstatus\tmessage");
            DataIterator data = currentProgram.getListing().getDefinedData(true);
            while (data.hasNext()) {
                Data d = data.next();
                if (!(d.getValue() instanceof String)) continue;
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function caller = getFunctionContaining(r.getFromAddress());
                    strings.printf("%s\t%s\t%s\t%s%n", d.getAddress(), r.getFromAddress(),
                        caller == null ? "" : caller.getEntryPoint(),
                        d.getValue().toString().replace("\n", "\\n").replace("\t", "\\t"));
                }
            }
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function f = functions.next();
                String address = f.getEntryPoint().toString();
                DecompileResults result = decompiler.decompileFunction(f, 45, monitor);
                boolean ok = result.decompileCompleted() && result.getDecompiledFunction() != null;
                try (PrintWriter c = new PrintWriter(Files.newBufferedWriter(out.resolve("functions/" + address + ".c")));
                     PrintWriter asm = new PrintWriter(Files.newBufferedWriter(out.resolve("functions/" + address + ".asm")))) {
                    c.printf("/* %s %s %s; analysis pseudocode, not buildable source.\n", currentProgram.getName(), address, f.getName());
                    for (Function callee : f.getCalledFunctions(monitor)) c.printf(" * calls %s %s\n", callee.getEntryPoint(), callee.getName());
                    c.println(" */");
                    if (ok) c.print(result.getDecompiledFunction().getC());
                    else c.println("/* FAILED: " + result.getErrorMessage() + " */");
                    InstructionIterator instructions = currentProgram.getListing().getInstructions(f.getBody(), true);
                    while (instructions.hasNext()) {
                        Instruction ins = instructions.next();
                        asm.printf("%s  %s%n", ins.getAddress(), ins.toString());
                    }
                }
                index.printf("%s\t%s\t%d\t%s\t%s%n", address, f.getName(), f.getBody().getNumAddresses(),
                    ok ? "pseudocode" : "failed", result.getErrorMessage().replace('\n', ' ').replace('\t', ' '));
                index.flush();
                total++;
                if (ok) completed++;
                if (total % 250 == 0) println("Exported " + total + " functions; " + completed + " decompiled");
            }
        } finally { decompiler.dispose(); }
        Files.writeString(out.resolve("summary.txt"), "discovered=" + total + "\npseudocode=" + completed +
            "\nfailed=" + (total - completed) + "\nNative reconstruction is tracked separately.\n");
        println("Export complete: " + completed + "/" + total);
    }
}
