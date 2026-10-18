/* speed.exe 00767400 FUN_00767400; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00767400(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  param_7 = param_7 * param_7;
  if (((param_5 - param_1) * (param_5 - param_1) + (param_6 - param_2) * (param_6 - param_2) <
       param_7) &&
     ((param_5 - param_3) * (param_5 - param_3) + (param_6 - param_4) * (param_6 - param_4) <
      param_7)) {
    *param_9 = 0.0;
    *param_8 = 0.0;
    return 1;
  }
  param_1 = param_1 - param_5;
  param_2 = param_2 - param_6;
  fVar1 = (param_3 - param_5) - param_1;
  fVar2 = (param_4 - param_6) - param_2;
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2;
  if (fVar3 == _DAT_00890968) {
    *param_9 = 0.0;
    *param_8 = 0.0;
    return 1;
  }
  fVar2 = fVar2 * param_2 + fVar1 * param_1;
  fVar2 = fVar2 + fVar2;
  fVar1 = fVar2 * fVar2 -
          ((param_2 * param_2 + param_1 * param_1) - param_7) * fVar3 * _DAT_00890e98;
  if (_DAT_00890968 <= fVar1) {
    fVar4 = (float10)FUN_005c5e80(fVar1);
    fVar5 = (float10)_DAT_0089096c / ((float10)fVar3 + (float10)fVar3);
    *param_8 = (float)((-(float10)fVar2 - fVar4) * fVar5);
    fVar5 = (fVar4 - (float10)fVar2) * fVar5;
    *param_9 = (float)fVar5;
    if ((_DAT_00890968 <= *param_8) && (*param_8 < _DAT_0089096c != (*param_8 == _DAT_0089096c))) {
      return 1;
    }
    if (((float10)_DAT_00890968 <= fVar5) &&
       (fVar5 < (float10)_DAT_0089096c != (fVar5 == (float10)_DAT_0089096c))) {
      return 1;
    }
  }
  return 0;
}

