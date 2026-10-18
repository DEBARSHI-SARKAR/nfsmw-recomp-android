/* speed.exe 00444fe0 FUN_00444fe0; analysis pseudocode, not buildable source.
 */

void FUN_00444fe0(undefined4 *param_1,undefined4 *param_2)

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
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  return;
}

