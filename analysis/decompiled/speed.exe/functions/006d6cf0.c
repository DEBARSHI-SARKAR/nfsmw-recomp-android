/* speed.exe 006d6cf0 FUN_006d6cf0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 0069b6c0 FUN_0069b6c0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d6cf0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  void *local_70;
  float local_6c;
  float local_68;
  undefined4 local_64 [2];
  undefined1 auStack_5c [4];
  double local_58;
  float local_50;
  float local_4c;
  float local_48 [2];
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087e428;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_0069b6c0(0xce3b435b,0,0);
  local_14 = 0;
  local_58 = (double)(_DAT_0090193c - _DAT_00901938);
  if (DAT_00901934 == '\0') {
    pfVar3 = (float *)FUN_00454810(0xc8baf5d6,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(4);
    }
    local_d0 = *pfVar3 * _DAT_00890dc4;
    pfVar3 = (float *)FUN_00454810(0x555fd699,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(4);
    }
    local_b8 = *pfVar3 * _DAT_00890dc4;
    pfVar3 = (float *)FUN_00454810(0x2cf0b378,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(0x10);
    }
    local_cc = *pfVar3;
    local_c8 = pfVar3[1];
    local_c4 = pfVar3[2];
    local_c0 = pfVar3[3];
    pfVar3 = (float *)FUN_00454810(0xa450f56c,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(0x10);
    }
    local_b0 = *pfVar3;
    local_ac = pfVar3[1];
    local_a8 = pfVar3[2];
    fVar1 = pfVar3[3];
    pfVar3 = (float *)FUN_00454810(0xdba22a95,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(4);
    }
    local_d4 = *pfVar3;
    puVar4 = (undefined4 *)FUN_00454810(0x2f70d78a,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    local_b4 = *puVar4;
  }
  else {
    local_b0 = *(float *)(DAT_009b392c + 0x70);
    fVar1 = *(float *)(DAT_009b392c + 0x7c);
    local_ac = *(float *)(DAT_009b392c + 0x74);
    local_b8 = *(float *)(DAT_009b392c + 0x90) * _DAT_00890dc4;
    local_a8 = *(float *)(DAT_009b392c + 0x78);
    local_cc = *(float *)(DAT_009b392c + 0x80);
    local_c8 = *(float *)(DAT_009b392c + 0x84);
    local_d0 = *(float *)(DAT_009b392c + 0x94) * _DAT_00890dc4;
    local_c4 = *(float *)(DAT_009b392c + 0x88);
    local_c0 = *(float *)(DAT_009b392c + 0x8c);
    local_b4 = *(undefined4 *)(DAT_009b392c + 0x98);
    local_d4 = *(float *)(DAT_009b392c + 0x9c);
  }
  if (local_d0 <= _DAT_00890968) {
    _DAT_008fae20 = (float)_DAT_008942e0;
  }
  else {
    _DAT_008fae20 = local_d0 * (float)local_58 + _DAT_00901938;
  }
  _DAT_008fae10 = local_b8 * (float)local_58 + _DAT_00901938;
  _DAT_008fae14 = _DAT_008fae20 * local_cc;
  _DAT_008fae04 = local_b0 * _DAT_008fae10;
  _DAT_008fae18 = _DAT_008fae20 * local_c8;
  _DAT_008fae08 = local_ac * _DAT_008fae10;
  _DAT_008fae1c = _DAT_008fae20 * local_c4;
  _DAT_008fae0c = local_a8 * _DAT_008fae10;
  _DAT_008fae20 = _DAT_008fae20 * local_c0;
  _DAT_008fae10 = _DAT_008fae10 * fVar1;
  pcVar5 = (char *)FUN_00454810(0x110882d5,0);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)FUN_006269b0(1);
  }
  iVar2 = DAT_0093de78;
  DAT_008fae38 = *pcVar5;
  if (DAT_008fae38 == '\0') {
    local_a0 = 0.0;
    local_9c = 0.0;
    local_98 = 0.0;
  }
  else {
    local_a0 = _DAT_008fae04 + _DAT_008fae14;
    local_50 = _DAT_0089096c / local_a0;
    local_30 = _DAT_008fae04 * (float)s__Evt_car_no_env_fixed_008afb5b._1_4_;
    local_40 = _DAT_008fae14 * _DAT_008afb58;
    local_9c = _DAT_008fae08 + _DAT_008fae18;
    local_4c = _DAT_0089096c / local_9c;
    local_2c = _DAT_008fae08 * (float)s__Evt_car_no_env_fixed_008afb5b._1_4_;
    local_3c = _DAT_008fae18 * _DAT_008afb58;
    local_98 = _DAT_008fae0c + _DAT_008fae1c;
    local_48[0] = _DAT_0089096c / local_98;
    local_28 = _DAT_008fae0c * (float)s__Evt_car_no_env_fixed_008afb5b._1_4_;
    local_38 = _DAT_008fae1c * _DAT_008afb58;
  }
  local_70 = (void *)((_DAT_0089096c - local_d4) * (_DAT_0089096c - local_d4));
  local_6c = local_d4 * local_d4 + _DAT_0089096c;
  local_68 = local_d4 * _DAT_00890e94;
  if (DAT_008fae38 == '\0') {
    local_64[0] = 0;
  }
  else {
    local_64[0] = local_b4;
  }
  (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x88))
            (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x63c),
             &local_a0);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0x88))
            (*(int **)(iVar2 + 0x48),*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x664),auStack_5c);
  piVar6 = *(int **)(iVar2 + 0x48);
  (**(code **)(*piVar6 + 0x88))(piVar6,*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x68c),local_48);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0x88))
            (*(int **)(iVar2 + 0x48),*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x6b4),local_64);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0x88))
            (*(int **)(iVar2 + 0x48),*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x6dc),&local_a0);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0x88))
            (*(int **)(iVar2 + 0x48),*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0xeac),&DAT_008fae24);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0x78))
            (*(int **)(iVar2 + 0x48),*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x704),piVar6);
  local_68 = -NAN;
  FUN_0045a430();
  ExceptionList = local_70;
  return;
}

