/* speed.exe 00438810 FUN_00438810; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005d29d0 FUN_005d29d0
 * calls 00435a60 FUN_00435a60
 * calls 0041e220 FUN_0041e220
 */

void __thiscall FUN_00438810(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00868d00;
  local_10 = ExceptionList;
  uVar2 = param_2;
  ExceptionList = &local_10;
  if (0x7ffffff < param_2) {
    ExceptionList = &local_10;
    uVar2 = FUN_00435a60();
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 5;
  }
  if (uVar4 < uVar2) {
    iVar3 = FUN_005d29d0(uVar2 * 0x20,&PTR_LAB_004c5452_1_00890f10);
    local_8 = 0;
    FUN_0041e220(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,param_2);
    iVar1 = *(int *)(param_1 + 4);
    local_8 = 0xffffffff;
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar1 >> 5;
      FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 5) << 5,&PTR_LAB_004c5452_1_00890f10);
    }
    *(uint *)(param_1 + 0xc) = uVar2 * 0x20 + iVar3;
    *(int *)(param_1 + 8) = iVar5 * 0x20 + iVar3;
    *(int *)(param_1 + 4) = iVar3;
  }
  ExceptionList = local_10;
  return;
}

