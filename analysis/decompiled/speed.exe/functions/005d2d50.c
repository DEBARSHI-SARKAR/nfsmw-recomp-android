/* speed.exe 005d2d50 FUN_005d2d50; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 * calls 005d0d10 FUN_005d0d10
 * calls 005d0d80 FUN_005d0d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d2d50(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_10 [16];
  
  FUN_005d0d10(param_1,&local_20);
  FUN_005d0d80(param_1,local_10);
  FUN_00444dc0(&local_20,local_10,&local_30);
  fVar1 = SQRT((float10)local_2c * (float10)local_2c +
               (float10)local_28 * (float10)local_28 + (float10)local_30 * (float10)local_30);
  if (local_2c < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  fVar2 = SQRT((float10)local_20 * (float10)local_20 +
               (float10)local_1c * (float10)local_1c + (float10)local_18 * (float10)local_18);
  fVar2 = fVar2 * fVar2 * fVar2;
  if ((float10)_DAT_00891218 <= fVar2) {
    fVar3 = (float10)_DAT_00891218;
  }
  else {
    fVar3 = fVar2;
    if (fVar2 < (float10)_DAT_008a355c) {
      fVar3 = (float10)_DAT_008a355c;
    }
  }
  if (fVar2 == fVar3) {
    return (float10)_DAT_00894200;
  }
  return fVar1 / fVar2;
}

