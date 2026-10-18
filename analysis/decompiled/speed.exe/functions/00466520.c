/* speed.exe 00466520 FUN_00466520; analysis pseudocode, not buildable source.
 */

void FUN_00466520(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_3 = fVar1 * *param_2 + fVar2 * param_2[4] + fVar3 * param_2[8];
  param_3[1] = fVar1 * param_2[1] + fVar2 * param_2[5] + fVar3 * param_2[9];
  param_3[2] = fVar1 * param_2[2] + fVar2 * param_2[6] + fVar3 * param_2[10];
  param_3[3] = param_1[3];
  return;
}

