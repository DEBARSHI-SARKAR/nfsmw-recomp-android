/* speed.exe 00503380 FUN_00503380; analysis pseudocode, not buildable source.
 * calls 005010a0 FUN_005010a0
 * calls 0064cf00 thunk_FUN_007ec298
 * calls 006626b0 FUN_006626b0
 */

void FUN_00503380(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005010a0(param_1);
  while (iVar1 != 0) {
    thunk_FUN_007ec298(8);
    FUN_006626b0();
    iVar1 = FUN_005010a0(param_1);
  }
  return;
}

