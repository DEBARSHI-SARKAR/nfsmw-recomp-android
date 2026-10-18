/* speed.exe 00426960 FUN_00426960; analysis pseudocode, not buildable source.
 * calls 00426850 FUN_00426850
 * calls 00426610 FUN_00426610
 */

undefined4 FUN_00426960(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00426610(DAT_0092c52c,0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00426850(param_1,iVar1);
  return 1;
}

