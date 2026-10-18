/* speed.exe 004dd1b0 FUN_004dd1b0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00456cb0 FUN_00456cb0
 */

int __thiscall FUN_004dd1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00456cb0(param_2,param_3,param_4);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_006269b0(0x10);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  ExceptionList = local_c;
  return param_1;
}

