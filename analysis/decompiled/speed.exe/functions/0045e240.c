/* speed.exe 0045e240 FUN_0045e240; analysis pseudocode, not buildable source.
 */

void FUN_0045e240(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar1 = (float)param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[0xb];
  uVar2 = *param_2;
  fVar3 = (float)param_2[1];
  fVar4 = (float)param_2[8];
  uVar5 = param_2[9];
  *param_1 = param_2[10];
  param_1[1] = -fVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar5;
  uVar7 = param_2[7];
  fVar4 = (float)param_2[4];
  uVar5 = param_2[5];
  param_1[8] = param_2[6];
  param_1[9] = -fVar4;
  param_1[0xb] = uVar7;
  param_1[10] = uVar5;
  param_1[6] = -fVar3;
  param_1[4] = -fVar1;
  param_1[7] = uVar6;
  param_1[5] = uVar2;
  uVar5 = param_2[0xf];
  fVar1 = (float)param_2[0xc];
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xe];
  param_1[0xd] = -fVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar2;
  return;
}

