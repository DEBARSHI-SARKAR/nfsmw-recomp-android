/* speed.exe 0045c8f0 FUN_0045c8f0; analysis pseudocode, not buildable source.
 */

void FUN_0045c8f0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar3 = param_2[3];
  fVar2 = param_2[2];
  *param_1 = param_3 * *param_2;
  param_1[1] = fVar1 * param_3;
  param_1[2] = fVar2 * param_3;
  param_1[3] = fVar3 * param_3;
  return;
}

