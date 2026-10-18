/* speed.exe 00758f10 FUN_00758f10; analysis pseudocode, not buildable source.
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 * calls 004258d0 FUN_004258d0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00758f10(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008810aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b50d8;
  iVar1 = param_1[8];
  local_4 = 2;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[10] - iVar1 >> 2) << 2,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  DAT_009b08fc = 0;
  iVar1 = param_1[8];
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[10] - iVar1 >> 2) * 4,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  *param_1 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

