/* speed.exe 00450e70 FUN_00450e70; analysis pseudocode, not buildable source.
 * calls 00450770 FUN_00450770
 * calls 0044ac30 FUN_0044ac30
 * calls 00450dc0 FUN_00450dc0
 */

int FUN_00450e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0044ac30(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00450dc0(iVar1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      FUN_00450770(iVar1);
      return iVar1;
    }
  }
  return 0;
}

