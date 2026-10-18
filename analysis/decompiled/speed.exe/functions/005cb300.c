/* speed.exe 005cb300 FUN_005cb300; analysis pseudocode, not buildable source.
 */

void FUN_005cb300(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = param_1[9];
  uVar2 = param_1[1];
  uVar3 = param_1[8];
  uVar4 = param_1[2];
  uVar5 = param_1[6];
  param_2[1] = param_1[4];
  param_2[2] = uVar3;
  param_2[4] = uVar2;
  param_2[6] = uVar1;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  if (param_1 != param_2) {
    uVar1 = param_1[0xb];
    uVar2 = param_1[3];
    uVar3 = param_1[5];
    uVar4 = param_1[7];
    uVar5 = param_1[10];
    uVar6 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar8 = param_1[0xe];
    uVar9 = param_1[0xf];
    *param_2 = *param_1;
    param_2[3] = uVar2;
    param_2[5] = uVar3;
    param_2[7] = uVar4;
    param_2[10] = uVar5;
    param_2[0xb] = uVar1;
    param_2[0xc] = uVar6;
    param_2[0xd] = uVar7;
    param_2[0xe] = uVar8;
    param_2[0xf] = uVar9;
  }
  return;
}

