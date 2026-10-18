/* speed.exe 00767a80 FUN_00767a80; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 00444dc0 FUN_00444dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00767a80(float *param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  if ((ABS(*param_1 - *param_2) < _DAT_00891218) && (ABS(param_1[1] - param_2[1]) < _DAT_00891218))
  {
    fVar3 = ABS(param_1[2] - param_2[2]);
    if (fVar3 < _DAT_00891218) {
      return (uint)(ushort)((ushort)(fVar3 < _DAT_00891218) << 8 |
                            (ushort)(NAN(fVar3) || NAN(_DAT_00891218)) << 10 |
                           (ushort)(fVar3 == _DAT_00891218) << 0xe);
    }
  }
  param_3[4] = *param_1 - *param_2;
  pfVar1 = (float *)(param_3 + 4);
  pfVar2 = (float *)(param_3 + 8);
  param_3[5] = param_1[1] - param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  param_3[7] = 0;
  param_3[6] = fVar3 - fVar4;
  fVar5 = (float10)FUN_005c5e80((float)param_3[6] * (float)param_3[6] +
                                (float)param_3[5] * (float)param_3[5] + *pfVar1 * *pfVar1);
  if (fVar5 == (float10)_DAT_00890968) {
    fVar5 = (float10)_DAT_00890968;
  }
  else {
    fVar5 = (float10)_DAT_0089096c / fVar5;
  }
  *pfVar1 = (float)(fVar5 * (float10)*pfVar1);
  fVar3 = (float)param_3[5];
  param_3[5] = (float)(fVar5 * (float10)fVar3);
  param_3[6] = (float)(fVar5 * (float10)(float)param_3[6]);
  if (ABS(fVar5 * (float10)fVar3) <= (float10)_DAT_00891058) {
    *param_3 = 0;
    param_3[1] = 0x3f800000;
  }
  else {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
  }
  param_3[2] = 0;
  param_3[3] = 0;
  FUN_00444dc0(param_3,pfVar1,pfVar2);
  param_3[0xb] = 0;
  fVar3 = (float)param_3[10] * (float)param_3[10] +
          (float)param_3[9] * (float)param_3[9] + *pfVar2 * *pfVar2;
  if ((fVar3 == _DAT_00890968) ||
     (fVar5 = (float10)FUN_005c5e80(fVar3), fVar5 == (float10)_DAT_00890968)) {
    fVar5 = (float10)_DAT_00890968;
  }
  else {
    fVar5 = (float10)_DAT_0089096c / fVar5;
  }
  *pfVar2 = (float)(fVar5 * (float10)*pfVar2);
  param_3[9] = (float)(fVar5 * (float10)(float)param_3[9]);
  param_3[10] = (float)(fVar5 * (float10)(float)param_3[10]);
  FUN_00444dc0(pfVar1,pfVar2,param_3);
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  param_3[0xc] = *param_1;
  param_3[0xd] = fVar3;
  param_3[0xe] = fVar4;
  param_3[0xf] = 0x3f800000;
  return CONCAT31((int3)((uint)(param_3 + 0xc) >> 8),1);
}

