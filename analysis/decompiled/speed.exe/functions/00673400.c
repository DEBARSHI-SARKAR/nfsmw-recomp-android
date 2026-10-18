/* speed.exe 00673400 FUN_00673400; analysis pseudocode, not buildable source.
 * calls 00672fe0 FUN_00672fe0
 * calls 00452940 FUN_00452940
 * calls 0066bcc0 FUN_0066bcc0
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00673400(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                 uint param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float *local_28;
  
  if (param_6 != 0) {
    puVar9 = param_5;
    uVar14 = param_6;
    do {
      *(undefined4 *)((param_4 - (int)param_5) + (int)puVar9) = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar14 = FUN_00452940();
  if (param_6 < uVar14) {
    return uVar14 & 0xffffff00;
  }
  fVar1 = *(float *)(*(int *)(param_2 + 8) + 0x58);
  iVar10 = uVar14 - 1;
  if (2 < iVar10) {
    local_28 = (float *)(param_5 + 3);
    uVar14 = 2;
    do {
      iVar2 = *(int *)(param_1 + 8);
      uVar11 = FUN_00452940();
      if (uVar14 < uVar11) {
        pfVar12 = (float *)((int)local_28 + iVar2 + (4 - (int)param_5));
      }
      else {
        pfVar12 = (float *)FUN_006269b0(4);
      }
      fVar3 = *pfVar12;
      iVar2 = *(int *)(param_1 + 8);
      uVar11 = uVar14 + 1;
      uVar13 = FUN_00452940();
      if (uVar11 < uVar13) {
        pfVar12 = (float *)((int)local_28 + iVar2 + (8 - (int)param_5));
      }
      else {
        pfVar12 = (float *)FUN_006269b0(4);
      }
      fVar4 = *pfVar12;
      for (fVar6 = (fVar1 + *(float *)(*(int *)(param_2 + 8) + 0x5c)) * _DAT_008933d4; fVar6 < fVar1
          ; fVar6 = fVar6 + _DAT_00890dd0) {
        fVar15 = (float10)FUN_0066bcc0(param_2,param_3,0x3f800000,fVar6,0,0);
        fVar5 = (float10)_DAT_0089096c;
        fVar16 = (float10)FUN_00672fe0(param_2,fVar6);
        fVar7 = fVar3;
        if (fVar3 < _DAT_00890968) {
          fVar7 = -fVar3;
        }
        if (fVar7 <= _DAT_008910cc) {
          fVar19 = (float10)_DAT_00890968;
        }
        else {
          fVar7 = _DAT_0089096c / fVar3;
          fVar8 = fVar7 * fVar4 * fVar6;
          fVar17 = (float10)FUN_0066bcc0(param_2,param_3,0x3f800000,fVar8,0,0);
          fVar19 = (float10)_DAT_0089096c;
          fVar18 = (float10)FUN_00672fe0(param_2,fVar8);
          fVar19 = fVar18 * (float10)(float)(fVar17 + fVar19) * (float10)fVar7 * (float10)fVar4;
        }
        if ((float10)(float)(fVar16 * (float10)(float)(fVar15 + fVar5)) < fVar19) {
          *(float *)(param_4 + uVar14 * 4) = fVar6;
          goto LAB_00673605;
        }
      }
      *(float *)(param_4 + uVar14 * 4) = fVar1 - _DAT_00890fc8;
LAB_00673605:
      fVar6 = fVar3;
      if (fVar3 < _DAT_00890968) {
        fVar6 = -fVar3;
      }
      if (fVar6 <= _DAT_008910cc) {
        *local_28 = 0.0;
      }
      else {
        *local_28 = (fVar4 / fVar3) * *(float *)(param_4 + uVar14 * 4);
      }
      local_28 = local_28 + 1;
      uVar14 = uVar11;
    } while ((int)uVar11 < iVar10);
  }
  *(undefined4 *)(param_4 + iVar10 * 4) = *(undefined4 *)(*(int *)(param_2 + 8) + 0x58);
  return CONCAT31((int3)((uint)iVar10 >> 8),1);
}

