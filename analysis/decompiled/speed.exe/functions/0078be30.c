/* speed.exe 0078be30 FUN_0078be30; analysis pseudocode, not buildable source.
 * calls 0083e3a0 FUN_0083e3a0
 */

void __fastcall FUN_0078be30(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_0083e3a0(*(int *)(param_1 + 0xc));
  return;
}

