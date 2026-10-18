/* speed.exe 0048ad40 FUN_0048ad40; analysis pseudocode, not buildable source.
 * calls 00401870 FUN_00401870
 * calls 004885d0 FUN_004885d0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_0048ad40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2];
  if (_DAT_0089096c <= fVar1) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 1.0;
    return param_1;
  }
  FUN_00401870(param_2,param_3,&local_c);
  if (fVar1 < _DAT_00895400) {
    *param_1 = local_c;
    param_1[1] = local_8;
    param_1[2] = local_4;
    param_1[3] = 0.0;
    FUN_004885d0(param_1);
    return param_1;
  }
  fVar2 = (float10)FUN_005c5e80(fVar1 + _DAT_0089096c + fVar1 + _DAT_0089096c);
  fVar3 = (float10)_DAT_0089096c / fVar2;
  *param_1 = (float)((float10)local_c * fVar3);
  param_1[1] = (float)((float10)local_8 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)local_4);
  param_1[3] = (float)(fVar2 * (float10)_DAT_008933d4);
  return param_1;
}

