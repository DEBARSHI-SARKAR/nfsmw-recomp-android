/* speed.exe 0041ce30 FUN_0041ce30; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool __thiscall FUN_0041ce30(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = FUN_005d59f0(&LAB_004039f0);
    *param_2 = iVar1;
    return iVar1 != 0;
  }
  *param_2 = 0;
  return false;
}

