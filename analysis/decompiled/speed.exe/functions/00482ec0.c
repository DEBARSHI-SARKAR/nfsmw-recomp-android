/* speed.exe 00482ec0 FUN_00482ec0; analysis pseudocode, not buildable source.
 * calls 0046d5e0 FUN_0046d5e0
 * calls 0045f340 FUN_0045f340
 * calls 00470fe0 FUN_00470fe0
 * calls 00471960 FUN_00471960
 * calls 00478290 FUN_00478290
 * calls 0046dee0 FUN_0046dee0
 * calls 00469760 FUN_00469760
 * calls 0045f490 FUN_0045f490
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 004699d0 FUN_004699d0
 * calls 0045f7c0 FUN_0045f7c0
 * calls 007c4b80 FUN_007c4b80
 * calls 0047b030 FUN_0047b030
 * calls 00482160 FUN_00482160
 * calls 00469330 FUN_00469330
 * calls 0046ddd0 FUN_0046ddd0
 * calls 00444fe0 FUN_00444fe0
 * calls 00460bf0 FUN_00460bf0
 * calls 00460ca0 FUN_00460ca0
 * calls 00466a60 FUN_00466a60
 * calls 004700d0 FUN_004700d0
 * calls 0046d680 FUN_0046d680
 * calls 0047c6f0 FUN_0047c6f0
 * calls 004696c0 FUN_004696c0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0046c380 FUN_0046c380
 * calls 0046a480 FUN_0046a480
 * calls 0046d800 FUN_0046d800
 * calls 00469210 FUN_00469210
 * calls 0047b3a0 FUN_0047b3a0
 * calls 0046de90 FUN_0046de90
 * calls 0064b680 FUN_0064b680
 * calls 00467420 FUN_00467420
 * calls 004693f0 FUN_004693f0
 * calls 0046dd10 FUN_0046dd10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00482ec0(int param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  short sVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  int iVar19;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [76];
  
  iVar5 = DAT_008ee344;
  if ((_DAT_00890968 == (float)DAT_008ee398) && (cVar7 = FUN_0064b680(), cVar7 != '\0')) {
    return;
  }
  bVar16 = false;
  if ((iVar5 != 0) &&
     (((iVar13 = *(int *)(iVar5 + 8), iVar13 == 0 ||
       (bVar16 = *(int *)(iVar13 + 4) == 3, iVar13 == 0)) || (*(int *)(iVar13 + 4) != 2)))) {
    DAT_009110a0 = 0;
  }
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_00482160(0,0);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  if ((*(int *)(param_1 + 0xbc) == 3) || (*(int *)(param_1 + 0xc0) == 3)) {
    if (DAT_009885c8 == (int *)0x0) {
      return;
    }
    piVar11 = (int *)(**(code **)(*DAT_009885c8 + 0x48))();
    if (piVar11 == (int *)0x0) {
      return;
    }
    uVar12 = (**(code **)(*piVar11 + 0x30))();
    FUN_00444fe0(&local_90,uVar12);
  }
  if (iVar5 == 0) {
    fVar17 = (float10)FUN_0047b3a0();
  }
  else {
    fVar17 = (float10)FUN_0047b030();
  }
  fVar2 = (float)fVar17;
  fStack_180 = 0.0;
  fVar6 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4);
  fVar3 = fVar6;
  if (fVar6 < _DAT_00890968) {
    fVar3 = -fVar6;
  }
  if (_DAT_00891218 < fVar3) {
    fStack_180 = (fVar2 - *(float *)(param_1 + 0xb4)) / fVar6;
  }
  if (_DAT_0089096c <= fVar2) {
    DAT_008ee380 = FUN_00460bf0(&DAT_00890978);
    FUN_00460ca0(&DAT_008ee384,&DAT_00890978,0xd);
    DAT_008ee391 = 0;
    DAT_008f9b28 = 1;
  }
  iVar13 = *(int *)(param_1 + 0xac);
  fStack_124 = ((fStack_180 * *(float *)(iVar13 + 0x10) + *(float *)(iVar13 + 0x14)) * fStack_180 +
               *(float *)(iVar13 + 0x18)) * fStack_180 + *(float *)(iVar13 + 0x1c);
  if (fStack_124 < _DAT_00890968) {
LAB_00483145:
    fStack_124 = 0.01;
  }
  else {
    if (_DAT_00890fc8 <= fStack_124) {
      fStack_124 = _DAT_00890fc8;
    }
    fStack_124 = fStack_124 * _DAT_00890dc4;
    *(float *)(*(int *)(param_1 + 0x1c) + 0xcc) = fStack_124;
    if (fStack_124 < _DAT_00890dc4) goto LAB_00483145;
  }
  iVar13 = *(int *)(param_1 + 0x94);
  fVar6 = ((fStack_180 * *(float *)(iVar13 + 0x10) + *(float *)(iVar13 + 0x14)) * fStack_180 +
          *(float *)(iVar13 + 0x18)) * fStack_180 + *(float *)(iVar13 + 0x1c);
  if (_DAT_00890968 <= fVar6) {
    *(float *)(*(int *)(param_1 + 0x1c) + 0xbc) = fVar6;
  }
  sVar10 = FUN_0046dee0(fStack_180);
  if ((sVar10 != 0) && (DAT_00911020 == 0)) {
    *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) = sVar10;
  }
  fStack_140 = 0.0;
  fStack_13c = 0.0;
  fStack_138 = 0.0;
  uStack_134 = 0;
  FUN_0046dd10(&fStack_140,fStack_180);
  fStack_150 = 0.0;
  fStack_14c = 0.0;
  fStack_148 = 0.0;
  uStack_144 = 0;
  FUN_0046ddd0(&fStack_150,fStack_180);
  iVar13 = *(int *)(param_1 + 0xc4);
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  if (iVar13 == 0) {
LAB_004833db:
    iVar19 = *(int *)(param_1 + 0x80);
    iVar13 = iVar19 + 0x10;
LAB_004833e6:
    FUN_00466a60(&uStack_120,iVar13,iVar19);
  }
  else {
    if (*(char *)(iVar13 + 8) != '\0') {
      iVar19 = *(int *)(param_1 + 0x80);
      iVar13 = param_1 + 0xd0;
      goto LAB_004833e6;
    }
    if (((iVar13 == 0) || (*(char *)(iVar13 + 9) == '\0')) || (!bVar16)) goto LAB_004833db;
    puVar15 = (undefined4 *)(param_1 + 0x110);
    fVar6 = fVar2 * _DAT_00894604 + _DAT_00890cd4;
    FUN_004696c0(puVar15,puVar15,*(undefined4 *)(param_1 + 0x80),fVar6);
    puVar1 = (undefined4 *)(param_1 + 0x120);
    FUN_004696c0(puVar1,puVar1,*(int *)(param_1 + 0x80) + 0x10,fVar6);
    FUN_00469760(&uStack_120);
    FUN_0045f490(puVar1,puVar1);
    uStack_120 = *puVar1;
    uStack_11c = *(undefined4 *)(param_1 + 0x124);
    uStack_118 = *(undefined4 *)(param_1 + 0x128);
    uStack_114 = 0;
    FUN_0045f7c0(&uStack_110,&uStack_100,&uStack_120);
    FUN_0045f7c0(&uStack_100,&uStack_120,&uStack_110);
    uStack_f0 = *puVar15;
    uStack_ec = *(undefined4 *)(param_1 + 0x114);
    uStack_e8 = *(undefined4 *)(param_1 + 0x118);
    uStack_e4 = 0x3f800000;
  }
  iVar13 = *(int *)(param_1 + 0xbc);
  if (iVar13 == 0) {
    puVar15 = &uStack_120;
LAB_00483443:
    thunk_FUN_006bd940(&fStack_140,puVar15,&fStack_140);
  }
  else if (iVar13 == 2) {
    pfVar14 = *(float **)(param_1 + 0x80);
    fStack_140 = fStack_140 + *pfVar14;
    fStack_13c = fStack_13c + pfVar14[1];
    fStack_138 = fStack_138 + pfVar14[2];
  }
  else if (iVar13 == 3) {
    puVar15 = &local_90;
    goto LAB_00483443;
  }
  iVar13 = *(int *)(param_1 + 0xc0);
  if (iVar13 == 0) {
    puVar15 = &uStack_120;
  }
  else {
    if (iVar13 == 2) {
      pfVar14 = *(float **)(param_1 + 0x80);
      fStack_150 = fStack_150 + *pfVar14;
      fStack_14c = fStack_14c + pfVar14[1];
      fStack_148 = fStack_148 + pfVar14[2];
      goto LAB_004834b5;
    }
    if (iVar13 != 3) goto LAB_004834b5;
    puVar15 = &local_90;
  }
  thunk_FUN_006bd940(&fStack_150,puVar15,&fStack_150);
LAB_004834b5:
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 9) != '\0')) {
    iVar13 = *(int *)(param_1 + 0x80);
    uStack_154 = 0;
    FUN_0046a480(*(undefined4 *)(iVar13 + 0x60),*(undefined4 *)(iVar13 + 100),
                 *(undefined4 *)(iVar13 + 0x68));
    FUN_0046c380(fStack_124 * param_2,0,0);
    pfVar14 = *(float **)(param_1 + 0xb0);
    fStack_160 = *pfVar14 * _DAT_008ee310;
    fStack_15c = pfVar14[0xb] * _DAT_008ee314;
    fStack_158 = pfVar14[0x16] * _DAT_008ee318;
    FUN_004693f0(&fStack_160,&DAT_008ee2f0,&DAT_008ee300);
    fStack_140 = fStack_140 - fStack_160;
    fStack_13c = fStack_13c - fStack_15c;
    fStack_138 = fStack_138 - fStack_158;
    fStack_150 = fStack_150 - fStack_160;
    fStack_14c = fStack_14c - fStack_15c;
    fStack_148 = fStack_148 - fStack_158;
  }
  iVar19 = DAT_008ee348;
  FUN_0046de90(fStack_180);
  uVar12 = FUN_007c4b80();
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  FUN_0046d800(uVar12);
  iVar13 = *(int *)(param_1 + 0x98);
  fStack_170 = ((fStack_180 * *(float *)(iVar13 + 0x10) + *(float *)(iVar13 + 0x14)) * fStack_180 +
               *(float *)(iVar13 + 0x18)) * fStack_180 + *(float *)(iVar13 + 0x1c);
  iVar13 = *(int *)(param_1 + 0x9c);
  fStack_17c = ((fStack_180 * *(float *)(iVar13 + 0x10) + *(float *)(iVar13 + 0x14)) * fStack_180 +
               *(float *)(iVar13 + 0x18)) * fStack_180 + *(float *)(iVar13 + 0x1c);
  if (fStack_170 < _DAT_00890968) {
    fStack_170 = 0.0;
  }
  if (fStack_17c < _DAT_00890968) {
    fStack_17c = 0.0;
  }
  if ((*(int *)(param_1 + 0xc4) == 0) ||
     (iVar13 = *(int *)(*(int *)(param_1 + 0xc4) + 0xc), iVar13 == 0)) {
    iVar13 = *(int *)(param_1 + 0x1c);
    fVar6 = fStack_17c * _DAT_00895298;
    *(undefined4 *)(iVar13 + 0x80) = 0;
    *(undefined4 *)(iVar13 + 0x84) = 0;
    *(float *)(iVar13 + 0x88) = fStack_170;
    *(float *)(iVar13 + 0x8c) = fStack_170;
    iVar13 = *(int *)(param_1 + 0x1c);
    *(float *)(iVar13 + 0x78) = fVar6;
    *(undefined4 *)(iVar13 + 0x70) = 0;
    *(undefined4 *)(iVar13 + 0x74) = 0;
    *(float *)(iVar13 + 0x7c) = fStack_17c * _DAT_00895294;
    iVar13 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar13 + 0xa0) = 0;
    *(undefined4 *)(iVar13 + 0xa4) = 0;
    *(undefined4 *)(iVar13 + 0xa8) = 0;
    *(undefined4 *)(iVar13 + 0xac) = 0;
    iVar13 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar13 + 0x90) = 0;
    *(undefined4 *)(iVar13 + 0x94) = 0;
    *(undefined4 *)(iVar13 + 0x98) = 0;
    *(undefined4 *)(iVar13 + 0x9c) = 0;
    fVar6 = _DAT_008ee378;
    if (iVar5 != 0) {
      fVar6 = *(float *)(iVar5 + 0x10);
    }
    FUN_00467420(&uStack_e0,fVar6 * fVar2,0x3f800000);
  }
  else {
    iVar13 = FUN_00478290(iVar13);
    if (iVar13 != 0) {
      uVar12 = FUN_007c4b80((int)*(short *)(iVar13 + 0xc));
      uVar12 = FUN_00469330(uVar12);
      pfVar14 = (float *)FUN_004699d0(uVar12);
      fStack_158 = pfVar14[2];
      fStack_160 = *pfVar14 * fStack_170;
      fStack_9c = pfVar14[1] * fStack_170;
      fStack_98 = fStack_158 * fStack_170;
      fStack_94 = SQRT(_DAT_0089096c -
                       SQRT(fStack_98 * fStack_98 + fStack_9c * fStack_9c + fStack_160 * fStack_160)
                      );
      fStack_a0 = fStack_160;
      FUN_00469210();
      FUN_00471960(auStack_50,&fStack_a0);
      fStack_160 = pfVar14[3] * fStack_170;
      fStack_15c = pfVar14[4] * fStack_170;
      uStack_154 = 0;
      fStack_158 = pfVar14[5] * fStack_170;
      FUN_00466a60(auStack_50,auStack_50,&fStack_160);
      FUN_0045ecf0(&uStack_e0,auStack_50,&uStack_e0);
    }
  }
  if (((iVar5 == 0) || (*(int *)(iVar5 + 8) == 0)) || (*(int *)(*(int *)(iVar5 + 8) + 4) != 2)) {
    if (((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 7) != '\0')) &&
       (iVar19 < 9)) {
      FUN_00470fe0(&uStack_e0,*(undefined4 *)(param_1 + 0x80));
    }
    if (((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 6) != '\0')) &&
       (iVar19 < 9)) {
      FUN_0047c6f0(&uStack_e0,*(int *)(param_1 + 0x80),*(int *)(param_1 + 0x80) + 0x50);
    }
  }
  else {
    uVar8 = FUN_00470fe0(&uStack_e0,*(undefined4 *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 200) = uVar8;
    bVar9 = FUN_0047c6f0(&uStack_e0,*(int *)(param_1 + 0x80),*(int *)(param_1 + 0x80) + 0x50);
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | bVar9;
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  fVar2 = ((fStack_180 * *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x14)) * fStack_180 +
          *(float *)(iVar5 + 0x18)) * fStack_180 + *(float *)(iVar5 + 0x1c);
  if (_DAT_00890968 <= fVar2) {
    *(float *)(*(int *)(param_1 + 0x1c) + 200) = fVar2 * _DAT_00895290;
  }
  iVar5 = *(int *)(param_1 + 0xa4);
  fVar2 = ((fStack_180 * *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x14)) * fStack_180 +
          *(float *)(iVar5 + 0x18)) * fStack_180 + *(float *)(iVar5 + 0x1c);
  if ((fVar2 < _DAT_00890968) || (_DAT_0089528c <= fVar2)) {
    if ((DAT_00911020 == 0) &&
       (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = 0, DAT_00911020 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xa0);
    fVar6 = ((fStack_180 * *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x14)) * fStack_180 +
            *(float *)(iVar5 + 0x18)) * fStack_180 + *(float *)(iVar5 + 0x1c);
    if (fVar6 < _DAT_00890dc4) {
      fVar6 = _DAT_00890dc4;
    }
    fVar6 = fVar6 * _DAT_00894200;
    uVar12 = FUN_0046dee0(fStack_180);
    fVar17 = (float10)FUN_0046d5e0(uVar12);
    fVar3 = (float)fVar17;
    fVar18 = (float10)FUN_0046d680(fVar2);
    fVar17 = (float10)(float)(fVar17 * (float10)fVar3) / (fVar18 * (float10)_DAT_00890eac) +
             (float10)fVar3;
    fVar2 = (float)fVar17;
    fVar4 = (float)((fVar17 - (float10)fVar3) * (float10)fVar6);
    fVar3 = (fVar4 / ((fVar2 + fVar6) - (fVar3 + fVar3))) * _DAT_00890d60;
    fVar2 = fVar2 - fVar6;
    fVar6 = _DAT_00892fa4;
    if (_DAT_008910cc < fVar2) {
      fVar6 = (fVar4 / fVar2) * _DAT_00890d60;
    }
    if (fVar6 < fVar3) {
      fVar6 = fVar3 + _DAT_00890dc4;
    }
    if ((DAT_00911020 == 0) &&
       (*(float *)(*(int *)(param_1 + 0x1c) + 0xb4) = (fVar3 + fVar6) * _DAT_00894594,
       DAT_00911020 == 0)) {
      *(float *)(*(int *)(param_1 + 0x1c) + 0xb8) = fVar6 - fVar3;
    }
  }
  fVar17 = (float10)FUN_0045f340(&fStack_140,&fStack_150);
  if (DAT_00911020 == 0) {
    *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = (float)fVar17;
  }
  FUN_004700d0(&uStack_e0,fStack_124 * param_2);
  return;
}

