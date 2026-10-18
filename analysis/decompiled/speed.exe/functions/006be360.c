/* speed.exe 006be360 FUN_006be360; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004523c0 FUN_004523c0
 */

int __thiscall FUN_006be360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004523c0(param_2);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_006269b0(0x90);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  ExceptionList = local_c;
  return param_1;
}

