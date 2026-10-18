/* speed.exe 005e5010 FUN_005e5010; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __fastcall FUN_005e5010(float *param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    fVar1 = (float10)FUN_006e8de0();
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = (float)((fVar1 - (float10)*param_1) + (float10)param_1[1]);
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = param_1[1];
  return;
}

