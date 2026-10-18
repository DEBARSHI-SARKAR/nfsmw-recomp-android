/* speed.exe 00574840 FUN_00574840; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_00574840(int param_1)

{
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x2c));
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x30));
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x4c));
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514cc0(*(int *)(param_1 + 0x24));
  }
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x5c));
  return;
}

