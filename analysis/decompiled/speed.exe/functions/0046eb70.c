/* speed.exe 0046eb70 FUN_0046eb70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046eb70(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_00890968;
  if (*(char *)(param_1 + 0x89) != '\0') {
    fVar1 = (float10)*(float *)(param_1 + 0x8c) * (float10)_DAT_008910f0 + (float10)_DAT_00894594;
  }
  return fVar1;
}

