/* speed.exe 004b7b40 FUN_004b7b40; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_004b7b40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_004b4380);
  *param_1 = iVar1;
  return iVar1 != 0;
}

