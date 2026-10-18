/* speed.exe 00517aa0 FUN_00517aa0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00517aa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004655f0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

