/* speed.exe 00824889 FUN_00824889; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00824889(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  
  fVar5 = _DAT_00890dfc;
  if (param_4 < param_4 + param_2) {
    pfVar7 = (float *)(param_3 + 8);
    pfVar6 = (float *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) * 4);
    pfVar8 = param_4;
    do {
      fVar1 = *(float *)(param_1 + 0x2c) * *pfVar6 + pfVar7[-2] + fVar5;
      fVar2 = *(float *)(param_1 + 0x2c) * pfVar6[1] + pfVar7[-1] + fVar5;
      fVar3 = *(float *)(param_1 + 0x2c) * pfVar6[2] + *pfVar7 + fVar5;
      fVar4 = pfVar6[3] * *(float *)(param_1 + 0x2c) + pfVar7[1] + fVar5;
      *pfVar8 = fVar1 * *(float *)(param_1 + 0x30) + *pfVar6;
      pfVar9 = pfVar8 + 4;
      pfVar8[1] = fVar2 * *(float *)(param_1 + 0x30) + pfVar6[1];
      *(float *)(((int)param_4 - param_3) + (int)pfVar7) =
           fVar3 * *(float *)(param_1 + 0x30) + pfVar6[2];
      pfVar7 = pfVar7 + 4;
      pfVar8[3] = fVar4 * *(float *)(param_1 + 0x30) + pfVar6[3];
      pfVar6[2] = fVar3;
      *pfVar6 = fVar1;
      pfVar6[3] = fVar4;
      pfVar6[1] = fVar2;
      pfVar6 = pfVar6 + 4;
      pfVar8 = pfVar9;
    } while (pfVar9 < param_4 + param_2);
  }
  return;
}

