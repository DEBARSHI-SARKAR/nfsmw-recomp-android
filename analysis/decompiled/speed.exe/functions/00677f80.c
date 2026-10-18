/* speed.exe 00677f80 FUN_00677f80; analysis pseudocode, not buildable source.
 * calls 00672e80 FUN_00672e80
 * calls 00672d30 FUN_00672d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00677f80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00672e80(param_1,param_2);
  if (iVar1 == 0) {
    return (float10)_DAT_00890968;
  }
  iVar2 = FUN_00672d30(param_1,param_2);
  if (iVar2 == iVar1) {
    return (float10)_DAT_0089096c;
  }
  return (float10)iVar2 / (float10)iVar1;
}

