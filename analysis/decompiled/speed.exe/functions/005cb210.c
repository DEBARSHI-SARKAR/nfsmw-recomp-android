/* speed.exe 005cb210 FUN_005cb210; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 */

void FUN_005cb210(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_00444dc0(param_1,param_2,&local_30);
  fVar1 = param_1[3];
  local_30 = fVar1 * *param_2 + local_30;
  local_2c = fVar1 * param_2[1] + local_2c;
  local_28 = fVar1 * param_2[2] + local_28;
  FUN_00444dc0(&local_30,param_1,&local_10);
  fVar3 = param_1[3];
  fVar4 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_2[2] * param_1[2];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  local_10 = (local_30 * fVar3 + fVar4 * *param_1) - local_10;
  *param_4 = local_10;
  local_c = (local_2c * fVar3 + fVar4 * fVar1) - local_c;
  param_4[1] = local_c;
  local_8 = (local_28 * fVar3 + fVar4 * fVar2) - local_8;
  param_4[2] = local_8;
  *param_4 = local_10 + *param_3;
  param_4[1] = local_c + param_3[1];
  param_4[2] = local_8 + param_3[2];
  return;
}

