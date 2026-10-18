/* speed.exe 00401d70 FUN_00401d70; analysis pseudocode, not buildable source.
 */

float10 FUN_00401d70(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  fVar1 = (float10)param_3;
  if (fVar1 < (float10)param_2) {
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

