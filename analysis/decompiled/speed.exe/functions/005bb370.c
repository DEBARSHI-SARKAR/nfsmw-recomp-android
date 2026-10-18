/* speed.exe 005bb370 FUN_005bb370; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652ad0 _malloc
 * calls 005bb260 FUN_005bb260
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __thiscall FUN_005bb370(int param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087413b;
  local_c = ExceptionList;
  if (param_2 != (uint *)*(uint *)(param_1 + 0x10)) {
    if (param_2 == (uint *)0x0) {
      pvVar1 = *(void **)(param_1 + 0x14);
      if (pvVar1 != (void *)0x0) {
        ExceptionList = &local_c;
        _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_005b6dc0);
        thunk_FUN_007c7250((int)pvVar1 + -4);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    puVar3 = _malloc((int)param_2 * 0xc + 4);
    local_4 = 0;
    if (puVar3 == (uint *)0x0) {
      param_2 = (uint *)0x0;
    }
    else {
      *puVar3 = (uint)param_2;
      _eh_vector_constructor_iterator_
                (puVar3 + 1,0xc,(int)param_2,(_func_void_void_ptr *)&LAB_005ad650,FUN_005b6dc0);
      param_2 = puVar3 + 1;
    }
    local_4 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x10);
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        FUN_005bb260(*(int *)(param_1 + 0x14) + iVar5);
        iVar5 = iVar5 + 0xc;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    pvVar1 = *(void **)(param_1 + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_005b6dc0);
      thunk_FUN_007c7250((int)pvVar1 + -4);
    }
    *(uint **)(param_1 + 0x14) = param_2;
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

