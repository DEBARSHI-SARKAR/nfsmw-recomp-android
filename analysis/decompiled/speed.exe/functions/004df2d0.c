/* speed.exe 004df2d0 FUN_004df2d0; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 0082c730 FUN_0082c730
 */

void __fastcall FUN_004df2d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  FUN_0082c730(0xf000000);
  FUN_00829310(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1));
  *(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x34 + param_1) = 0;
  return;
}

