/* speed.exe 00671330 FUN_00671330; analysis pseudocode, not buildable source.
 * calls 00449320 FUN_00449320
 * calls 00467c30 FUN_00467c30
 */

int __thiscall FUN_00671330(int param_1,undefined4 param_2)

{
  FUN_00449320(0x3ccccccd);
  *(undefined4 *)(param_1 + 0x3c) = DAT_008a2fc0;
  *(undefined4 *)(param_1 + 0x40) = DAT_008a2fc4;
  *(undefined4 *)(param_1 + 0x44) = DAT_008a2fc8;
  *(undefined4 *)(param_1 + 0x48) = DAT_008a2fcc;
  *(undefined4 *)(param_1 + 0x4c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x50) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x54) = DAT_008a2fbc;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x60) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 100) = DAT_008a2fbc;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x70) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x74) = DAT_008a2fbc;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x80) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x84) = DAT_008a2fbc;
  *(undefined4 *)(param_1 + 0x8c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x90) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x94) = DAT_008a2fbc;
  FUN_00467c30(DAT_00988e84,0,0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = DAT_008a2fc0;
  *(undefined4 *)(param_1 + 0xb8) = DAT_008a2fc4;
  *(undefined4 *)(param_1 + 0xbc) = DAT_008a2fc8;
  *(undefined4 *)(param_1 + 0xc0) = DAT_008a2fcc;
  return param_1;
}

