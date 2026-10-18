/* speed.exe 00401d30 FUN_00401d30; analysis pseudocode, not buildable source.
 */

float10 FUN_00401d30(float param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_2;
  if (param_1 < param_2) {
    fVar1 = param_1;
  }
  fVar2 = (float10)fVar1;
  if (fVar2 < -(float10)param_2) {
    fVar2 = (float10)(float)-(float10)param_2;
  }
  return fVar2;
}

