/* speed.exe 005b88f0 FUN_005b88f0; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __fastcall FUN_005b88f0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined **local_1c;
  int local_18;
  undefined **local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873fbb;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 0xac);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (pvVar1,0x10,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&DAT_005b1ab0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  local_1c = &PTR_FUN_008a2cd8;
  local_4 = 0;
  local_18 = 0;
  FUN_005b1560(&local_1c);
  iVar2 = local_18;
  if (0 < local_18) {
    piVar3 = _malloc(local_18 * 0x10 + 4);
    local_4._0_1_ = 1;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar2;
      _eh_vector_constructor_iterator_
                (piVar4,0x10,iVar2,(_func_void_void_ptr *)&LAB_005b1a90,
                 (_func_void_void_ptr *)&DAT_005b1ab0);
    }
    *(int **)(param_1 + 0xac) = piVar4;
    local_14 = &PTR_FUN_008a2ce0;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_10 = param_1;
    FUN_005b1560(&local_14);
  }
  ExceptionList = local_c;
  return;
}

