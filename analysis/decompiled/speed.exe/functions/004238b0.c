/* speed.exe 004238b0 FUN_004238b0; analysis pseudocode, not buildable source.
 * calls 004180f0 FUN_004180f0
 * calls 00409e60 FUN_00409e60
 */

void __thiscall FUN_004238b0(int param_1,undefined4 *param_2)

{
  FUN_00409e60();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x24) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x28) = DAT_008a2fbc;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_004180f0();
  return;
}

