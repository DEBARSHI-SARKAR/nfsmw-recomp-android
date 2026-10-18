/* speed.exe 00423900 FUN_00423900; analysis pseudocode, not buildable source.
 * calls 004180f0 FUN_004180f0
 * calls 00409e60 FUN_00409e60
 */

void __thiscall FUN_00423900(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00409e60();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = param_3[2];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_004180f0();
  return;
}

