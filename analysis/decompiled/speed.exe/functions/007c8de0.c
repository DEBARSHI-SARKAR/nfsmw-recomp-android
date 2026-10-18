/* speed.exe 007c8de0 __aligned_free_dbg; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007c79c0 _CheckBytes
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __aligned_free_dbg
   
   Library: Visual Studio 2003 Debug */

void __aligned_free_dbg(uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = _CheckBytes(param_1 - 4,DAT_0090630c,4);
    if (iVar2 == 0) {
      iVar2 = _CheckBytes((param_1 & 0xfffffffc) - 4,DAT_0090630f,4);
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(1,0,0,0,
                                 "Damage before 0x%p which was allocated by aligned routine\n",
                                 param_1), iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      __free_dbg(*(undefined4 *)((param_1 & 0xfffffffc) - 8),1);
    }
    else {
      iVar2 = __CrtDbgReport(1,0,0,0,
                             "The block at 0x%p was not allocated by _aligned routines, use free()",
                             param_1);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

