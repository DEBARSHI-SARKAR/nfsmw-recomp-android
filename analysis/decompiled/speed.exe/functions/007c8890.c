/* speed.exe 007c8890 __CrtMemDumpStatistics; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __CrtMemDumpStatistics
   
   Library: Visual Studio 2003 Debug */

void __CrtMemDumpStatistics(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = __CrtDbgReport(0,0,0,0,"%Id bytes in %Id %hs Blocks.\n",
                             *(undefined4 *)(param_1 + 0x18 + local_8 * 4),
                             *(undefined4 *)(param_1 + 4 + local_8 * 4),(&PTR_DAT_00906310)[local_8]
                            );
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = __CrtDbgReport(0,0,0,0,"Largest number used: %Id bytes.\n",
                           *(undefined4 *)(param_1 + 0x2c));
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = __CrtDbgReport(0,0,0,0,"Total allocations: %Id bytes.\n",*(undefined4 *)(param_1 + 0x30)
                          );
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

