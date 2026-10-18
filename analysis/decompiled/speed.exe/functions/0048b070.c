/* speed.exe 0048b070 FUN_0048b070; analysis pseudocode, not buildable source.
 * calls 005d06a0 FUN_005d06a0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0048b070(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float *param_7,undefined4 param_8)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  param_3 = param_3 * _DAT_0089095c;
  *param_1 = &PTR_LAB_00895404;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_5;
  param_1[0x12] = param_6;
  param_1[0x13] = *param_7;
  param_1[0x14] = param_7[1];
  param_1[0x15] = param_7[2];
  param_1[0x16] = param_3;
  param_1[0x17] = param_4 * _DAT_0089095c;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = param_8;
  FUN_005d06a0(param_2,param_1 + 1);
  fVar1 = (float10)FUN_005c5e80(param_7[2] * param_7[2] +
                                param_7[1] * param_7[1] + *param_7 * *param_7);
  fVar3 = (float10)_DAT_008953ec;
  param_1[6] = 0;
  param_1[9] = 0;
  fVar2 = (float10)fcos((float10)(float)param_1[0x16] * fVar3);
  param_1[5] = (float)-fVar2;
  fVar3 = (float10)fsin((float10)(float)param_1[0x16] * fVar3);
  param_1[7] = (float)fVar3;
  param_1[8] = (float)(fVar3 * fVar1);
  param_1[10] = (float)(fVar2 * fVar1);
  param_1[0xc] = 0;
  fVar3 = (float10)_DAT_008953ec;
  param_1[0xf] = 0;
  fVar2 = (float10)fcos((float10)(float)param_1[0x17] * fVar3);
  param_1[0xb] = (float)fVar2;
  fVar3 = (float10)fsin((float10)(float)param_1[0x17] * fVar3);
  param_1[0xd] = (float)fVar3;
  param_1[0xe] = (float)-(fVar3 * fVar1);
  param_1[0x10] = (float)((float10)(float)fVar2 * fVar1);
  return param_1;
}

