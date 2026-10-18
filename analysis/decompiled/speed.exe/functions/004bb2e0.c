/* speed.exe 004bb2e0 FUN_004bb2e0; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 * calls 00467c30 FUN_00467c30
 * calls 0045be30 FUN_0045be30
 * calls 0045a430 FUN_0045a430
 */

undefined4 * __fastcall FUN_004bb2e0(undefined4 *param_1)

{
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b8dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d61d0();
  param_1[9] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00896b24;
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 1;
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 2;
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 3;
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 4;
  *(undefined1 *)((int)param_1 + 0xf1) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 5;
  FUN_0045be30(local_20);
  local_4._0_1_ = 4;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 6;
  FUN_0045be30(local_20);
  local_4._0_1_ = 4;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 7;
  FUN_0045be30(local_20);
  local_4._0_1_ = 4;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4._0_1_ = 8;
  FUN_0045be30(local_20);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

