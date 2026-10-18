/* speed.exe 007624f0 FUN_007624f0; analysis pseudocode, not buildable source.
 */

float10 __fastcall FUN_007624f0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x14);
  if ((float10)*(float *)(param_1 + 4) < fVar1) {
    fVar1 = (float10)*(float *)(param_1 + 4);
  }
  if ((float10)*(float *)(param_1 + 0x24) <= fVar1) {
    fVar1 = (float10)*(float *)(param_1 + 0x24);
  }
  return fVar1;
}

