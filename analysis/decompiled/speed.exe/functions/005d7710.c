/* speed.exe 005d7710 FUN_005d7710; analysis pseudocode, not buildable source.
 * calls 005d64e0 thunk_FUN_005d5f50
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005d7710(undefined4 *param_1)

{
  int *piVar1;
  
  thunk_FUN_007c7250(*param_1);
  piVar1 = (int *)param_1[4];
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    thunk_FUN_005d5f50();
    *piVar1 = (int)DAT_00925b30;
    DAT_00925b30 = piVar1;
  }
  param_1[4] = 0;
  return;
}

