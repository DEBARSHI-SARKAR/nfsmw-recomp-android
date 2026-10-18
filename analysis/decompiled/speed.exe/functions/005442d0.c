/* speed.exe 005442d0 FUN_005442d0; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 00543db0 FUN_00543db0
 */

void __fastcall FUN_005442d0(int param_1)

{
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0x774e4f02);
  *(int *)(DAT_0091cb20 + 0xcc) = param_1;
  FUN_00543db0(0x6948e2b3);
  return;
}

