/* speed.exe 00623db0 FUN_00623db0; analysis pseudocode, not buildable source.
 * calls 005d0df0 FUN_005d0df0
 */

void FUN_00623db0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008772a4;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != -4) {
    ExceptionList = &local_c;
    FUN_005d0df0(param_2);
  }
  local_4 = 1;
  if (param_1 != -8) {
    FUN_005d0df0(param_2);
  }
  local_4 = 2;
  if (param_1 != -0xc) {
    FUN_005d0df0(param_2);
  }
  local_4 = 3;
  if (param_1 != -0x18) {
    FUN_005d0df0(param_2);
  }
  local_4 = 4;
  if (param_1 != -0x1c) {
    FUN_005d0df0(param_2);
  }
  ExceptionList = local_c;
  return;
}

