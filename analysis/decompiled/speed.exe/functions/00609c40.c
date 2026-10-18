/* speed.exe 00609c40 FUN_00609c40; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_00609c40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00403770);
  *param_1 = iVar1;
  return iVar1 != 0;
}

