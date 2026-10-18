/* speed.exe 0046e1d0 FUN_0046e1d0; analysis pseudocode, not buildable source.
 * calls 0046e150 FUN_0046e150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0046e1d0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0046e150(param_2);
  if ((float10)_DAT_00890968 < fVar1) {
    return fVar1 - (float10)*(float *)(param_1 + 0x50);
  }
  return (float10)_DAT_00890968;
}

