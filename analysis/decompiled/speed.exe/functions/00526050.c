/* speed.exe 00526050 FUN_00526050; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00526050(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004655f0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  DAT_0091cb1c = 0;
  return;
}

