/* speed.exe 00786330 FUN_00786330; analysis pseudocode, not buildable source.
 * calls 00778250 FUN_00778250
 * calls 0077bf60 FUN_0077bf60
 * calls 0076e220 FUN_0076e220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007862d0 FUN_007862d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00786330(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  byte *pbVar18;
  uint local_310;
  int iStack_308;
  float local_300;
  char cStack_2a4;
  float fStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008821eb;
  pvStack_c = ExceptionList;
  iVar15 = (int)*(char *)(param_1 + 0x8c);
  iVar6 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
  iVar12 = (uint)*(ushort *)(iVar6 + iVar15 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar12 == 0) || (sVar1 = *(short *)(iVar12 + 0xe), sVar1 < 0)) {
    pbVar18 = &DAT_009b3830;
  }
  else {
    pbVar18 = (byte *)(sVar1 * 0x40 + DAT_009b38b8);
  }
  bVar17 = (byte)((ushort)*(undefined2 *)(iVar6 + 10) >> 8);
  if (iVar15 == 0) {
    bVar17 = bVar17 >> 2;
  }
  else {
    bVar17 = bVar17 >> 1;
  }
  local_300 = *(float *)(param_1 + 0x2c4);
  ExceptionList = &pvStack_c;
  if ((((param_2 == 0) && (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x84) != 0)) &&
      (ExceptionList = &pvStack_c,
      piVar7 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x4c) + 4))(),
      piVar7 != (int *)0x0)) &&
     (piVar7 = (int *)(**(code **)(*piVar7 + 0x54))(), piVar7 != (int *)0x0)) {
    FUN_0077b9e0();
    uStack_4 = 0;
    uVar8 = (**(code **)(*piVar7 + 0x20))();
    FUN_007862d0(uVar8,param_1 + 0xbc,0,0x3f800000);
    if (cStack_2a4 != '\0') {
      local_300 = fStack_30;
    }
    uStack_4 = 0xffffffff;
    FUN_0076e220();
  }
  bVar17 = bVar17 & 1 ^ iVar15 == 0;
  uVar9 = (uint)pbVar18[1];
  if (bVar17 != 0) {
    uVar9 = *pbVar18 - uVar9;
  }
  iVar6 = *(int *)(param_1 + 0x80) * 4;
  uVar14 = *(uint *)(&DAT_008b5ac0 + iVar6);
  while( true ) {
    uVar16 = uVar9;
    if (bVar17 != 0) {
      uVar16 = (*pbVar18 - uVar9) - 1;
    }
    if ((uVar14 & 1 << ((byte)*(undefined4 *)(pbVar18 + uVar16 * 4 + 4) & 0xf)) != 0) break;
    uVar9 = uVar9 + 1;
  }
  if (bVar17 == 0) {
    uVar13 = (uint)pbVar18[1];
    uVar16 = uVar9;
  }
  else {
    uVar13 = (uint)*pbVar18 - (uint)pbVar18[1];
    uVar16 = (*pbVar18 - uVar9) - 1;
  }
  fVar2 = (float)(*(int *)(pbVar18 + uVar16 * 4 + 4) >> 0x12) * _DAT_009b3a68;
  if ((int)uVar9 < (int)uVar13) {
    fVar2 = -fVar2;
  }
  uVar13 = (uint)*pbVar18;
  uVar16 = 0;
  fVar2 = ABS(fVar2 - local_300);
  local_310 = uVar9;
  if (uVar13 != 0) {
    iStack_308 = uVar13 * 4;
    iVar12 = 0;
    do {
      iStack_308 = iStack_308 + -4;
      iVar15 = iStack_308;
      if (bVar17 == 0) {
        iVar15 = iVar12;
      }
      if ((uVar14 & 1 << ((byte)*(undefined4 *)(pbVar18 + iVar15 + 4) & 0xf)) != 0) {
        if (bVar17 == 0) {
          uVar10 = (uint)pbVar18[1];
          iVar15 = iVar12;
        }
        else {
          uVar10 = uVar13 - pbVar18[1];
          iVar15 = iStack_308;
        }
        fVar4 = (float)(*(int *)(pbVar18 + iVar15 + 4) >> 0x12) * _DAT_009b3a68;
        if ((int)uVar16 < (int)uVar10) {
          fVar4 = -fVar4;
        }
        fVar4 = fVar4 - local_300;
        fVar3 = -fVar2;
        if (-fVar2 < fVar4) {
          fVar3 = fVar4;
        }
        if (fVar2 < fVar3) {
          fVar3 = fVar2;
        }
        if (fVar4 == fVar3) {
          fVar2 = ABS(fVar4);
          uVar9 = uVar16;
          local_310 = uVar16;
        }
      }
      uVar16 = uVar16 + 1;
      iVar12 = iVar12 + 4;
    } while ((int)uVar16 < (int)uVar13);
  }
  uVar16 = uVar9;
  if (param_2 != 0) {
    uVar16 = uVar9 + param_2;
    uVar10 = uVar9;
    if ((int)uVar16 < (int)uVar13) {
      iVar12 = (uVar13 - uVar16) * 4 + -4;
      do {
        uVar10 = local_310;
        if ((int)uVar16 < 0) break;
        iVar15 = iVar12;
        if (bVar17 == 0) {
          iVar15 = uVar16 * 4;
        }
        uVar11 = 1 << ((byte)*(undefined4 *)(pbVar18 + iVar15 + 4) & 0xf);
        if ((*(uint *)(&DAT_008b5aa0 + iVar6) & uVar11) == 0) break;
        if ((uVar14 & uVar11) != 0) {
          uVar10 = uVar16;
          if (uVar16 != uVar9) goto LAB_00786686;
          break;
        }
        uVar16 = uVar16 + param_2;
        iVar12 = iVar12 + param_2 * -4;
      } while ((int)uVar16 < (int)uVar13);
    }
    uVar16 = uVar10;
    cVar5 = FUN_0077bf60(param_2);
    if (cVar5 != '\0') {
      ExceptionList = pvStack_c;
      return;
    }
  }
LAB_00786686:
  if (bVar17 == 0) {
    uVar14 = (uint)pbVar18[1];
    uVar9 = uVar16;
  }
  else {
    uVar14 = (uint)*pbVar18 - (uint)pbVar18[1];
    uVar9 = (*pbVar18 - uVar16) - 1;
  }
  fVar2 = (float)(*(int *)(pbVar18 + uVar9 * 4 + 4) >> 0x12) * _DAT_009b3a68;
  if ((int)uVar16 < (int)uVar14) {
    fVar2 = -fVar2;
  }
  FUN_00778250(fVar2,0);
  ExceptionList = pvStack_c;
  return;
}

