/* speed.exe 0040e440 FUN_0040e440; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_0040e440(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00404010);
  *param_1 = iVar1;
  return iVar1 != 0;
}

