/* speed.exe 005ab070 FUN_005ab070; analysis pseudocode, not buildable source.
 * calls 004ccf20 FUN_004ccf20
 * calls 00594930 FUN_00594930
 * calls 005d0370 FUN_005d0370
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_005ab070(int param_1,uint param_2)

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
  puStack_c = &LAB_00873d40;
  local_10 = ExceptionList;
  uVar4 = param_2;
  ExceptionList = &local_10;
  if (0x3fffffff < param_2) {
    ExceptionList = &local_10;
    FUN_004ccf20();
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
    FUN_00594930(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,param_2);
    iVar1 = *(int *)(param_1 + 4);
    local_8 = 0xffffffff;
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar1 >> 2;
      FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,&PTR_LAB_004c5452_1_00890f10);
    }
    *(uint *)(param_1 + 0xc) = uVar4 * 4 + iVar3;
    *(int *)(param_1 + 8) = iVar3 + iVar5 * 4;
    *(int *)(param_1 + 4) = iVar3;
  }
  ExceptionList = local_10;
  return;
}

