/* speed.exe 00787580 FUN_00787580; analysis pseudocode, not buildable source.
 * calls 0077c500 FUN_0077c500
 * calls 00787420 FUN_00787420
 * calls 005d29d0 FUN_005d29d0
 * calls 00783390 FUN_00783390
 */

int FUN_00787580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882352;
  local_c = ExceptionList;
  local_14 = param_1;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_0077c500(&local_10,&local_14);
    if (local_10 != DAT_009b3a0c) {
      iVar2 = *(int *)(local_10 + 0x10);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
        ExceptionList = local_c;
        return iVar2;
      }
    }
  }
  local_10 = FUN_005d29d0(0x98,0);
  local_4 = 0;
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00787420(param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0x90) = iVar1;
  *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00783390(&param_1);
    *piVar3 = iVar2;
  }
  ExceptionList = local_c;
  return iVar2;
}

