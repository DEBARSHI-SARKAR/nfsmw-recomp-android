/* speed.exe 0045b300 FUN_0045b300; analysis pseudocode, not buildable source.
 * calls 0045b450 FUN_0045b450
 * calls 0045b420 FUN_0045b420
 * calls 005d29d0 FUN_005d29d0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_0045b300(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00869f20;
  local_10 = ExceptionList;
  if (param_2 < 0x40000000) {
    iVar4 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
    }
    if (uVar2 < param_2) {
      ExceptionList = &local_10;
      iVar3 = FUN_005d29d0(param_2 * 4,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      FUN_0045b420(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,param_2);
      iVar1 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1 + 8) - iVar1 >> 2;
        FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,&PTR_LAB_004c5452_1_00890f10)
        ;
      }
      *(int *)(param_1 + 4) = iVar3;
      *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar3;
      *(int *)(param_1 + 8) = iVar3 + iVar4 * 4;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0045b450();
  }
  ExceptionList = local_10;
  return;
}

