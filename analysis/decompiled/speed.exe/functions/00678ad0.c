/* speed.exe 00678ad0 FUN_00678ad0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 0045be30 FUN_0045be30
 * calls 00678530 FUN_00678530
 * calls 00672d30 FUN_00672d30
 * calls 00678730 FUN_00678730
 * calls 00403c30 FUN_00403c30
 */

undefined4 FUN_00678ad0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ac08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  iVar2 = FUN_00672d30(param_1,param_2);
  if (iVar2 != param_3) {
    if (0 < param_3) {
      iVar2 = FUN_00672e80(local_20,param_2);
      if ((0 < iVar2) && (param_3 <= iVar2)) {
        cVar1 = FUN_00678730(local_20,param_2,param_3,(float)param_3 / (float)iVar2);
        if (cVar1 != '\0') {
          FUN_0045be30(local_20);
          goto LAB_00678b70;
        }
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 0;
    }
    FUN_00678530(param_1);
  }
LAB_00678b70:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 1;
}

