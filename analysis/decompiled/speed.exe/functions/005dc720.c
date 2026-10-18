/* speed.exe 005dc720 FUN_005dc720; analysis pseudocode, not buildable source.
 */

float10 __thiscall FUN_005dc720(int param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x443c + param_2 * 4);
  if ((0 < param_3) && (param_2 == 0)) {
    fVar1 = ((float10)*(float *)(param_1 + 0x448c) - (float10)*(float *)(param_1 + 0x4488)) + fVar1;
  }
  return fVar1;
}

