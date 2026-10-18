/* speed.exe 00574fd0 FUN_00574fd0; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_00574fd0(int param_1)

{
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x2c));
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514cc0(*(int *)(param_1 + 0x24));
  }
  return;
}

