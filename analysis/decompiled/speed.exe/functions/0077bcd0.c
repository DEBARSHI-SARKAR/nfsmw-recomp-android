/* speed.exe 0077bcd0 FUN_0077bcd0; analysis pseudocode, not buildable source.
 * calls 0077b720 FUN_0077b720
 * calls 0076dda0 FUN_0076dda0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0077bcd0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar4 = param_2;
  pfVar3 = param_1;
  local_18 = *param_2 - *param_1;
  local_14 = param_2[1] - param_1[1];
  local_10 = param_2[2] - param_1[2];
  iVar5 = (int)param_5 * 0x16 + DAT_009b38c0;
  fVar1 = (float)*(ushort *)((int)param_5 * 0x16 + 4 + DAT_009b38c0) * _DAT_009b3a14;
  if (fVar1 < _DAT_0089096c) {
    fVar1 = _DAT_0089096c;
  }
  param_1 = (float *)(param_4 / fVar1);
  FUN_0076dda0(*(short *)(iVar5 + 8) * 0x16 + DAT_009b38c0,&local_c);
  if (_DAT_00890968 < local_8 * local_14 + local_c * local_18 + local_4 * local_10) {
    param_1 = (float *)-(float)param_1;
  }
  fVar6 = (float10)FUN_005c5e80((*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
                                (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
                                (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]));
  param_5 = (float)fVar6;
  param_2 = (float *)((float)param_1 + *param_3);
  if (_DAT_00890968 < (float)param_1 + *param_3) {
    while ((float)param_2 < _DAT_0089096c) {
      FUN_0077b720(iVar5,param_2,&local_18);
      fVar6 = (float10)FUN_005c5e80((local_18 - *pfVar3) * (local_18 - *pfVar3) +
                                    (local_14 - pfVar3[1]) * (local_14 - pfVar3[1]) +
                                    (local_10 - pfVar3[2]) * (local_10 - pfVar3[2]));
      if ((float10)param_5 < fVar6) break;
      param_5 = (float)fVar6;
      fVar1 = (float)param_2 + (float)param_1;
      *pfVar4 = local_18;
      pfVar4[1] = local_14;
      fVar2 = _DAT_00890968;
      pfVar4[2] = local_10;
      *param_3 = (float)param_2;
      param_2 = (float *)fVar1;
      if (fVar1 <= fVar2) {
        return (float10)param_5;
      }
    }
  }
  return (float10)param_5;
}

