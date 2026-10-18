/* speed.exe 005745f0 FUN_005745f0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_005745f0(int param_1)

{
  FUN_00514c70(*(undefined4 *)(param_1 + 0x2c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x30));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x4c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514c70(*(int *)(param_1 + 0x24));
  }
  return;
}

