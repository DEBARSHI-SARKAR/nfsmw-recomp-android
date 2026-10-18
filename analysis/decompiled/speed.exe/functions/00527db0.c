/* speed.exe 00527db0 FUN_00527db0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00514c70 FUN_00514c70
 * calls 00516af0 FUN_00516af0
 */

void FUN_00527db0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00516af0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      if (iVar1 != 0) goto LAB_00527dda;
    }
  }
  iVar1 = 0;
LAB_00527dda:
  FUN_00514c70(iVar1);
  return;
}

