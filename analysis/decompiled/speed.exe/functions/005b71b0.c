/* speed.exe 005b71b0 FUN_005b71b0; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652ad0 _malloc
 * calls 005b6f20 FUN_005b6f20
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __fastcall FUN_005b71b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00873eeb;
  local_c = ExceptionList;
  iVar4 = 0;
  local_20 = &PTR_FUN_008a2c68;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = &PTR_FUN_008a2c70;
  pvVar1 = *(void **)(param_1 + 0x70);
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (pvVar1,0x10,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_005ad810);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_005b1560(&local_20);
  iVar2 = local_14;
  *(int *)(param_1 + 0x6c) = local_14;
  piVar3 = _malloc(local_14 * 0x10 + 4);
  local_4 = 2;
  if (piVar3 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar3 + 1;
    *piVar3 = iVar2;
    _eh_vector_constructor_iterator_
              (piVar5,0x10,iVar2,(_func_void_void_ptr *)&LAB_005ad800,
               (_func_void_void_ptr *)&LAB_005ad810);
  }
  *(int **)(param_1 + 0x70) = piVar5;
  uVar6 = 0;
  _local_4 = CONCAT31(uStack_3,1);
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x70)) = *(undefined4 *)(local_1c + uVar6 * 4);
      FUN_005b6f20(*(undefined4 *)(local_18 + uVar6 * 4));
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < *(uint *)(param_1 + 0x6c));
  }
  local_28 = *(undefined4 *)(param_1 + 0x70);
  local_24 = *(undefined4 *)(param_1 + 0x6c);
  FUN_005b1560(&local_2c);
  local_2c = &PTR_LAB_0089b064;
  local_20 = &PTR_FUN_008a2c68;
  thunk_FUN_007c7250(local_1c);
  thunk_FUN_007c7250(local_18);
  ExceptionList = local_c;
  return;
}

