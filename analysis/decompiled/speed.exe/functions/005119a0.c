/* speed.exe 005119a0 FUN_005119a0; analysis pseudocode, not buildable source.
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_005119a0(int param_1)

{
  FUN_00503360(param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}

