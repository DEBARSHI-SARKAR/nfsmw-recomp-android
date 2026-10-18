/* speed.exe 0078a750 FUN_0078a750; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0078a750(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + (float10)_DAT_00891214;
  }
  fVar1 = fVar1 * (float10)*(float *)(param_1 + 0x13c) + (float10)*(float *)(param_1 + 0x130);
  if (fVar1 < (float10)*(float *)(param_1 + 0x130)) {
    fVar1 = (float10)*(float *)(param_1 + 0x130);
  }
  if ((float10)*(float *)(param_1 + 0x134) < fVar1) {
    fVar1 = (float10)*(float *)(param_1 + 0x134);
  }
  return fVar1;
}

