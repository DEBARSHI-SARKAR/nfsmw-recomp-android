/* speed.exe 00629c40 FUN_00629c40; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_00629c40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00620fe0);
  *param_1 = iVar1;
  return iVar1 != 0;
}

