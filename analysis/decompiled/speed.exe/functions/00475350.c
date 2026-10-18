/* speed.exe 00475350 FUN_00475350; analysis pseudocode, not buildable source.
 * calls 00468a90 FUN_00468a90
 * calls 0057d0f0 FUN_0057d0f0
 * calls 0045da30 FUN_0045da30
 * calls 0045ded0 FUN_0045ded0
 * calls 00471a70 FUN_00471a70
 * calls 00475170 FUN_00475170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00475350(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  char cVar15;
  short sVar16;
  ushort uVar17;
  int iVar18;
  float local_74;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  DAT_00911092 = 1;
  FUN_0057d0f0();
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 0x44);
  uVar3 = *(undefined4 *)(iVar18 + 0x48);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(iVar18 + 0x40);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 0x44);
  uVar3 = *(undefined4 *)(iVar18 + 0x48);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(iVar18 + 0x40);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 0x44);
  uVar3 = *(undefined4 *)(iVar18 + 0x48);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(iVar18 + 0x40);
  *(undefined4 *)(param_1 + 0x194) = uVar2;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 0x44);
  uVar3 = *(undefined4 *)(iVar18 + 0x48);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar18 + 0x40);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 100);
  uVar3 = *(undefined4 *)(iVar18 + 0x68);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar18 + 0x60);
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 100);
  uVar3 = *(undefined4 *)(iVar18 + 0x68);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(iVar18 + 0x60);
  *(undefined4 *)(param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 100);
  uVar3 = *(undefined4 *)(iVar18 + 0x68);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(iVar18 + 0x60);
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(iVar18 + 100);
  uVar5 = *(undefined4 *)(iVar18 + 0x60);
  uVar3 = *(undefined4 *)(iVar18 + 0x68);
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  *(undefined4 *)(param_1 + 0x248) = uVar3;
  *(undefined4 *)(param_1 + 0x240) = uVar5;
  cVar14 = FUN_00475170(&local_40);
  if (cVar14 != '\0') {
    iVar18 = *(int *)(param_1 + 0x1c);
    pfVar1 = (float *)(iVar18 + 0x60);
    fVar9 = *(float *)(iVar18 + 0x40) - *pfVar1;
    fVar6 = *(float *)(iVar18 + 0x44) - *(float *)(iVar18 + 100);
    fVar10 = *(float *)(iVar18 + 0x48) - *(float *)(iVar18 + 0x68);
    fVar7 = *pfVar1 - local_40;
    fVar12 = *(float *)(iVar18 + 100) - local_3c;
    fVar4 = *(float *)(iVar18 + 0x68) - local_38;
    fVar8 = SQRT(fVar12 * fVar12 + fVar7 * fVar7);
    if (fVar8 < _DAT_00890cd4) {
      fVar8 = _DAT_00890cd4;
    }
    fVar13 = fVar7 * (_DAT_0089096c / fVar8) * _DAT_00894820;
    fVar12 = fVar12 * (_DAT_0089096c / fVar8) * _DAT_00894820;
    fVar7 = fVar10;
    if (fVar10 < fVar4) {
      fVar7 = fVar4;
    }
    if (_DAT_008947b0 < fVar7) {
      fVar7 = _DAT_008947b0;
    }
    fVar7 = fVar7 + _DAT_008910f0;
    fVar4 = *pfVar1;
    fVar8 = fVar12 + *(float *)(iVar18 + 100);
    fVar11 = fVar7 + *(float *)(iVar18 + 0x68);
    fVar7 = (fVar9 * fVar13 + fVar10 * fVar7 + fVar6 * fVar12) /
            (SQRT(fVar7 * fVar7 + fVar13 * fVar13 + fVar12 * fVar12) *
            SQRT(fVar6 * fVar6 + fVar10 * fVar10 + fVar9 * fVar9));
    if (fVar7 < _DAT_00890968) {
      fVar7 = (_DAT_0089096c - fVar7) * _DAT_00894594;
      if (fVar9 * fVar12 - fVar6 * fVar13 < _DAT_00890968) {
        fVar7 = -fVar7;
      }
      fVar10 = -(fVar6 * fVar7) + *(float *)(iVar18 + 0x40);
      fVar6 = fVar9 * fVar7 + *(float *)(iVar18 + 0x44);
      uVar2 = *(undefined4 *)(iVar18 + 0x48);
      fVar9 = fVar12 * fVar7 + fVar13 + fVar4;
      fVar7 = -(fVar13 * fVar7) + fVar8;
      local_30 = fVar9;
      local_2c = fVar7;
      local_28 = fVar11;
      local_20 = fVar10;
      local_1c = fVar6;
      local_18 = uVar2;
      cVar15 = FUN_00468a90(&local_20,pfVar1);
      if ((cVar15 == '\0') &&
         (cVar15 = FUN_00468a90(&local_30,*(int *)(param_1 + 0x1c) + 0x60), cVar15 == '\0')) {
        *(float *)(param_1 + 0x180) = fVar10;
        *(float *)(param_1 + 0x184) = fVar6;
        *(undefined4 *)(param_1 + 0x188) = uVar2;
        *(undefined4 *)(param_1 + 0x18c) = 0;
        *(float *)(param_1 + 400) = fVar9;
        *(float *)(param_1 + 0x194) = fVar7;
        *(float *)(param_1 + 0x198) = fVar11;
        *(undefined4 *)(param_1 + 0x19c) = 0;
        *(float *)(param_1 + 0x1a0) = fVar13 + fVar4;
        *(float *)(param_1 + 0x1a4) = fVar8;
        *(float *)(param_1 + 0x1a8) = fVar11;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
      }
    }
    *(float *)(param_1 + 0x240) = local_40;
    *(float *)(param_1 + 0x244) = local_3c;
    *(float *)(param_1 + 0x248) = local_38;
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  *(int *)(param_1 + 0x120) = param_1 + 0x170;
  *(undefined4 **)(param_1 + 0x1c0) = (undefined4 *)(param_1 + 0x210);
  fVar6 = *(float *)(param_1 + 0x1a0) - *(float *)(param_1 + 0x240);
  fVar4 = *(float *)(param_1 + 0x1a4) - *(float *)(param_1 + 0x244);
  fVar7 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x248);
  local_74 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7);
  if (local_74 < _DAT_0089096c) {
    local_74 = 1.0;
  }
  sVar16 = FUN_0045ded0(local_74,0x40400000);
  uVar17 = sVar16 << 1;
  if (uVar17 == 0) {
    fVar6 = (float)*(ushort *)(*(int *)(param_1 + 0x1c) + 0xc4) * _DAT_00894958;
    *(float *)(param_1 + 0x108) = fVar6;
    *(float *)(param_1 + 0x104) = fVar6;
    *(float *)(param_1 + 0x100) = fVar6;
    *(float *)(param_1 + 0xf8) = fVar6;
    *(float *)(param_1 + 0xf4) = fVar6;
    *(float *)(param_1 + 0xf0) = fVar6;
    *(float *)(param_1 + 0xe8) = fVar6;
    *(float *)(param_1 + 0xe4) = fVar6;
    *(float *)(param_1 + 0xe0) = fVar6;
    *(float *)(param_1 + 0xd8) = fVar6;
    *(float *)(param_1 + 0xd4) = fVar6;
    *(float *)(param_1 + 0xd0) = fVar6;
  }
  else {
    if (uVar17 < 0x3e9) {
      uVar17 = 1000;
    }
    else if (0x332c < uVar17) {
      uVar17 = 0x332c;
    }
    fVar6 = (float)*(ushort *)(*(int *)(param_1 + 0x1c) + 0xc4) * _DAT_00894958;
    *(float *)(param_1 + 0xf8) = fVar6;
    *(float *)(param_1 + 0xf4) = fVar6;
    *(float *)(param_1 + 0xf0) = fVar6;
    *(float *)(param_1 + 0xe8) = fVar6;
    *(float *)(param_1 + 0xe4) = fVar6;
    *(float *)(param_1 + 0xe0) = fVar6;
    *(float *)(param_1 + 0xd8) = fVar6;
    *(float *)(param_1 + 0xd4) = fVar6;
    *(float *)(param_1 + 0xd0) = fVar6;
    fVar6 = (float)uVar17 * _DAT_00894958;
    *(float *)(param_1 + 0x108) = fVar6;
    *(float *)(param_1 + 0x104) = fVar6;
    *(float *)(param_1 + 0x100) = fVar6;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(int *)(param_1 + 0x80) = param_1 + 0xd0;
  *(undefined4 *)(param_1 + 0x27c) = 0x3ed70a3d;
  *(undefined2 *)(param_1 + 0x282) = 1;
  iVar18 = FUN_0045da30(0x13);
  local_74 = (float)(iVar18 + 0x1a);
  iVar18 = FUN_0045da30(2);
  if (iVar18 != 0) {
    local_74 = (float)-(int)local_74;
  }
  *(float *)(param_1 + 600) = (float)(int)local_74;
  if ((float)(int)local_74 != *(float *)(param_1 + 0x260)) {
    *(undefined2 *)(param_1 + 0x280) = 2;
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (_DAT_00890968 != *(float *)(param_1 + 600)) {
    *(undefined2 *)(param_1 + 0x280) = 2;
  }
  if (((*(char *)(param_1 + 0x284) == '\0') && (DAT_00911020 == 0)) &&
     (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = 0, DAT_00911020 == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0;
  }
  if (((cVar14 == '\0') &&
      (iVar18 = FUN_00471a70(*(undefined4 *)(*(int *)(param_1 + 0x254) + 0x94)), iVar18 != 0)) &&
     (*(float *)(iVar18 + 0x2b4) < _DAT_00890d3c)) {
    *(undefined4 *)(iVar18 + 0x2b4) = 0xbf800000;
  }
  return;
}

