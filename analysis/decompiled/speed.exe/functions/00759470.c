/* speed.exe 00759470 FUN_00759470; analysis pseudocode, not buildable source.
 * calls 00747ec0 FUN_00747ec0
 * calls 00756e90 FUN_00756e90
 */

void __thiscall FUN_00759470(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00747ec0(*param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_00756e90(param_2,iVar1,1);
  }
  return;
}

