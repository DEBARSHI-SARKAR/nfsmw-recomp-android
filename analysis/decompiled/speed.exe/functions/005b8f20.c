/* speed.exe 005b8f20 FUN_005b8f20; analysis pseudocode, not buildable source.
 * calls 005b1f80 FUN_005b1f80
 * calls 005b85a0 FUN_005b85a0
 * calls 005b0870 FUN_005b0870
 */

bool FUN_005b8f20(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = FUN_005b1f80(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_005b0870(*(undefined4 *)(iVar1 + 4));
    *param_3 = iVar2;
    if (iVar2 != 0) {
      iVar1 = FUN_005b85a0(*(undefined4 *)(iVar1 + 8));
      *param_2 = iVar1;
      return iVar1 != 0;
    }
  }
  return false;
}

