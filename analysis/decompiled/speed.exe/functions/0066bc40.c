/* speed.exe 0066bc40 FUN_0066bc40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bc40(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 8) + 0x10);
  if (param_2 != 0) {
    fVar1 = fVar1 - fVar1 * (float10)*(float *)(param_2 + 0x14) * (float10)_DAT_008910f0;
  }
  return fVar1;
}

