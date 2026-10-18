/* speed.exe 0049c670 FUN_0049c670; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

float10 FUN_0049c670(float param_1,float param_2,float param_3)

{
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  
  if (param_1 < param_2) {
    iVar1 = FUN_007c4b80();
    return (float10)param_3 - (extraout_ST0 - (float10)iVar1 * extraout_ST1);
  }
  if (param_3 <= param_1) {
    iVar1 = FUN_007c4b80();
    return (extraout_ST0_00 - (float10)iVar1 * extraout_ST1_00) + (float10)param_2;
  }
  return (float10)param_1;
}

