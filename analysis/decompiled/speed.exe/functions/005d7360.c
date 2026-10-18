/* speed.exe 005d7360 FUN_005d7360; analysis pseudocode, not buildable source.
 * calls 005d6670 FUN_005d6670
 * calls 005d29d0 FUN_005d29d0
 * calls 005d4e80 FUN_005d4e80
 * calls 005d5470 FUN_005d5470
 * calls 005d1290 FUN_005d1290
 */

void __thiscall FUN_005d7360(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_EDX;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00874aa0;
  local_10 = ExceptionList;
  uVar4 = param_2;
  ExceptionList = &local_10;
  if (0x3fffffff < param_2) {
    ExceptionList = &local_10;
    FUN_005d6670();
    uVar4 = extraout_EDX;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar2 < uVar4) {
    iVar3 = FUN_005d29d0(uVar4 * 4,&PTR_LAB_004c5452_1_00890f10);
    local_8 = 0;
    FUN_005d4e80(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,param_2);
    iVar1 = *(int *)(param_1 + 4);
    local_8 = 0xffffffff;
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar1 >> 2;
      FUN_005d5470(iVar1,*(undefined4 *)(param_1 + 8),param_1,param_2);
      FUN_005d1290(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2);
    }
    *(uint *)(param_1 + 0xc) = uVar4 * 4 + iVar3;
    *(int *)(param_1 + 8) = iVar3 + iVar5 * 4;
    *(int *)(param_1 + 4) = iVar3;
  }
  ExceptionList = local_10;
  return;
}

