/* speed.exe 0040e040 FUN_0040e040; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_0040e040(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_004040e0);
  *param_1 = iVar1;
  return iVar1 != 0;
}

