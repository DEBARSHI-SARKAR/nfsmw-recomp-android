/* speed.exe 008367a0 FUN_008367a0; analysis pseudocode, not buildable source.
 */

void FUN_008367a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))(param_1,5,0,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}

