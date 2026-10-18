/* speed.exe 005ba7e0 FUN_005ba7e0; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 00652ad0 _malloc
 * calls 005af890 FUN_005af890
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005af940 FUN_005af940
 */

void __thiscall FUN_005ba7e0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008740fb;
  local_c = ExceptionList;
  uVar6 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 100) != 0) {
      ExceptionList = &local_c;
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_005af940();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  puVar1 = _malloc(param_2 * 0xc);
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar3 != 0) {
    uVar6 = uVar3;
    if (param_2 <= uVar3) {
      uVar6 = param_2;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x7c);
    puVar7 = puVar1;
    for (uVar3 = uVar6 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x7c));
  }
  puVar2 = puVar1 + uVar6 * 3;
  for (uVar3 = (param_2 - uVar6) * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar4 = *(int *)(param_1 + 0x60) * param_2;
  local_14 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    puVar2 = _malloc(iVar4 * 0x30);
    local_4 = 0;
    local_14 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00404db0(puVar2,0x30,iVar4,&LAB_005ada60);
      local_14 = puVar2;
    }
    if (*(undefined4 **)(param_1 + 0x90) == (undefined4 *)0x0) {
      FUN_005af890(local_14,iVar4);
    }
    else {
      uVar5 = *(int *)(param_1 + 0x60) * uVar6;
      puVar2 = *(undefined4 **)(param_1 + 0x90);
      puVar7 = local_14;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_005af890(local_14 + *(int *)(param_1 + 0x60) * uVar6 * 0xc,
                   *(int *)(param_1 + 0x60) * (param_2 - uVar6));
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x90));
    }
  }
  *(uint *)(param_1 + 100) = param_2;
  *(undefined4 **)(param_1 + 0x7c) = puVar1;
  *(undefined4 **)(param_1 + 0x90) = local_14;
  ExceptionList = local_c;
  return;
}

