/* speed.exe 006f4430 FUN_006f4430; analysis pseudocode, not buildable source.
 * calls 006f25a0 FUN_006f25a0
 */

void FUN_006f4430(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087eac8;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_006f25a0();
  }
  ExceptionList = local_c;
  return;
}

