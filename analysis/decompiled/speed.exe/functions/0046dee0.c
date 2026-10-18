/* speed.exe 0046dee0 FUN_0046dee0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __fastcall FUN_0046dee0(int param_1)

{
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 2) != '\0')) {
    FUN_007c4b80();
    return;
  }
  FUN_007c4b80();
  return;
}

