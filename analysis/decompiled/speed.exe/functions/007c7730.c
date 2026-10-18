/* speed.exe 007c7730 __msize_dbg; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c787e FUN_007c787e
 * calls 007c7889 FUN_007c7889
 * calls 007d2670 __CrtDbgReport
 * calls 007c7a10 __CrtCheckMemory
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    __msize_dbg
   
   Library: Visual Studio 2003 Debug */

void __msize_dbg(int param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b85f0;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_009baa14 != 0) {
    if (DAT_009baa04 == DAT_009baa14 + -1) {
      ExceptionList = &pvStack_14;
      iVar2 = __CrtCheckMemory();
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4fb,0,"_CrtCheckMemory()"), iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DAT_009baa04 = 0;
    }
    else {
      DAT_009baa04 = DAT_009baa04 + 1;
      ExceptionList = &pvStack_14;
    }
  }
  __lock(4);
  local_8 = 0;
  iVar2 = __CrtIsValidHeapPointer(param_1);
  if ((iVar2 == 0) &&
     (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x50b,0,"_CrtIsValidHeapPointer(pUserData)"), iVar2 == 1)
     ) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x511,0,"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
      iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8 = 0xffffffff;
  FUN_007c787e();
  FUN_007c7889();
  return;
}

