/* speed.exe 00574890 FUN_00574890; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_00574890(int param_1)

{
  FUN_00514c70(*(undefined4 *)(param_1 + 0x2c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x30));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x4c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514c70(*(int *)(param_1 + 0x24));
  }
  FUN_00514c70(*(undefined4 *)(param_1 + 0x5c));
  return;
}

