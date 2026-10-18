/* speed.exe 008316f2 FUN_008316f2; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 * calls 00831304 FUN_00831304
 */

int FUN_008316f2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00831304(param_1,0);
  if (-1 < iVar1) {
    FUN_00819648(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

