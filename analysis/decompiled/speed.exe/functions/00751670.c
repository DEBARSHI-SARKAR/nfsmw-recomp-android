/* speed.exe 00751670 FUN_00751670; analysis pseudocode, not buildable source.
 * calls 00747c40 FUN_00747c40
 */

int FUN_00751670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = FUN_00747c40(param_1,param_2,param_3,0,param_4); iVar1 != 0;
      iVar1 = FUN_00747c40(param_1,param_2,param_3,iVar1,param_4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

