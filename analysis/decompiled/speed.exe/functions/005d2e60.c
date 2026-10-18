/* speed.exe 005d2e60 FUN_005d2e60; analysis pseudocode, not buildable source.
 * calls 005d0d10 FUN_005d0d10
 * calls 005d0d80 FUN_005d0d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d2e60(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float local_20 [2];
  float local_18;
  float local_10 [2];
  float local_8;
  
  FUN_005d0d10(param_1,local_20);
  FUN_005d0d80(param_1,local_10);
  fVar1 = SQRT((float10)local_18 * (float10)local_18 + (float10)local_20[0] * (float10)local_20[0]);
  fVar1 = fVar1 * fVar1 * fVar1;
  if ((float10)_DAT_00891218 <= fVar1) {
    fVar2 = (float10)_DAT_00891218;
  }
  else {
    fVar2 = fVar1;
    if (fVar1 < (float10)_DAT_008a355c) {
      fVar2 = (float10)_DAT_008a355c;
    }
  }
  if (fVar1 == fVar2) {
    return (float10)_DAT_00894200;
  }
  return (float10)(local_8 * local_20[0] - local_10[0] * local_18) / fVar1;
}

