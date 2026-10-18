/* speed.exe 005fe090 FUN_005fe090; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005fc260 FUN_005fc260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005fe090(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x1968) != 0) {
    fVar1 = (float10)FUN_005fc260();
    fVar1 = fVar1 + (float10)*(float *)(param_1 + 0x1980);
    if ((float10)_DAT_00890968 < fVar1) {
      if (*(char *)(param_1 + 0x1978) == '\0') {
        fVar2 = (float10)*(float *)(param_1 + 0x1974);
      }
      else {
        fVar2 = (float10)FUN_006e8de0();
        fVar2 = (fVar2 - (float10)*(float *)(param_1 + 0x1970)) +
                (float10)*(float *)(param_1 + 0x1974);
      }
      fVar2 = (float10)(float)fVar1 - fVar2;
      if ((float10)_DAT_00890968 <= fVar2) {
        return fVar2;
      }
      return (float10)_DAT_00890968;
    }
  }
  return (float10)_DAT_00890968;
}

