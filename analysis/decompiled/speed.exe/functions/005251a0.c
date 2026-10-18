/* speed.exe 005251a0 FUN_005251a0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

int FUN_005251a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = FUN_00516af0(param_1), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(param_2), iVar1 != 0)) && (*(int *)(iVar1 + 0x18) == 1)) {
    return iVar1;
  }
  return 0;
}

