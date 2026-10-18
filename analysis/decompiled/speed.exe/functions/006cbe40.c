/* speed.exe 006cbe40 FUN_006cbe40; analysis pseudocode, not buildable source.
 * calls 007f3f23 FUN_007f3f23
 * calls 007f3ec3 FUN_007f3ec3
 * calls 00652ad0 _malloc
 */

undefined4 __thiscall FUN_006cbe40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e304;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x5c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007f3f23();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_007f3ec3();
  *(undefined **)(*(int *)(param_1 + 8) + 0x54) = (&PTR_DAT_008f3948)[param_2];
  *(undefined **)(*(int *)(param_1 + 8) + 0x58) = &DAT_0091c2b8;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c) = 8;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x50) = param_4;
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 8);
}

