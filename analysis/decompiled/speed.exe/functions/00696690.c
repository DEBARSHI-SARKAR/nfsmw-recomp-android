/* speed.exe 00696690 FUN_00696690; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452380 FUN_00452380
 * calls 00455fd0 FUN_00455fd0
 */

int __thiscall FUN_00696690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00455fd0(0xf1f5fbc7,param_2,param_3,param_4);
  FUN_00452380(uVar1,param_3,param_4);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_006269b0(0x60);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  ExceptionList = local_c;
  return param_1;
}

