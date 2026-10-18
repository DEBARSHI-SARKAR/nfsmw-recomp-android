/* speed.exe 00524520 FUN_00524520; analysis pseudocode, not buildable source.
 * calls 00524390 FUN_00524390
 */

void __fastcall FUN_00524520(int param_1)

{
  if (0xc < *(int *)(param_1 + 0x1164)) {
    *(int *)(param_1 + 0x1164) = *(int *)(param_1 + 0x1164) + -1;
  }
  FUN_00524390();
  return;
}

