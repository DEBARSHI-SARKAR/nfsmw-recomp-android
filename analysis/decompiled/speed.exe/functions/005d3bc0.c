/* speed.exe 005d3bc0 FUN_005d3bc0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

void FUN_005d3bc0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_1[2];
  fVar3 = *param_1;
  fVar4 = param_2[2];
  fVar5 = *param_1;
  fVar6 = param_2[1];
  fVar7 = *param_2;
  fVar8 = param_1[1];
  *param_3 = param_2[2] * param_1[1] - param_2[1] * param_1[2];
  param_3[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_3[2] = fVar5 * fVar6 - fVar7 * fVar8;
  FUN_0040fe20(param_3,param_3);
  return;
}

