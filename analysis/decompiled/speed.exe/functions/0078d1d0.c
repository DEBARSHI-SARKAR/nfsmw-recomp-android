/* speed.exe 0078d1d0 FUN_0078d1d0; analysis pseudocode, not buildable source.
 * calls 008428e0 FUN_008428e0
 */

void __fastcall FUN_0078d1d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_008428e0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

