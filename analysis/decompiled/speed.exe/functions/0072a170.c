/* speed.exe 0072a170 FUN_0072a170; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0072a422) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0072a170(float *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float10 extraout_ST0;
  uint local_30;
  uint local_2c;
  
  fVar8 = _DAT_00893540;
  fVar2 = *(float *)(*(int *)(param_2 + 0x40) + 0x44);
  fVar3 = *(float *)(*(int *)(param_2 + 0x40) + 0x40);
  uVar9 = 0;
  local_2c = 0;
  local_30 = 0;
  if (DAT_009b0a70 == 0) {
    puVar1 = (undefined4 *)(&DAT_009aa380 + param_3 * 8);
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      fVar5 = (float)puVar4[0x16] - fVar3;
      fVar6 = (float)puVar4[0x17] - fVar2;
      fVar5 = fVar5 * fVar5 + fVar6 * fVar6;
      if ((float)puVar4[0x19] * (float)puVar4[0x19] <= fVar5) {
        puVar4[0x26] = 4;
        puVar4[0x27] = 0;
      }
      else {
        fVar5 = SQRT(fVar5);
        fVar6 = _DAT_00890968;
        if ((float)puVar4[0x1b] <= fVar5) {
          fVar6 = (fVar5 - (float)puVar4[0x1b]) / ((float)puVar4[0x19] - (float)puVar4[0x1b]);
        }
        puVar4[0x27] = _DAT_0089096c - fVar6;
        if (fVar6 == _DAT_00890968) {
          puVar4[0x26] = 1;
          if ((float)puVar4[0x19] < fVar8) {
            fVar8 = (float)puVar4[0x19];
          }
        }
        else {
          puVar4[0x26] = 2;
        }
      }
    }
    fVar11 = (float10)_DAT_00890968;
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      fVar8 = (float)puVar4[0x27];
      puVar4[0x27] = (float)((float10)(float)puVar4[0x25] * (float10)fVar8);
      fVar11 = (float10)(float)puVar4[0x25] * (float10)fVar8 + fVar11;
    }
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      if (fVar11 == (float10)_DAT_00890968) {
        puVar4[0x27] = 0;
      }
      else {
        puVar4[0x27] = (float)((float10)(float)puVar4[0x27] / fVar11);
      }
      if ((float)puVar4[0x27] != _DAT_00890968) {
        *param_1 = (float)puVar4[0x1c] * (float)puVar4[0x27] + *param_1;
        param_1[1] = (float)puVar4[0x1d] * (float)puVar4[0x27] + param_1[1];
        param_1[2] = (float)puVar4[0x1e] * (float)puVar4[0x27] + param_1[2];
        param_1[3] = (float)puVar4[0x14] * (float)puVar4[0x27] + param_1[3];
        param_1[4] = (float)puVar4[0x1a] * (float)puVar4[0x27] + param_1[4];
        iVar7 = FUN_007c4b80();
        local_2c = local_2c + iVar7;
        iVar7 = FUN_007c4b80();
        local_30 = local_30 + iVar7;
        iVar7 = FUN_007c4b80();
        uVar9 = uVar9 + iVar7;
        fVar11 = extraout_ST0;
      }
    }
    fVar8 = (float)(((uVar9 | 0xffff8000) << 8 | local_30) << 8 | local_2c);
    bVar10 = DAT_0090328c != fVar8;
    param_1[5] = fVar8;
    if (((bVar10) || (_DAT_00903288 != param_1[4])) || (_DAT_00903284 != param_1[3])) {
      _DAT_00903284 = param_1[3];
      DAT_0090328c = fVar8;
      _DAT_00903288 = param_1[4];
      return 1;
    }
  }
  else {
    *param_1 = DAT_00903190;
    param_1[1] = DAT_00903194;
    param_1[2] = DAT_00903198;
    param_1[3] = DAT_009031a0;
    param_1[4] = DAT_0090319c;
    fVar8 = (float)(((DAT_009031ac << 8 | DAT_009031a8) << 8 | DAT_009031a4) & 0xffffff | 0x80000000
                   );
    bVar10 = DAT_0090328c != fVar8;
    param_1[3] = DAT_009031a0;
    param_1[5] = fVar8;
    if (((bVar10) || (_DAT_00903288 != param_1[4])) || (_DAT_00903284 != param_1[3])) {
      DAT_0090328c = fVar8;
      _DAT_00903288 = param_1[4];
      _DAT_00903284 = param_1[3];
      return 1;
    }
  }
  return 0;
}

