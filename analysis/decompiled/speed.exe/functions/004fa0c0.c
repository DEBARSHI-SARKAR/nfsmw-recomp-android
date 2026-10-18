/* speed.exe 004fa0c0 FUN_004fa0c0; analysis pseudocode, not buildable source.
 * calls 004eaa90 FUN_004eaa90
 * calls 004fa050 FUN_004fa050
 */

undefined4 * __fastcall FUN_004fa0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086dd93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00899afc;
  uVar1 = FUN_004eaa90();
  param_1[8] = uVar1;
  param_1[9] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004fa050();
  ExceptionList = local_c;
  return param_1;
}

