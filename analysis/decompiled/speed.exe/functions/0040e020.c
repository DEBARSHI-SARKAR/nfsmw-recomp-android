/* speed.exe 0040e020 FUN_0040e020; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_0040e020(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00403700);
  *param_1 = iVar1;
  return iVar1 != 0;
}

