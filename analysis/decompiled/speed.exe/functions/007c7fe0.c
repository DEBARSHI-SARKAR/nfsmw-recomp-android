/* speed.exe 007c7fe0 __CrtIsMemoryBlock; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7ee0 __CrtIsValidPointer
 * calls 007c80e6 FUN_007c80e6
 * calls 007c80f1 FUN_007c80f1
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    __CrtIsMemoryBlock
   
   Library: Visual Studio 2003 Debug */

undefined4
__CrtIsMemoryBlock(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8770;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = __CrtIsValidHeapPointer(param_1);
  if (iVar1 != 0) {
    __lock(4);
    local_8 = 0;
    if ((((((*(uint *)(param_1 + -0xc) & 0xffff) == 4) || (*(int *)(param_1 + -0xc) == 1)) ||
         ((*(uint *)(param_1 + -0xc) & 0xffff) == 2)) || (*(int *)(param_1 + -0xc) == 3)) &&
       (((iVar1 = __CrtIsValidPointer(param_1,param_2,1), iVar1 != 0 &&
         (*(int *)(param_1 + -0x10) == param_2)) && (*(int *)(param_1 + -8) <= DAT_00906304)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(param_1 + -0x14);
      }
    }
    local_8 = 0xffffffff;
    FUN_007c80e6();
    uVar2 = FUN_007c80f1();
    return uVar2;
  }
  ExceptionList = pvStack_14;
  return 0;
}

