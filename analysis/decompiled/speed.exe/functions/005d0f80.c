/* speed.exe 005d0f80 FUN_005d0f80; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_005d0f80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*param_1 != 0)) {
    thunk_FUN_007c7250(*param_1);
  }
  return;
}

