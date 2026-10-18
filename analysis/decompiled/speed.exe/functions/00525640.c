/* speed.exe 00525640 FUN_00525640; analysis pseudocode, not buildable source.
 * calls 005720b0 FUN_005720b0
 * calls 00585980 FUN_00585980
 * calls 005b1560 FUN_005b1560
 * calls 00572070 FUN_00572070
 */

undefined4 FUN_00525640(undefined4 param_1)

{
  undefined **local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e920;
  local_c = ExceptionList;
  local_1c = &PTR_FUN_0089b4a8;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005b1560(&local_1c);
  local_18 = &PTR_FUN_0089b4b0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_10 = DAT_0091cfa8;
  local_14 = FUN_005720b0(param_1);
  FUN_005b1560(&local_18);
  FUN_00572070(param_1);
  FUN_00585980(param_1);
  ExceptionList = local_c;
  return 1;
}

