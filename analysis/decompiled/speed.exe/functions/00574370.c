/* speed.exe 00574370 FUN_00574370; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_00574370(int param_1)

{
  FUN_00514c70(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514c70(*(int *)(param_1 + 0x24));
  }
  return;
}

