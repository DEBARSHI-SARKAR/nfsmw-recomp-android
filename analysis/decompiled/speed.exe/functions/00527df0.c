/* speed.exe 00527df0 FUN_00527df0; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

void FUN_00527df0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00516af0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      if (iVar1 != 0) goto LAB_00527e1a;
    }
  }
  iVar1 = 0;
LAB_00527e1a:
  FUN_00514cc0(iVar1);
  return;
}

