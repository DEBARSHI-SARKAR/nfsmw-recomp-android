/* speed.exe 005c8cc0 FUN_005c8cc0; analysis pseudocode, not buildable source.
 */

void FUN_005c8cc0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1[4];
  param_1[4] = param_1[1];
  fVar3 = param_1[8];
  param_1[1] = fVar2;
  param_1[8] = param_1[2];
  fVar4 = param_1[9];
  fVar2 = param_1[6];
  param_1[2] = fVar3;
  param_1[9] = fVar2;
  param_1[6] = fVar4;
  fVar3 = param_1[0xc];
  fVar4 = param_1[0xd];
  fVar1 = param_1[0xe];
  param_1[0xc] = (-(fVar3 * *param_1) - fVar4 * param_1[4]) - fVar1 * param_1[8];
  param_1[0xd] = (-(fVar3 * param_1[1]) - fVar4 * param_1[5]) - fVar1 * fVar2;
  param_1[0xe] = (-(fVar3 * param_1[2]) - fVar4 * param_1[6]) - fVar1 * param_1[10];
  return;
}

