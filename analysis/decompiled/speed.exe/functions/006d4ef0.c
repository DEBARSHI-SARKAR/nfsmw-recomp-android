/* speed.exe 006d4ef0 FUN_006d4ef0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 00725570 FUN_00725570
 * calls 00452380 FUN_00452380
 * calls 006c3b20 FUN_006c3b20
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006d4ef0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  void *pvStack_d4;
  void *pvStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  int iStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  float fStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  float *pfStack_64;
  float local_50;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0087e360;
  pvStack_1c = ExceptionList;
  local_38 = 0;
  local_3c = 0;
  bVar5 = *(int *)(DAT_0093deb8 + 0x28) != 1;
  if (DAT_008f9b5d == '\0') {
    if (bVar5) {
      local_50 = _DAT_0090191c - _DAT_008fae64 * (_DAT_0090191c - _DAT_00901918);
    }
    else {
      local_50 = _DAT_00901924 - _DAT_008fae64 * (_DAT_00901924 - _DAT_00901920);
    }
    local_50 = local_50 * *(float *)(param_1 + 0x90);
  }
  else if (bVar5) {
    local_50 = *(float *)(param_1 + 0x90);
  }
  else {
    local_50 = _DAT_00901928 * *(float *)(param_1 + 0x90);
  }
  local_40 = _DAT_0089096c - local_50;
  piStack_6c = *(int **)(param_2 + 0x48);
  local_44 = local_50;
  pfStack_64 = &local_44;
  uStack_68 = *(undefined4 *)(param_1 + 0x1fc);
  fStack_70 = 1.003871e-38;
  ExceptionList = &pvStack_1c;
  (**(code **)(*piStack_6c + 0x88))();
  fStack_70 = _DAT_00901914 * *(float *)(param_1 + 0x94);
  piStack_78 = *(int **)(param_2 + 0x48);
  if (!bVar5) {
    fStack_70 = fStack_70 * _DAT_008933d4;
  }
  uStack_74 = *(undefined4 *)(param_1 + 0x200);
  puStack_7c = (undefined1 *)0x6d5010;
  (**(code **)(*piStack_78 + 0x78))();
  fVar1 = _DAT_0090190c;
  if (!bVar5) {
    fVar1 = _DAT_00901910;
  }
  _DAT_00901904 = 0x3f800000;
  fVar1 = (fVar1 - _DAT_00901908) * _DAT_008fae64 + _DAT_00901908;
  if (DAT_008f9b5d != '\0') {
    fVar2 = (float)DAT_00982c78;
    if (DAT_00982c78 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    fVar1 = fVar2 * _DAT_00890d60;
    if (_DAT_0089096c < fVar2 * _DAT_00890d60) {
      fVar1 = _DAT_00890968;
    }
  }
  piStack_84 = *(int **)(param_2 + 0x48);
  pfStack_64 = (float *)(_DAT_0089096c - fVar1);
  puStack_7c = &stack0xffffffa4;
  iStack_80 = *(int *)(param_1 + 0x204);
  puStack_88 = (undefined4 *)0x6d510c;
  (**(code **)(*piStack_84 + 0x88))();
  if (DAT_008f9b5d == '\0') {
    if (bVar5) {
      fVar1 = _DAT_009018f8 - _DAT_008fae64 * (_DAT_009018f8 - _DAT_009018f4);
    }
    else {
      fVar1 = _DAT_00901900 - _DAT_008fae64 * (_DAT_00901900 - _DAT_009018fc);
    }
    *(float *)(param_1 + 0x98) = fVar1;
  }
  uStack_68 = *(undefined4 *)(param_1 + 0x98);
  pfStack_64 = (float *)(_DAT_0089096c - *(float *)(param_1 + 0x98));
  puStack_88 = &uStack_68;
  uStack_8c = *(undefined4 *)(param_1 + 0x208);
  piStack_90 = *(int **)(param_2 + 0x48);
  uStack_94 = 0x6d5199;
  (**(code **)(*piStack_90 + 0x88))();
  uStack_94 = *(undefined4 *)(param_1 + 0x170);
  piStack_9c = *(int **)(param_2 + 0x48);
  uStack_98 = *(undefined4 *)(param_1 + 0x210);
  fStack_a0 = 1.0039373e-38;
  (**(code **)(*piStack_9c + 0x78))();
  piStack_a8 = *(int **)(param_2 + 0x48);
  fStack_a0 = *(float *)(param_1 + 0x174) + _DAT_0089096c;
  uStack_a4 = *(undefined4 *)(param_1 + 0x214);
  uStack_ac = 0x6d51d0;
  (**(code **)(*piStack_a8 + 0x78))();
  uStack_ac = *(undefined4 *)(param_1 + 0x17c);
  piStack_b4 = *(int **)(param_2 + 0x48);
  uStack_b0 = *(undefined4 *)(param_1 + 0x21c);
  uStack_b8 = 0x6d51e7;
  (**(code **)(*piStack_b4 + 0x78))();
  uStack_b8 = 0x6d51ec;
  iVar3 = FUN_00725570();
  uStack_b8 = 0;
  uStack_bc = 0;
  piStack_c0 = (int *)0xbfa7b6ac;
  uStack_c4 = 0x6ab2d241;
  uStack_c8 = 0x6d5201;
  piStack_c0 = (int *)FUN_00455fd0();
  uStack_c4 = 0x6d520e;
  FUN_00452380();
  uStack_68 = 0;
  if (iStack_80 == 0) {
    uStack_b8 = 0x50;
    uStack_bc = 0x6d5225;
    iStack_80 = FUN_006269b0();
  }
  uStack_68 = 1;
  uStack_b8 = 0;
  if (iVar3 == 0) {
    uStack_bc = 0x8bc39288;
    piStack_c0 = (int *)0x6d525c;
    puVar4 = (undefined4 *)FUN_00454810();
    if (puVar4 == (undefined4 *)0x0) {
      uStack_b8 = 4;
      uStack_bc = 0x6d5267;
      puVar4 = (undefined4 *)FUN_006269b0();
    }
    uStack_b8 = *puVar4;
    piStack_c0 = *(int **)(param_2 + 0x48);
    uStack_bc = *(undefined4 *)(param_1 + 0x220);
    uStack_c4 = 0x6d527d;
    (**(code **)(*piStack_c0 + 0x78))();
    uStack_c4 = *(undefined4 *)(param_1 + 0x178);
  }
  else {
    uStack_bc = *(undefined4 *)(param_1 + 0x220);
    piStack_c0 = *(int **)(param_2 + 0x48);
    uStack_c4 = 0x6d524a;
    (**(code **)(*piStack_c0 + 0x78))();
    uStack_c4 = 0;
  }
  uStack_c8 = *(undefined4 *)(param_1 + 0x218);
  piStack_cc = *(int **)(param_2 + 0x48);
  pvStack_d0 = (void *)0x6d5294;
  (**(code **)(*piStack_cc + 0x78))();
  _DAT_00982c74 = *(undefined4 *)(param_1 + 0x178);
  pvStack_d0 = *(void **)(**(int **)(param_1 + 0x1f0) + 0x18);
  pvStack_d4 = *(void **)(*(int *)(param_2 + 0x44) + 0x72c);
  piStack_d8 = *(int **)(param_2 + 0x48);
  piStack_dc = (int *)0x6d52c1;
  (**(code **)(*piStack_d8 + 0xd0))();
  piStack_e0 = *(int **)(*(int *)(param_2 + 0x44) + 0xd44);
  piStack_e4 = *(int **)(param_2 + 0x48);
  piStack_dc = (int *)DAT_00982900;
  piStack_e8 = (int *)0x6d52de;
  (**(code **)(*piStack_e4 + 0xd0))();
  uStack_c8 = *(undefined4 *)(param_1 + 0x98);
  piVar6 = *(int **)(param_2 + 0x48);
  piStack_e8 = &uStack_c8;
  piStack_ec = *(int **)(param_1 + 0x22c);
  uStack_bc = 0x3f800000;
  uStack_c4 = uStack_c8;
  piStack_c0 = (int *)uStack_c8;
  (**(code **)(*piVar6 + 0x88))(piVar6);
  pvStack_d4 = (void *)(_DAT_0089096c - *(float *)(param_1 + 0x98));
  pvStack_d0 = pvStack_d4;
  piStack_cc = pvStack_d4;
  (**(code **)(**(int **)(param_2 + 0x48) + 0x88))
            (*(int **)(param_2 + 0x48),*(undefined4 *)(param_1 + 0x230),&pvStack_d4);
  piStack_e0 = piStack_ec;
  piStack_d8 = piStack_ec;
  piStack_dc = piStack_ec;
  (**(code **)(**(int **)(param_2 + 0x48) + 0x88))
            (*(int **)(param_2 + 0x48),*(undefined4 *)(param_1 + 0x224),&piStack_e0);
  piStack_ec = piVar6;
  piStack_e8 = piVar6;
  piStack_e4 = piVar6;
  (**(code **)(**(int **)(param_2 + 0x48) + 0x88))
            (*(int **)(param_2 + 0x48),*(undefined4 *)(param_1 + 0x228),&piStack_ec);
  FUN_006c3b20();
  _DAT_00988564 = 1;
  uStack_c8 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_d0;
  return;
}

