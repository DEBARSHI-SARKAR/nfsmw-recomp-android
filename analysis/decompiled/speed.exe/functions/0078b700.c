/* speed.exe 0078b700 FUN_0078b700; analysis pseudocode, not buildable source.
 * calls 00840c60 FUN_00840c60
 */

void __fastcall FUN_0078b700(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_00840c60(*(int *)(param_1 + 0x38),0x636f6e66);
  return;
}

