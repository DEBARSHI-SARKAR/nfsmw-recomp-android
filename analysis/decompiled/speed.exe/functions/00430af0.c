/* speed.exe 00430af0 FUN_00430af0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0040d3c0 FUN_0040d3c0
 * calls 0040d1e0 FUN_0040d1e0
 * calls 0042c990 FUN_0042c990
 * calls 00664cc0 FUN_00664cc0
 * calls 005d5a50 FUN_005d5a50
 * calls 004258d0 FUN_004258d0
 * calls 006f82f0 FUN_006f82f0
 * calls 0041b0d0 FUN_0041b0d0
 * calls 006466b0 FUN_006466b0
 * calls 0040d2a0 FUN_0040d2a0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00430af0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086849d;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x17;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00891978;
  param_1[2] = &PTR_LAB_00891970;
  param_1[0xb] = &PTR_LAB_0089195c;
  param_1[0xe] = &PTR_LAB_00891940;
  param_1[0x12] = &PTR_LAB_0089193c;
  param_1[0x15] = &PTR_LAB_00891900;
  *puVar1 = &PTR_LAB_008918f0;
  local_4 = 8;
  if (param_1[0x52] != 0) {
    FUN_00664cc0(param_1[0x52]);
  }
  if (param_1[0x53] != 0) {
    FUN_00664cc0(param_1[0x53]);
  }
  if (param_1[0x54] != 0) {
    FUN_00664cc0(param_1[0x54]);
  }
  if (param_1[0x55] != 0) {
    FUN_00664cc0(param_1[0x55]);
  }
  if (param_1[0x56] != 0) {
    FUN_00664cc0(param_1[0x56]);
  }
  FUN_006e9c90(param_1[0x20]);
  iVar2 = param_1[0x4f];
  if (iVar2 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar2,0x28c,0);
    param_1[0x4f] = 0;
  }
  if ((int *)param_1[0x50] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x50] + 4))();
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0040d3c0();
  if (param_1[0x4d] != 0) {
    FUN_005d0370(param_1[0x4d],0xc,0);
  }
  param_1[0x4d] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0041b0d0();
  if (param_1[0x4a] != 0) {
    FUN_005d0370(param_1[0x4a],0xc,0);
  }
  param_1[0x4a] = 0;
  local_4._0_1_ = 5;
  FUN_0042c990();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0040d2a0();
  if (param_1[0x1e] != 0) {
    FUN_005d0370(param_1[0x1e],0x1c,0);
  }
  param_1[0x1e] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0040d1e0();
  if (param_1[0x1b] != 0) {
    FUN_005d0370(param_1[0x1b],0x44,0);
  }
  param_1[0x1b] = 0;
  local_4._0_1_ = 2;
  *puVar1 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  DAT_0092c67c = 0;
  param_1[0x15] = &PTR_FUN_00890970;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005d5a50(param_1 + 0x15);
  param_1[0x12] = &PTR_LAB_00890ec0;
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = pvStack_c;
  return;
}

