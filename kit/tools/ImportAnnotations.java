// Import pop3-rev metadata only into its exact matching executable.
// @category PopMetal
import ghidra.app.script.GhidraScript;
import ghidra.app.util.bin.FileByteProvider;
import ghidra.app.util.opinion.XmlLoader;
import ghidra.app.util.opinion.Loader.ImporterSettings;
import ghidra.app.util.importer.MessageLog;
import ghidra.app.util.xml.XmlProgramOptions;
import java.io.File;
import java.nio.file.AccessMode;

public class ImportAnnotations extends GhidraScript {
    public void run() throws Exception {
        if (!currentProgram.getExecutableSHA256().equals("815ba8a550f571c38b602cf3386f65aab942667a4a2d9c7096b3660deac2eacd"))
            throw new IllegalArgumentException("Annotation executable hash mismatch");
        try (FileByteProvider provider = new FileByteProvider(new File(getScriptArgs()[0]), null, AccessMode.READ)) {
            XmlLoader loader = new XmlLoader();
            MessageLog log = new MessageLog();
            loader.loadInto(currentProgram, new ImporterSettings(provider, currentProgram.getName(),
                state.getProject(), "/", false, loader.findSupportedLoadSpecs(provider).iterator().next(),
                new XmlProgramOptions().getOptions(true), this, log, monitor));
            println(log.toString());
        }
    }
}
