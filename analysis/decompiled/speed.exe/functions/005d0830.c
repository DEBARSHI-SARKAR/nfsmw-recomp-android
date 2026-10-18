/* speed.exe 005d0830 FUN_005d0830; analysis pseudocode, not buildable source.
 * calls 007c44e0 FUN_007c44e0
 * calls 005cb5d0 FUN_005cb5d0
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d0830(undefined4 param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_2c;
  float local_28;
  float local_1c;
  float local_18;
  
  FUN_005ca910(param_1,&local_40);
  local_48 = local_38;
  if (_DAT_00890da8 <= local_38) {
    if (_DAT_0089096c < local_38) {
      local_48 = 1.0;
    }
  }
  else {
    local_48 = -1.0;
  }
  local_4c = SQRT(_DAT_0089096c - local_48 * local_48);
  if ((local_40 < _DAT_00890968) && (local_18 < _DAT_00890968)) {
    local_4c = -local_4c;
  }
  fVar1 = local_4c;
  if (local_4c < _DAT_00890968) {
    fVar1 = -local_4c;
  }
  if (_DAT_00890d60 < fVar1) {
    fVar1 = _DAT_0089096c / local_4c;
    fVar2 = (float10)FUN_005cb5d0(fVar1 * local_28,fVar1 * local_18);
    *param_2 = (float)fVar2;
    fVar2 = (float10)FUN_005cb5d0(local_48,local_4c);
    param_2[1] = (float)-fVar2;
    fVar2 = (float10)FUN_005cb5d0(fVar1 * local_3c,fVar1 * local_40);
    param_2[2] = (float)fVar2;
    return;
  }
  fVar2 = (float10)FUN_005cb5d0(-local_1c,local_2c);
  *param_2 = (float)fVar2;
  fVar3 = (float10)FUN_007c44e0();
  fVar2 = (float10)_DAT_008a34e4;
  param_2[2] = 0.0;
  param_2[1] = (float)(fVar3 * fVar2);
  return;
}

