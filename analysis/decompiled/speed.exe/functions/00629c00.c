/* speed.exe 00629c00 FUN_00629c00; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_00629c00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00620c50);
  *param_1 = iVar1;
  return iVar1 != 0;
}

