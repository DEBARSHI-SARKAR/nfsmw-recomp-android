/* speed.exe 004b7b00 FUN_004b7b00; analysis pseudocode, not buildable source.
 */

float10 FUN_004b7b00(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 + (float10)param_3;
  if (((float10)param_2 <= fVar1) &&
     (fVar1 = (float10)param_1 - (float10)param_3, fVar1 <= (float10)param_2)) {
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

