/* speed.exe 0043a9a0 FUN_0043a9a0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 00402bb0 FUN_00402bb0
 * calls 0076e2d0 FUN_0076e2d0
 * calls 006e8e90 FUN_006e8e90
 * calls 005d7930 FUN_005d7930
 * calls 007658a0 FUN_007658a0
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 * calls 00414ce0 FUN_00414ce0
 * calls 006e8de0 FUN_006e8de0
 * calls 0076f480 FUN_0076f480
 * calls 006ee9b0 FUN_006ee9b0
 * calls 00677480 FUN_00677480
 * calls 006269b0 FUN_006269b0
 * calls 0043a700 FUN_0043a700
 * calls 005d29d0 FUN_005d29d0
 * calls 00673810 FUN_00673810
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00659250 FUN_00659250
 * calls 00452880 FUN_00452880
 * calls 00418000 FUN_00418000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043a9a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868e5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar4 = param_1 + 0x13;
  *puVar4 = &PTR_FUN_00890970;
  param_1[0x14] = iVar2;
  FUN_005d7930(&LAB_00403700,puVar4);
  *puVar4 = &PTR_FUN_00890990;
  local_4._0_1_ = 1;
  FUN_0043a700(param_1[0xd]);
  *param_1 = &PTR_FUN_00891a80;
  param_1[2] = &PTR_LAB_00891a78;
  *puVar4 = &PTR_LAB_008919a0;
  param_1[0x15] = &PTR_LAB_00891998;
  param_1[0x21] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = DAT_0091ddbc;
  param_1[0x32] = 0x41a00000;
  param_1[0x33] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x40b33333;
  param_1[0x3e] = 0x40400000;
  local_4._0_1_ = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x40b33333;
  param_1[0x42] = 0x40400000;
  fVar6 = (float10)FUN_006e8de0();
  param_1[0x43] = (float)(fVar6 - (float10)_DAT_00890fc8);
  fVar6 = (float10)FUN_006e8de0();
  param_1[0x44] = (float)(fVar6 - (float10)_DAT_00890fc8);
  fVar7 = (float10)FUN_006e8de0();
  fVar6 = (float10)_DAT_00890fc8;
  param_1[0x46] = 0;
  param_1[0x45] = (float)(fVar7 - fVar6);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x4f) = 0xffff;
  FUN_0077b9e0();
  local_4._0_1_ = 3;
  FUN_0077b9e0();
  param_1[0x1ce] = 0;
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar1 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x34] = uVar1;
  uVar1 = (**(code **)(*(int *)param_1[0x12] + 0x48))();
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  FUN_00673810(uVar1,param_1 + 0x1ce,param_1 + 0x1c4,10);
  FUN_00452880(0x14,1);
  local_4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  pvStack_c._0_1_ = 5;
  if (local_4 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00454810(0x22515733,0);
    if (iVar2 == 0) {
      iVar2 = FUN_006269b0(0xc);
    }
    uVar1 = FUN_00402bb0(iVar2,0,0);
  }
  pvStack_c._0_1_ = 4;
  param_1[0x3a] = uVar1;
  local_4 = FUN_005d29d0(0x2e8,0);
  pvStack_c._0_1_ = 6;
  if (local_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0077b9e0();
  }
  param_1[0x1c] = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd] + 0x54))();
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x20))();
  param_1[0x22] = *puVar4;
  param_1[0x23] = puVar4[1];
  param_1[0x24] = puVar4[2];
  uVar8 = 0;
  local_4 = local_4 & 0xffffff00;
  uVar1 = 1;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0x12] + 0x44))();
  if (*piVar3 == DAT_0092c4f4) {
    uVar1 = 5;
    goto switchD_0043ac78_caseD_4;
  }
  uVar5 = (**(code **)(*(int *)param_1[0x12] + 0x58))();
  switch(uVar5) {
  case 0:
  case 6:
    uVar1 = 4;
    goto LAB_0043ac93;
  case 1:
    break;
  case 2:
    uVar1 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 3:
    uVar1 = 2;
LAB_0043ac93:
    local_4 = CONCAT31(local_4._1_3_,1);
    break;
  default:
    goto switchD_0043ac78_caseD_4;
  }
  uVar8 = 1;
switchD_0043ac78_caseD_4:
  FUN_0076f480(param_1);
  FUN_007658a0(uVar1);
  FUN_0076e2d0(uVar8);
  *(undefined1 *)(param_1[0x1c] + 0x54) = (undefined1)local_4;
  iVar2 = FUN_005d29d0(0x40,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00418000(param_1[0xd]);
  }
  param_1[0x28] = uVar1;
  local_4 = FUN_005d29d0(0x2e8,0);
  pvStack_c._0_1_ = 7;
  if (local_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0077b9e0();
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
  param_1[0x39] = uVar1;
  FUN_00414ce0();
  local_4 = FUN_005cc240("AIVehicle");
  uVar1 = FUN_006ee9b0(&local_4,unaff_retaddr,param_2,param_3);
  param_1[0x2b] = uVar1;
  FUN_006e8e90(uVar1,"AI Think");
  (**(code **)(*(int *)param_1[0x12] + 0x58))();
  ExceptionList = (void *)0x0;
  return param_1;
}

