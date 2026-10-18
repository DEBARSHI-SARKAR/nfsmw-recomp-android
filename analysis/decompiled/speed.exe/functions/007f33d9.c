/* speed.exe 007f33d9 FUN_007f33d9; analysis pseudocode, not buildable source.
 * calls 007f33a8 FUN_007f33a8
 * calls 007f352d FUN_007f352d
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_007f33d9(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_008c2328;
  FUN_007f33a8();
  iVar1 = param_1[0x11a];
  if (iVar1 != 0) {
    thunk_FUN_007c7250(iVar1);
    param_1[0x11a] = 0;
  }
  *param_1 = &PTR_FUN_008c2308;
  FUN_007f352d();
  return;
}

