/* speed.exe 00747ae0 FUN_00747ae0; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 */

undefined4 FUN_00747ae0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00739730(param_1,0);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return param_2;
}

