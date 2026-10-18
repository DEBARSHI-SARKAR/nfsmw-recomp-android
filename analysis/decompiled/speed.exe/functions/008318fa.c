/* speed.exe 008318fa FUN_008318fa; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 * calls 008314e4 FUN_008314e4
 */

int FUN_008318fa(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008314e4(param_1,0);
  if (-1 < iVar1) {
    FUN_00819648(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

