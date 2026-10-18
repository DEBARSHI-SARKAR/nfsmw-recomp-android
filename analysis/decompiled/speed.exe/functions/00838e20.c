/* speed.exe 00838e20 FUN_00838e20; analysis pseudocode, not buildable source.
 * calls 00838cc0 FUN_00838cc0
 */

void FUN_00838e20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00838cc0(param_1,1,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00838cc0(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00838cc0(param_1,0,1);
      if (iVar1 != 0) {
        FUN_00838cc0(param_1,0,0);
      }
    }
  }
  return;
}

