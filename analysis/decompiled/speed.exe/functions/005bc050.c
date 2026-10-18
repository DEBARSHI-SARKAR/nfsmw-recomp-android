/* speed.exe 005bc050 FUN_005bc050; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005bc050(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_008a2df0;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = &PTR_LAB_008a2c18;
  param_1[0x11] = &PTR_LAB_008a2c18;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  iVar1 = DAT_008f56c4 + 1;
  param_1[3] = DAT_008f56c4;
  DAT_008f56c4 = iVar1;
  return;
}

