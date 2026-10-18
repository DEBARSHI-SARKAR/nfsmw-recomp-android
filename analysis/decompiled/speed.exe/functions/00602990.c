/* speed.exe 00602990 FUN_00602990; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005fba70 FUN_005fba70
 * calls 005f7880 FUN_005f7880
 * calls 00452430 FUN_00452430
 * calls 005ebf90 FUN_005ebf90
 * calls 00600a20 FUN_00600a20
 */

void FUN_00602990(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  FUN_005ebf90();
  if (param_1 != 0) {
    param_1 = 0;
    uVar2 = FUN_00452430();
    iVar3 = FUN_00600a20(uVar2);
    if (iVar3 != 0) {
      iVar4 = FUN_005faa20();
      if (iVar4 == 2) {
        param_1 = 1;
      }
    }
    if ((DAT_009260b2 != '\0') && (iVar3 != 0)) {
      FUN_005fba70();
    }
    FUN_005f7880(iVar1,param_1);
  }
  return;
}

