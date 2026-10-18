/* speed.exe 005ce6d0 FUN_005ce6d0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ce6d0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = -param_1[6];
  fVar2 = SQRT(_DAT_0089096c - fVar1 * fVar1);
  if (fVar2 == _DAT_00890968) {
    local_10 = param_1[4];
    local_c = -param_1[5];
    local_4 = 0.0;
    local_8 = 1.0;
  }
  else {
    local_8 = _DAT_0089096c / fVar2;
    local_c = local_8 * param_1[7];
    local_10 = local_8 * param_1[8];
    local_4 = local_8 * param_1[3];
    local_8 = local_8 * *param_1;
  }
  fVar3 = (float10)FUN_005cb5d0(local_c,local_10);
  fVar3 = -fVar3;
  *param_2 = (float)fVar3;
  if (fVar3 < (float10)_DAT_00890968) {
    *param_2 = (float)(fVar3 + (float10)_DAT_0089096c);
  }
  fVar3 = (float10)FUN_005cb5d0(fVar1,fVar2);
  fVar3 = -fVar3;
  *param_3 = (float)fVar3;
  if (fVar3 < (float10)_DAT_00890968) {
    *param_3 = (float)(fVar3 + (float10)_DAT_0089096c);
  }
  fVar3 = (float10)FUN_005cb5d0(local_4,local_8);
  fVar3 = -fVar3;
  *param_4 = (float)fVar3;
  if ((float10)_DAT_00890968 <= fVar3) {
    return;
  }
  *param_4 = (float)(fVar3 + (float10)_DAT_0089096c);
  return;
}

