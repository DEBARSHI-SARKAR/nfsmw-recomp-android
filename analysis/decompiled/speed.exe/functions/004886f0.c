/* speed.exe 004886f0 FUN_004886f0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004886f0(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  
  param_3 = -param_3;
  param_5[2] = 0.0;
  bVar5 = param_3 < _DAT_00890968;
  bVar6 = param_3 == _DAT_00890968;
  param_5[1] = 0.0;
  *param_5 = 0.0;
  if (bVar5 != bVar6) {
    return 0;
  }
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *param_5 = param_3 * *param_4 + *param_2;
  param_5[1] = param_3 * fVar1 + fVar3;
  param_5[2] = param_3 * fVar2 + fVar4;
  fVar7 = (float10)FUN_005c5e80(param_5[2] * param_5[2] +
                                param_5[1] * param_5[1] + *param_5 * *param_5);
  if (fVar7 < (float10)_DAT_00890968 == (fVar7 == (float10)_DAT_00890968)) {
    if (param_3 * param_1[1] < (float)fVar7) {
      fVar1 = -((param_3 * *param_1) / (float)fVar7);
      *param_5 = fVar1 * *param_5;
      param_5[1] = fVar1 * param_5[1];
      param_5[2] = fVar1 * param_5[2];
      return 2;
    }
    *param_5 = -*param_5;
    param_5[1] = -param_5[1];
    param_5[2] = -param_5[2];
  }
  return 1;
}

