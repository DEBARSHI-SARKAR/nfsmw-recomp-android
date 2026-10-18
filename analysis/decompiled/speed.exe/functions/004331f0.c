/* speed.exe 004331f0 FUN_004331f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432060 FUN_00432060
 * calls 00659260 FUN_00659260
 * calls 00403ed0 FUN_00403ed0
 * calls 005d5a50 FUN_005d5a50
 * calls 0045a430 FUN_0045a430
 * calls 00452880 FUN_00452880
 * calls 0042e420 FUN_0042e420
 */

void __fastcall FUN_004331f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008687e3;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x1d6;
  puVar2 = param_1 + 0x1db;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892398;
  param_1[2] = &PTR_LAB_00892390;
  param_1[0x13] = &PTR_LAB_008922b8;
  param_1[0x15] = &PTR_LAB_008922b0;
  *puVar1 = &PTR_LAB_00892250;
  param_1[0x1d8] = &PTR_LAB_00892244;
  *puVar2 = &PTR_LAB_0089223c;
  iVar3 = param_1[0x1e6];
  local_4 = 3;
  if (iVar3 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar3,0x14,0);
  }
  iVar3 = param_1[0x1e7];
  if (iVar3 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar3,0x14,0);
  }
  iVar3 = param_1[0x1e8];
  if (iVar3 != 0) {
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar3,0x14,0);
  }
  iVar3 = param_1[0x1ec];
  if (iVar3 != 0) {
    FUN_00403ed0();
    FUN_005d0370(iVar3,0x84,0);
  }
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar2);
  local_4._0_1_ = 1;
  FUN_0042e420();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00432060();
  ExceptionList = pvStack_c;
  return;
}

