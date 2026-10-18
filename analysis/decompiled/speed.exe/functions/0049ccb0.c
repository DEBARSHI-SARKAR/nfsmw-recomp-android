/* speed.exe 0049ccb0 FUN_0049ccb0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

float10 __thiscall FUN_0049ccb0(int param_1,float param_2)

{
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (param_2 < *(float *)(param_1 + 0xc)) {
    iVar1 = FUN_007c4b80();
    return (float10)*(float *)(param_1 + 0x10) -
           (extraout_ST0 - (float10)iVar1 * (float10)*(float *)(param_1 + 0x14));
  }
  if (*(float *)(param_1 + 0x10) < param_2) {
    iVar1 = FUN_007c4b80();
    return (extraout_ST0_00 - (float10)iVar1 * (float10)*(float *)(param_1 + 0x14)) +
           (float10)*(float *)(param_1 + 0xc);
  }
  return (float10)param_2;
}

