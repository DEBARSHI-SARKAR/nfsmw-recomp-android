/* speed.exe 00574b80 FUN_00574b80; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00574b80(int param_1)

{
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x7ab5521a,1);
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x1c))();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514d10(*(int *)(param_1 + 0x24),0x7ab5521a,1);
  }
  return;
}

