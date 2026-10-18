/* speed.exe 00574340 FUN_00574340; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_00574340(int param_1)

{
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514cc0(*(int *)(param_1 + 0x24));
  }
  return;
}

