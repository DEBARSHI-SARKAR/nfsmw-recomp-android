/* speed.exe 00524500 FUN_00524500; analysis pseudocode, not buildable source.
 * calls 00524390 FUN_00524390
 */

void __fastcall FUN_00524500(int param_1)

{
  if (*(int *)(param_1 + 0x1164) < *(int *)(param_1 + 0x1168)) {
    *(int *)(param_1 + 0x1164) = *(int *)(param_1 + 0x1164) + 1;
  }
  FUN_00524390();
  return;
}

