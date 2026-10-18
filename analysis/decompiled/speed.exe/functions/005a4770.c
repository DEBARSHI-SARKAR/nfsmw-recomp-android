/* speed.exe 005a4770 FUN_005a4770; analysis pseudocode, not buildable source.
 * calls 005a3400 FUN_005a3400
 */

void FUN_005a4770(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873712;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_0091cf54 != 0) {
    ExceptionList = &local_c;
    FUN_005a3400(param_1);
  }
  ExceptionList = local_c;
  return;
}

