/* speed.exe 004badc0 FUN_004badc0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b2530 FUN_004b2530
 */

void __fastcall FUN_004badc0(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x14)) {
    FUN_004b2530();
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_004655f0(*(int *)(param_1 + 0xc));
    }
  }
  return;
}

