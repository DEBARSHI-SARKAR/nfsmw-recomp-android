/* speed.exe 006e3bc0 FUN_006e3bc0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006da000 FUN_006da000
 * calls 006e3270 FUN_006e3270
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_006e3bc0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0087e6b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x15555555 < param_2) {
    ExceptionList = &local_10;
    FUN_006e3270();
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
  }
  if (uVar1 < param_2) {
    iVar2 = FUN_005d29d0(param_2 * 0xc,&PTR_LAB_004c5452_1_00890f10);
    local_8 = 0;
    FUN_006da000(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar2,param_1,param_2);
    local_8 = 0xffffffff;
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
      FUN_005d0370(*(undefined4 *)(param_1 + 4),
                   ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc) * 0xc,
                   &PTR_LAB_004c5452_1_00890f10);
    }
    *(uint *)(param_1 + 0xc) = param_2 * 0xc + iVar2;
    *(int *)(param_1 + 8) = iVar2 + iVar3 * 0xc;
    *(int *)(param_1 + 4) = iVar2;
  }
  ExceptionList = local_10;
  return;
}

