/* speed.exe 00782f10 FUN_00782f10; analysis pseudocode, not buildable source.
 * calls 00782cb0 FUN_00782cb0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00782f10(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = param_1[0xc];
  local_c = param_1[0xd];
  local_8 = param_1[0xe];
  local_4 = param_1[0xf];
  uVar1 = param_1[6];
  uVar3 = param_1[4];
  puVar4 = param_2;
  puVar5 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[4] = param_1[4] & 0xffffff1f | 0x10;
  if (_DAT_008a2d18 <= (float)param_2[5]) {
    uVar3 = uVar3 >> 8 & 0xffffefff;
  }
  else {
    uVar3 = uVar3 >> 8 | 0x1000;
  }
  param_1[5] = param_3[1] + param_3[1];
  param_1[4] = uVar3 << 8 | 0x10;
  param_1[6] = uVar1;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  fVar6 = (float10)FUN_005c5e80(param_3[1] * param_3[1] +
                                param_3[2] * param_3[2] + *param_3 * *param_3);
  param_1[0xf] = (float)fVar6;
  param_1[3] = *param_3 + *param_3;
  param_1[0xb] = param_3[2] + param_3[2];
  FUN_00782cb0(&local_10,param_1 + 0xc,1,param_1);
  return;
}

