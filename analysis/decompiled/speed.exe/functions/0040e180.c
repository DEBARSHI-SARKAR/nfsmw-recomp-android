/* speed.exe 0040e180 FUN_0040e180; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_0040e180(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_004037e0);
  *param_1 = iVar1;
  return iVar1 != 0;
}

