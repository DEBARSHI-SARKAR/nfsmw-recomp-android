/* speed.exe 005baa70 FUN_005baa70; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __thiscall FUN_005baa70(int param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087411b;
  local_c = ExceptionList;
  if (param_2 == (uint *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x24);
    if (pvVar1 != (void *)0x0) {
      ExceptionList = &local_c;
      _eh_vector_destructor_iterator_(pvVar1,0x1c,*(int *)((int)pvVar1 + -4),FUN_005ba980);
      thunk_FUN_007c7250((int)pvVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    ExceptionList = &local_c;
    puVar3 = _malloc((int)param_2 * 0x1c + 4);
    local_4 = 0;
    if (puVar3 == (uint *)0x0) {
      param_2 = (uint *)0x0;
    }
    else {
      *puVar3 = (uint)param_2;
      _eh_vector_constructor_iterator_
                (puVar3 + 1,0x1c,(int)param_2,(_func_void_void_ptr *)&LAB_005afa60,FUN_005ba980);
      param_2 = puVar3 + 1;
    }
    local_4 = 0xffffffff;
    local_10 = uVar2;
    if (*(uint *)(param_1 + 0x18) < uVar2) {
      local_10 = *(uint *)(param_1 + 0x18);
    }
    puVar3 = *(uint **)(param_1 + 0x24);
    puVar6 = param_2;
    for (uVar4 = local_10 * 0x1c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)puVar6 = (char)*puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    puVar7 = *(undefined4 **)(param_1 + 0x24);
    for (uVar4 = local_10 * 0x1c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    pvVar1 = *(void **)(param_1 + 0x24);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x1c,*(int *)((int)pvVar1 + -4),FUN_005ba980);
      thunk_FUN_007c7250((int)pvVar1 + -4);
    }
    *(uint **)(param_1 + 0x24) = param_2;
    *(uint *)(param_1 + 0x1c) = uVar2;
    *(uint *)(param_1 + 0x18) = local_10;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return;
}

