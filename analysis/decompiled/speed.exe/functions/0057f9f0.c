/* speed.exe 0057f9f0 FUN_0057f9f0; analysis pseudocode, not buildable source.
 * calls 0065b6e0 FUN_0065b6e0
 * calls 0065b760 FUN_0065b760
 */

undefined1 FUN_0057f9f0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871ffb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0065b6e0(param_1,param_3);
  FUN_0065b760();
  piVar3 = (int *)FUN_0065b760();
  iVar4 = 4;
  do {
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    iVar4 = iVar4 + -1;
    iVar2 = *param_2;
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  ExceptionList = local_c;
  return 0;
}

