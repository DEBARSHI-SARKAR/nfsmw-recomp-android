/* speed.exe 005ddec0 FUN_005ddec0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

float10 __fastcall FUN_005ddec0(float *param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    fVar1 = (float10)FUN_006e8de0();
    return (fVar1 - (float10)*param_1) + (float10)param_1[1];
  }
  return (float10)param_1[1];
}

