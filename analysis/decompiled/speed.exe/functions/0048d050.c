/* speed.exe 0048d050 FUN_0048d050; analysis pseudocode, not buildable source.
 * calls 0048cc60 FUN_0048cc60
 * calls 0048c220 FUN_0048c220
 * calls 0048b070 FUN_0048b070
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall
FUN_0048d050(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ae1e;
  local_c = ExceptionList;
  if (param_2 == *(int *)(param_1 + 0x1c)) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x68,0);
    local_4 = 0;
    if (iVar1 == 0) {
      param_7 = 0;
    }
    else {
      param_7 = FUN_0048b070(param_3,param_4,param_5,param_1 + 0xc,param_1 + 0x24,param_6,param_7);
    }
    iVar1 = *(int *)(param_1 + 0x44);
    local_4 = 0xffffffff;
    iVar2 = FUN_0048c220(iVar1,*(undefined4 *)(iVar1 + 4),&param_7);
    FUN_0048cc60(1);
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x68,0);
  local_4 = 1;
  if (iVar1 == 0) {
    param_7 = 0;
  }
  else {
    param_7 = FUN_0048b070(param_3,param_4,param_5,param_1 + 0x24,param_1 + 0xc,param_6,param_7);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  local_4 = 0xffffffff;
  iVar2 = FUN_0048c220(iVar1,*(undefined4 *)(iVar1 + 4),&param_7);
  FUN_0048cc60(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  ExceptionList = local_c;
  return;
}

