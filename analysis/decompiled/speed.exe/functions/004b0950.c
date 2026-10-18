/* speed.exe 004b0950 FUN_004b0950; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 */

undefined4 FUN_004b0950(int param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  fVar1 = (float10)FUN_0045f340(param_2,param_1 + 0x40);
  if (fVar1 < (float10)param_3) {
    return 1;
  }
  return 0;
}

