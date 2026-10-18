/* speed.exe 004509e0 FUN_004509e0; analysis pseudocode, not buildable source.
 * calls 00450700 FUN_00450700
 * calls 0044a670 FUN_0044a670
 * calls 0044fe60 FUN_0044fe60
 */

undefined4 FUN_004509e0(undefined4 param_1,char param_2)

{
  char extraout_AL;
  int iVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  
  iVar1 = FUN_0044a670(param_1);
  if (iVar1 != 0) {
    FUN_0044fe60();
    uVar2 = extraout_var;
    if ((extraout_AL != '\0') && (param_2 != '\0')) {
      FUN_00450700(param_1);
      uVar2 = extraout_var_00;
    }
    return CONCAT31(uVar2,extraout_AL);
  }
  return 0;
}

