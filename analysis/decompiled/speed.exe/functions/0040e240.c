/* speed.exe 0040e240 FUN_0040e240; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool __thiscall FUN_0040e240(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = FUN_005d59f0(&LAB_00403700);
    *param_2 = iVar1;
    return iVar1 != 0;
  }
  *param_2 = 0;
  return false;
}

