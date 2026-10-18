/* speed.exe 00782b30 FUN_00782b30; analysis pseudocode, not buildable source.
 * calls 00771580 FUN_00771580
 * calls 0077e400 FUN_0077e400
 * calls 005d29d0 FUN_005d29d0
 * calls 00771900 FUN_00771900
 */

void __thiscall FUN_00782b30(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088201f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0xc,0);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_14 = iVar1;
      uVar2 = FUN_00771580();
      *(undefined4 *)(iVar1 + 4) = uVar2;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    *param_1 = iVar1;
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(*param_1 + 4);
  local_14 = param_2;
  local_10 = param_3;
  iVar3 = FUN_00771900(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_0077e400(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return;
}

