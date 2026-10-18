/* speed.exe 005e3060 FUN_005e3060; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005e3060(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x1968) == 0) {
    return (float10)_DAT_00890968;
  }
  if (*(char *)(param_1 + 0x1978) != '\0') {
    fVar1 = (float10)FUN_006e8de0();
    return (fVar1 - (float10)*(float *)(param_1 + 0x1970)) + (float10)*(float *)(param_1 + 0x1974);
  }
  return (float10)*(float *)(param_1 + 0x1974);
}

