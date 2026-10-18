/* speed.exe 004aebb0 FUN_004aebb0; analysis pseudocode, not buildable source.
 */

float10 __fastcall FUN_004aebb0(int param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x70) == 1) {
    return (float10)pfVar1[2] * (float10)*pfVar1;
  }
  return (float10)pfVar1[3] * (float10)*pfVar1;
}

