/* speed.exe 004fa510 FUN_004fa510; analysis pseudocode, not buildable source.
 */

void FUN_004fa510(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_3 = fVar1 * *param_2 + fVar2 * param_2[4] + fVar3 * param_2[8] + fVar4 * param_2[0xc];
  param_3[1] = fVar1 * param_2[1] + fVar2 * param_2[5] + fVar3 * param_2[9] + fVar4 * param_2[0xd];
  param_3[2] = fVar1 * param_2[2] + fVar2 * param_2[6] + fVar3 * param_2[10] + fVar4 * param_2[0xe];
  param_3[3] = fVar1 * param_2[3] + fVar2 * param_2[7] + fVar3 * param_2[0xb] + fVar4 * param_2[0xf]
  ;
  return;
}

