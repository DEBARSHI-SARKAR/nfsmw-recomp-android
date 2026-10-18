/* speed.exe 004dc650 FUN_004dc650; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004dc650(int *param_1)

{
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0x3c) = 1;
  }
  (**(code **)(*param_1 + 0x34))();
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

