/* speed.exe 0048cb90 FUN_0048cb90; analysis pseudocode, not buildable source.
 * calls 0048c190 FUN_0048c190
 */

undefined4 * __thiscall
FUN_0048cb90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,uint param_6)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_0089542c;
  param_1[3] = &PTR_LAB_008953fc;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = param_2;
  *(byte *)(param_1 + 8) = (byte)(param_6 >> 1) & 1;
  param_1[9] = &PTR_LAB_008953fc;
  param_1[10] = *param_5;
  param_1[0xb] = param_5[1];
  param_1[0xc] = param_5[2];
  *(byte *)(param_1 + 0xe) = (byte)param_6 & 1;
  param_1[0xd] = param_4;
  param_1[0xf] = DAT_008ee4c0;
  DAT_008ee4c0 = DAT_008ee4c0 + 4;
  uVar1 = FUN_0048c190();
  param_1[0x11] = uVar1;
  param_1[0x12] = 0;
  return param_1;
}

