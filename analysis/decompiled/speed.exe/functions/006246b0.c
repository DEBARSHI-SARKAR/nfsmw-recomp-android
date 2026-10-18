/* speed.exe 006246b0 FUN_006246b0; analysis pseudocode, not buildable source.
 * calls 005d0df0 FUN_005d0df0
 */

void FUN_006246b0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008773a4;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != -4) {
    ExceptionList = &local_c;
    FUN_005d0df0(param_2);
  }
  ExceptionList = local_c;
  return;
}

