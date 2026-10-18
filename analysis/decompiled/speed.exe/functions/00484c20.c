/* speed.exe 00484c20 FUN_00484c20; analysis pseudocode, not buildable source.
 * calls 004725d0 FUN_004725d0
 * calls 00786940 FUN_00786940
 * calls 005d29d0 FUN_005d29d0
 * calls 00652ad0 _malloc
 * calls 00470890 FUN_00470890
 * calls 005d8660 FUN_005d8660
 * calls 0047b980 FUN_0047b980
 * calls 004716a0 FUN_004716a0
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 * calls 00479140 FUN_00479140
 * calls 00468fa0 FUN_00468fa0
 * calls 00444fe0 FUN_00444fe0
 * calls 006fbf80 FUN_006fbf80
 * calls 00481bd0 FUN_00481bd0
 * calls 005d59f0 FUN_005d59f0
 * calls 00478ec0 FUN_00478ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00484c20(undefined4 *param_1,int param_2,int *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *extraout_ECX;
  undefined1 auStackY_100 [84];
  undefined4 uVar10;
  float *local_98;
  undefined1 *local_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 auStack_60 [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086aa54;
  pvStack_1c = ExceptionList;
  local_98 = (float *)0x484c52;
  ExceptionList = &pvStack_1c;
  FUN_005d8660();
  *param_1 = &PTR_FUN_00894bac;
  puVar9 = param_1 + 6;
  local_98 = (float *)&LAB_00402820;
  local_14 = 0;
  *puVar9 = &PTR_FUN_00890970;
  param_1[7] = param_1 + 1;
  FUN_005d7930();
  *puVar9 = &PTR_FUN_00894974;
  local_14._0_1_ = 1;
  param_1[8] = &PTR___purecall_00890d38;
  FUN_0047b980();
  param_1[9] = &PTR___purecall_00895120;
  local_14._0_1_ = 2;
  *param_1 = &PTR_FUN_00895150;
  *puVar9 = &PTR_LAB_00895134;
  param_1[8] = &PTR_FUN_00895130;
  param_1[9] = &PTR_LAB_00895128;
  local_98 = (float *)0x484cc5;
  FUN_00786940();
  param_1[0x11] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = *(undefined4 *)(param_2 + 8);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x40000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  DAT_00911054 = 0;
  DAT_00911055 = 0;
  local_14._0_1_ = 3;
  if (*(char *)(param_2 + 700) != '\0') {
    DAT_00911054 = 1;
    param_1[0x1b] = 0x3f800000;
    _DAT_008ed454 = 0x40000000;
    param_1[0x1a] = 0x3e99999a;
  }
  local_98 = (float *)0x14;
  puVar2 = (undefined4 *)FUN_005d29d0();
  local_14._0_1_ = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    local_98 = extraout_ECX;
  }
  else {
    *puVar2 = &PTR_FUN_008952f0;
    uVar3 = FUN_00478ec0();
    local_98 = (float *)(puVar2 + 1);
    puVar2[2] = uVar3;
    puVar2[3] = 0;
    puVar2[4] = puVar9;
  }
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[0x12] = puVar2;
  local_98 = (float *)FUN_005cc240("CameraMessagePort");
  uVar3 = FUN_00479140(param_1,&LAB_00473220,0);
  param_1[0x1e] = uVar3;
  local_98 = (float *)0x484db7;
  FUN_006fbf80();
  local_78 = auStackY_100;
  if (*(int **)(param_2 + 0x20) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(param_2 + 0x20) + 0x14))();
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == 0xe)) {
      local_78 = (undefined1 *)CONCAT31((int3)((uint)&local_98 >> 8),DAT_008ee392);
    }
  }
  local_98 = (float *)0x484de9;
  pvVar5 = _malloc(0x120);
  local_14._0_1_ = 5;
  if (pvVar5 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    local_98 = (float *)0x484e01;
    iVar4 = FUN_004716a0();
  }
  fVar1 = _DAT_00890968;
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[0xc] = iVar4;
  if (fVar1 < (float)param_1[0x1b]) {
    *(float *)(iVar4 + 0xc4) = _DAT_0089096c - (float)param_1[0x1b] * _DAT_00894678;
  }
  FUN_004725d0();
  if (param_1[0xe] != 0) {
    local_98 = (float *)auStack_60;
    FUN_00444fe0();
    if (param_1[0x13] != 0) {
      local_98 = (float *)0x484e6c;
      piVar6 = (int *)FUN_005d59f0();
      if (piVar6 != (int *)0x0) {
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x13] + 4))();
        piVar7 = (int *)(**(code **)(*piVar7 + 0x54))();
        pfVar8 = (float *)(**(code **)(*piVar6 + 0x3c))();
        fStack_6c = *pfVar8;
        fStack_68 = pfVar8[1];
        fStack_64 = pfVar8[2];
        local_98 = &fStack_6c;
        (**(code **)(*piVar7 + 0xa0))();
        pfVar8 = (float *)(**(code **)(*piVar7 + 0x20))();
        fStack_6c = fStack_6c + *pfVar8;
        fStack_68 = fStack_68 + pfVar8[1];
        fStack_30 = fStack_64 + pfVar8[2];
        fStack_2c = -fStack_6c;
        fStack_28 = fStack_68;
      }
    }
    local_98 = (float *)param_1[0xf];
    FUN_00468fa0(0,auStack_60);
  }
  local_98 = (float *)0x484f0c;
  pvVar5 = _malloc(0xf0);
  local_14._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 8);
    local_98 = (float *)0x0;
    uVar10 = 0;
    iVar4 = (**(code **)(*param_3 + 0x14))(local_78,0);
    uVar3 = FUN_00481bd0(uVar3,param_1[0xc],*(undefined4 *)(iVar4 + 0xc),local_78,uVar10);
  }
  local_14._0_1_ = 3;
  param_1[10] = uVar3;
  local_98 = (float *)0x484f5b;
  puVar9 = _malloc(0x90);
  local_14 = CONCAT31(local_14._1_3_,7);
  if (puVar9 == (undefined4 *)0x0) {
    param_1[0xb] = 0;
  }
  else {
    uVar3 = param_1[0xc];
    local_98 = (float *)0x3;
    FUN_00470890();
    *puVar9 = &PTR_LAB_00894e48;
    puVar9[0x20] = uVar3;
    if (DAT_00911020 == 0) {
      *(undefined4 *)(puVar9[7] + 0x2b0) = 0;
    }
    param_1[0xb] = puVar9;
  }
  ExceptionList = pvStack_1c;
  return param_1;
}

