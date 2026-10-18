/* speed.exe 00513780 FUN_00513780; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 FUN_00513780(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460d20(param_1,"ScreenPrintf.fng");
  if (iVar1 != 0) {
    iVar1 = FUN_00460d20(param_1,"EA_TRAX.fng");
    if (iVar1 != 0) {
      iVar1 = FUN_00460d20(param_1,"GarageMain.fng");
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

