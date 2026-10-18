/* speed.exe 008317de FUN_008317de; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 * calls 008313f3 FUN_008313f3
 */

int FUN_008317de(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008313f3(param_1,0);
  if (-1 < iVar1) {
    FUN_00819648(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

