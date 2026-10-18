/* speed.exe 00501d50 FUN_00501d50; analysis pseudocode, not buildable source.
 * calls 004fc020 FUN_004fc020
 * calls 006510f0 FUN_006510f0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00501d50(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  float **ppfVar11;
  short *psVar12;
  int iVar13;
  undefined4 *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float *local_d0 [2];
  float *local_c8 [38];
  float *local_30;
  float **local_2c;
  float **local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  local_30 = &local_e0;
  local_2c = local_d0;
  local_28 = &local_30;
  local_24 = 0.0;
  local_20 = 0x7f7fffff;
  local_1c = 0;
  local_18 = 0;
  local_e0 = 0.0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  local_f4 = DAT_00917574;
  if ((undefined4 **)DAT_00917574 != &DAT_00917574) {
    do {
      if ((9 < local_18) || (local_28 <= local_2c)) break;
      iVar9 = FUN_006510f0(uVar2,uVar3,uVar4);
      if (iVar9 != 0) {
        sVar1 = *(short *)(iVar9 + 0xe);
        iVar5 = local_f4[6];
        iVar13 = 0;
        if (0 < -(int)sVar1) {
          psVar12 = (short *)(iVar9 + 0x1c);
          do {
            if (9 < local_18) break;
            FUN_004fc020(param_1,&local_e0,*psVar12 * 0x60 + iVar5,uVar2,uVar3,uVar4);
            iVar13 = iVar13 + 1;
            psVar12 = psVar12 + 1;
          } while (iVar13 < -(int)sVar1);
        }
      }
      local_f4 = (undefined4 *)*local_f4;
    } while ((undefined4 **)local_f4 != &DAT_00917574);
  }
  local_f4 = DAT_0091c0ec;
  if ((undefined4 **)DAT_0091c0ec != &DAT_0091c0ec) {
    do {
      if (local_f4[10] != 0) {
        for (puVar6 = (undefined4 *)local_f4[0xb];
            (puVar6 != (undefined4 *)0x0 && (puVar6 != local_f4 + 0xb));
            puVar6 = (undefined4 *)*puVar6) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = puVar6 + 2;
          }
          FUN_004fc020(param_1,&local_e0,puVar10,uVar2,uVar3,uVar4);
        }
      }
      local_f4 = (undefined4 *)*local_f4;
    } while ((undefined4 **)local_f4 != &DAT_0091c0ec);
  }
  local_f0 = _DAT_0089096c - local_24;
  local_f4 = (undefined4 *)local_24;
  if (_DAT_0089096c < local_24) {
    local_f0 = 0.0;
    local_f4 = (undefined4 *)(_DAT_0089096c / local_24);
  }
  fVar7 = local_f0 * *local_30;
  fVar8 = local_f0 * local_30[1];
  local_e8 = local_f0 * local_30[2];
  local_ec = local_f0 * local_30[3];
  if (local_d0 < local_2c) {
    iVar9 = ((uint)((int)local_2c + (-1 - (int)local_d0)) >> 4) + 1;
    ppfVar11 = local_d0 + 2;
    do {
      iVar9 = iVar9 + -1;
      fVar7 = (float)local_f4 * (float)ppfVar11[-2] + fVar7;
      fVar8 = (float)local_f4 * (float)ppfVar11[-1] + fVar8;
      local_e8 = (float)local_f4 * (float)*ppfVar11 + local_e8;
      local_ec = (float)local_f4 * (float)ppfVar11[1] + local_ec;
      ppfVar11 = ppfVar11 + 4;
    } while (iVar9 != 0);
  }
  param_1[0x30] = fVar7;
  param_1[0x32] = local_e8;
  param_1[0x31] = fVar8;
  param_1[0x33] = local_ec;
  return local_18;
}

