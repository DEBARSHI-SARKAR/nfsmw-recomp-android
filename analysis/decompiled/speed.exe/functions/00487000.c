/* speed.exe 00487000 FUN_00487000; analysis pseudocode, not buildable source.
 * calls 004665b0 FUN_004665b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00487000(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x20] = *param_4;
  param_1[0x21] = param_4[1];
  param_1[0x22] = param_4[2];
  param_1[0x23] = *param_5;
  param_1[0x24] = param_5[1];
  param_1[0x25] = param_5[2];
  param_1[0x26] = *param_6;
  param_1[0x27] = param_6[1];
  param_1[0x28] = param_6[2];
  param_1[0x29] = *param_7;
  param_1[0x2a] = param_7[1];
  param_1[0x2b] = param_7[2];
  param_1[0x2c] = *param_8;
  param_1[0x2d] = param_8[1];
  param_1[0x2e] = param_8[2];
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x34] = param_3;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004665b0(param_1,param_1 + 0x10);
  param_1[0x35] = _DAT_0089096c / (float)param_1[0x34];
  return param_1;
}

