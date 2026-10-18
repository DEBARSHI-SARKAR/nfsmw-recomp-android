/* speed.exe 00447b80 FUN_00447b80; analysis pseudocode, not buildable source.
 * calls 0045f160 FUN_0045f160
 * calls 0045f150 FUN_0045f150
 * calls 00463ca0 FUN_00463ca0
 * calls 00466330 FUN_00466330
 */

void FUN_00447b80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00463ca0(DAT_0090da80,param_1);
  iVar1 = FUN_0045f160(DAT_0090da80);
  iVar2 = FUN_0045f150(DAT_0090da80);
  if (iVar2 == iVar1) {
    FUN_00466330(DAT_0090da80);
    DAT_0090da80 = 0;
    DAT_0090da84 = 0;
  }
  return;
}

