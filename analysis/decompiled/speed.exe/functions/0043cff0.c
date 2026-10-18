/* speed.exe 0043cff0 FUN_0043cff0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00455fd0 FUN_00455fd0
 * calls 0045da70 FUN_0045da70
 * calls 00409060 FUN_00409060
 * calls 005d29d0 FUN_005d29d0
 * calls 00403e50 FUN_00403e50
 * calls 00659250 FUN_00659250
 * calls 0043ada0 FUN_0043ada0
 * calls 00452880 FUN_00452880
 * calls 00452380 FUN_00452380
 * calls 0042e4a0 FUN_0042e4a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043cff0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_EDI;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869283;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043ada0(param_2,0x3f000000,DAT_0090d600,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1d6;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1d7] = iVar3;
  FUN_005d7930(&LAB_004037e0,puVar1);
  *puVar1 = &PTR_FUN_00890a90;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_0042e4a0(iVar3);
  local_4._0_1_ = 2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x1db;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x1dc] = iVar3;
  FUN_005d7930(&LAB_00405240,puVar2);
  *puVar2 = &PTR_FUN_00890c1c;
  *param_1 = &PTR_FUN_00892398;
  param_1[2] = &PTR_LAB_00892390;
  param_1[0x13] = &PTR_LAB_008922b8;
  param_1[0x15] = &PTR_LAB_008922b0;
  *puVar1 = &PTR_LAB_00892250;
  param_1[0x1d8] = &PTR_LAB_00892244;
  *puVar2 = &PTR_LAB_0089223c;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  *(undefined1 *)((int)param_1 + 0x785) = 0;
  *(undefined1 *)((int)param_1 + 0x786) = 0;
  param_1[0x1e2] = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0x3f000000;
  param_1[0x1eb] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0xbf800000;
  param_1[0x1f0] = 0;
  DAT_0090d600 = DAT_0090d600 + _DAT_00890634;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (_DAT_0089096c < DAT_0090d600) {
    DAT_0090d600 = 0.0;
  }
  FUN_00452880(0x14,1);
  iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  pvStack_c._0_1_ = 4;
  local_4 = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = FUN_00455fd0(0xd6d4330b,0xeec2271a,0,0);
    FUN_00452380(uVar4,uVar6,uVar7);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  param_1[0x1e8] = iVar3;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  FUN_00409060(0x3f800000);
  (**(code **)(*(int *)param_1[0xd] + 0x84))(param_1[0x1da],0);
  param_1[0x1e3] = 0x3d4ccccd;
  pvStack_c = (void *)FUN_005d29d0(0x84,0);
  if (pvStack_c == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00403e50(10,5,0x3f800000);
  }
  param_1[0x1ec] = uVar4;
  fVar5 = (float10)FUN_0045da70(0x3f800000);
  param_1[0x1ed] = (float)fVar5;
  ExceptionList = unaff_EDI;
  return param_1;
}

