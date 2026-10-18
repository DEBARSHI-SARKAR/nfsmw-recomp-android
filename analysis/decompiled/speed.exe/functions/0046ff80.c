/* speed.exe 0046ff80 FUN_0046ff80; analysis pseudocode, not buildable source.
 */

void FUN_0046ff80(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar1;
  param_1[2] = param_3 * fVar2;
  return;
}

