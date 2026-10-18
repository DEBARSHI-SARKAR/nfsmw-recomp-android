/* speed.exe 00438c60 FUN_00438c60; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00425e20 FUN_00425e20
 * calls 00435c70 FUN_00435c70
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_00438c60(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00868d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x9249249 < param_2) {
    ExceptionList = &local_10;
    FUN_00435c70();
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x1c;
  }
  if (uVar2 < param_2) {
    if (param_2 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_005d29d0(param_2 * 0x1c,0);
    }
    local_8 = 0;
    FUN_00425e20(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),local_18,param_1,param_2)
    ;
    iVar1 = *(int *)(param_1 + 4);
    local_8 = 0xffffffff;
    if (iVar1 != 0) {
      iVar3 = (*(int *)(param_1 + 8) - iVar1) / 0x1c;
      FUN_005d0370(iVar1,((*(int *)(param_1 + 0xc) - iVar1) / 0x1c) * 0x1c,0);
    }
    *(uint *)(param_1 + 0xc) = param_2 * 0x1c + local_18;
    *(int *)(param_1 + 8) = iVar3 * 0x1c + local_18;
    *(int *)(param_1 + 4) = local_18;
  }
  ExceptionList = local_10;
  return;
}

