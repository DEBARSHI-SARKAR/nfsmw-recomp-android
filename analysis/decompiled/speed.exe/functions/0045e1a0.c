/* speed.exe 0045e1a0 FUN_0045e1a0; analysis pseudocode, not buildable source.
 */

void FUN_0045e1a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[5];
  uVar7 = param_2[7];
  fVar2 = (float)param_2[6];
  fVar3 = (float)param_2[4];
  uVar4 = param_2[10];
  uVar5 = param_2[8];
  fVar6 = (float)param_2[9];
  param_1[7] = param_2[0xb];
  param_1[4] = -fVar6;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  uVar4 = param_2[2];
  uVar5 = *param_2;
  fVar6 = (float)param_2[1];
  param_1[0xb] = param_2[3];
  param_1[8] = -fVar6;
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  param_1[2] = -fVar3;
  *param_1 = uVar1;
  param_1[3] = uVar7;
  param_1[1] = -fVar2;
  uVar1 = param_2[0xe];
  uVar4 = param_2[0xc];
  fVar2 = (float)param_2[0xd];
  param_1[0xf] = param_2[0xf];
  param_1[0xc] = -fVar2;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar4;
  return;
}

