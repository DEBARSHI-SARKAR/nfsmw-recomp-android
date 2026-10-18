/* speed.exe 0040b280 FUN_0040b280; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0040b280(float *param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  fVar2 = *param_2 - *param_1;
  fVar3 = param_2[1] - param_1[1];
  fVar5 = param_2[2] - param_1[2];
  fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5;
  if (_DAT_00890ec4 <= fVar1) {
    fVar4 = (param_1[2] - param_3[2]) * fVar5 +
            (*param_1 - *param_3) * fVar2 + (param_1[1] - param_3[1]) * fVar3;
    fVar4 = fVar4 + fVar4;
    fVar6 = param_1[2] * param_3[2] + *param_1 * *param_3 + param_1[1] * param_3[1];
    fVar6 = fVar4 * fVar4 -
            (((*param_1 * *param_1 +
              param_1[2] * param_1[2] +
              param_3[2] * param_3[2] +
              param_1[1] * param_1[1] + param_3[1] * param_3[1] + *param_3 * *param_3) -
             (fVar6 + fVar6)) - param_4 * param_4) * fVar1 * _DAT_00890e98;
    if (_DAT_00890968 <= fVar6) {
      fVar7 = (float10)FUN_005c5e80(fVar6);
      fVar7 = ((float10)-fVar4 - fVar7) / ((float10)fVar1 + (float10)fVar1);
      fVar1 = (float)fVar7;
      if ((float10)_DAT_00890968 <= fVar7) {
        if (fVar1 <= _DAT_0089096c) {
          *param_5 = fVar1 * fVar2 + *param_1;
          param_5[1] = fVar1 * fVar3 + param_1[1];
          param_5[2] = fVar1 * fVar5 + param_1[2];
          return 1;
        }
      }
    }
  }
  return 0;
}

