/* speed.exe 005d0a70 FUN_005d0a70; analysis pseudocode, not buildable source.
 * calls 007c44e0 FUN_007c44e0
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d0a70(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_10;
  
  pfVar2 = param_1;
  param_1 = (float *)param_1[2];
  if (_DAT_00890da8 <= (float)param_1) {
    if (_DAT_0089096c < (float)param_1) {
      param_1 = (float *)0x3f800000;
    }
  }
  else {
    param_1 = (float *)0xbf800000;
  }
  local_10 = SQRT(_DAT_0089096c - (float)param_1 * (float)param_1);
  if ((*pfVar2 < _DAT_00890968) && (pfVar2[10] < _DAT_00890968)) {
    local_10 = -local_10;
  }
  fVar1 = local_10;
  if (local_10 < _DAT_00890968) {
    fVar1 = -local_10;
  }
  if (_DAT_00890d60 < fVar1) {
    fVar1 = _DAT_0089096c / local_10;
    fVar3 = (float10)FUN_005cb5d0(fVar1 * pfVar2[6],fVar1 * pfVar2[10]);
    *param_2 = (float)fVar3;
    fVar3 = (float10)FUN_005cb5d0(param_1,local_10);
    param_2[1] = (float)-fVar3;
    fVar3 = (float10)FUN_005cb5d0(fVar1 * pfVar2[1],fVar1 * *pfVar2);
    param_2[2] = (float)fVar3;
    return;
  }
  fVar3 = (float10)FUN_005cb5d0(-pfVar2[9],pfVar2[5]);
  *param_2 = (float)fVar3;
  fVar4 = (float10)FUN_007c44e0();
  fVar3 = (float10)_DAT_008a34e4;
  param_2[2] = 0.0;
  param_2[1] = (float)(fVar4 * fVar3);
  return;
}

