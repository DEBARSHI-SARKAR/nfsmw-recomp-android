/* speed.exe 0046ff50 FUN_0046ff50; analysis pseudocode, not buildable source.
 */

void FUN_0046ff50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = -*param_2;
  param_1[1] = -fVar1;
  param_1[2] = -fVar2;
  return;
}

