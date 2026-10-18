/* speed.exe 0068efa0 FUN_0068efa0; analysis pseudocode, not buildable source.
 * calls 00401d70 FUN_00401d70
 * calls 00401d10 FUN_00401d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068efa0(float *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  if ((((param_1[2] != 0.0) && (param_1[3] != 0.0)) && (param_2 == '\0')) &&
     (param_1[5] < _DAT_00890968 == (param_1[5] == _DAT_00890968))) {
    fVar2 = _DAT_0089096c - param_1[4];
    fVar1 = *param_1;
    fVar3 = param_1[1] * param_1[4] + fVar2 * fVar1;
    if (fVar3 < _DAT_00890968) {
      fVar3 = -fVar3;
    }
    if (fVar3 <= _DAT_008aabe0) {
      param_1[6] = param_1[4];
      param_1[7] = fVar2;
    }
    else {
      fVar3 = _DAT_0089096c / fVar3;
      fVar4 = _DAT_0089096c - param_1[5];
      fVar5 = (float10)FUN_00401d10(param_1[1] * param_1[4]);
      param_1[6] = (float)((float10)fVar4 * (float10)param_1[4] +
                          fVar5 * (float10)fVar3 * (float10)param_1[5]);
      fVar5 = (float10)FUN_00401d10(fVar2 * fVar1);
      param_1[7] = (float)((float10)fVar4 * (float10)fVar2 +
                          fVar5 * (float10)fVar3 * (float10)param_1[5]);
    }
    fVar5 = (float10)FUN_00401d70(param_1[6],0,0x3f800000);
    param_1[6] = (float)fVar5;
    fVar5 = (float10)FUN_00401d70(param_1[7],0,0x3f800000);
    param_1[7] = (float)fVar5;
    return;
  }
  fVar1 = _DAT_0089096c - param_1[4];
  param_1[6] = param_1[4];
  param_1[7] = fVar1;
  return;
}

