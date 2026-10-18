/* speed.exe 005b8510 FUN_005b8510; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 */

void FUN_005b8510(void)

{
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873f28;
  local_c = ExceptionList;
  local_10 = &PTR_FUN_008a2c80;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005b1560(&local_10);
  ExceptionList = local_c;
  return;
}

