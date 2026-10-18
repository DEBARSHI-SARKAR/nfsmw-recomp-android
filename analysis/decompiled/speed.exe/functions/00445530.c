/* speed.exe 00445530 FUN_00445530; analysis pseudocode, not buildable source.
 * calls 0045f160 FUN_0045f160
 * calls 0045f150 FUN_0045f150
 * calls 00463ca0 FUN_00463ca0
 * calls 00466330 FUN_00466330
 */

void FUN_00445530(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00463ca0(DAT_0090d9b0,param_1);
  iVar1 = FUN_0045f160(DAT_0090d9b0);
  iVar2 = FUN_0045f150(DAT_0090d9b0);
  if (iVar2 == iVar1) {
    FUN_00466330(DAT_0090d9b0);
    DAT_0090d9b0 = 0;
    DAT_0090d9b4 = 0;
  }
  return;
}

