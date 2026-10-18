/* speed.exe 005e4fb0 FUN_005e4fb0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

float * __fastcall FUN_005e4fb0(float *param_1)

{
  float10 fVar1;
  
  param_1[1] = 0.0;
  fVar1 = (float10)FUN_006e8de0();
  *param_1 = (float)fVar1;
  return param_1;
}

