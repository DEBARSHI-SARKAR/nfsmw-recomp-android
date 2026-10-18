/* speed.exe 00466a60 FUN_00466a60; analysis pseudocode, not buildable source.
 */

void FUN_00466a60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar1 = param_2[9];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar1;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = uVar2;
  return;
}

