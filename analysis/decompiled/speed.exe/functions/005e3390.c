/* speed.exe 005e3390 FUN_005e3390; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005e3390(int param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x154) == '\0') {
    fVar1 = (float10)*(float *)(param_1 + 0x150);
  }
  else {
    fVar1 = (float10)FUN_006e8de0();
    fVar1 = (fVar1 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150);
  }
  if ((float10)_DAT_00890968 < fVar1) {
    return (float10)*(float *)(param_1 + 0xfc) / fVar1;
  }
  return (float10)_DAT_00890968;
}

