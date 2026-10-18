/* speed.exe 007701d0 FUN_007701d0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

undefined4 * __thiscall
FUN_007701d0(undefined4 *param_1,undefined4 *param_2,float *param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[4] = param_1[4] & 0xffffff1f | 0x10;
  fVar1 = param_3[1];
  param_1[4] = param_5 << 8 | 0x10;
  param_1[5] = fVar1 + fVar1;
  param_1[6] = param_4;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  fVar5 = (float10)FUN_005c5e80(param_3[1] * param_3[1] +
                                param_3[2] * param_3[2] + *param_3 * *param_3);
  param_1[0xf] = (float)fVar5;
  param_1[3] = *param_3 + *param_3;
  param_1[0xb] = param_3[2] + param_3[2];
  return param_1;
}

