/* speed.exe 007c78c0 __CrtSetDbgBlockType; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7977 FUN_007c7977
 * calls 007c7982 FUN_007c7982
 * calls 007d2670 __CrtDbgReport
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    __CrtSetDbgBlockType
   
   Library: Visual Studio 2003 Debug */

void __CrtSetDbgBlockType(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8600;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lock(4);
  local_8 = 0;
  iVar2 = __CrtIsValidHeapPointer(param_1);
  if (iVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) && (*(int *)(param_1 + -0xc) != 3)) {
      iVar2 = __CrtDbgReport(2,"dbgheap.c",0x562,0,"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  local_8 = 0xffffffff;
  FUN_007c7977();
  FUN_007c7982();
  return;
}

