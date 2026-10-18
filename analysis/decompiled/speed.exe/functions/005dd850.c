/* speed.exe 005dd850 FUN_005dd850; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005dd850(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

