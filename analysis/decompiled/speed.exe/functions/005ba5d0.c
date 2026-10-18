/* speed.exe 005ba5d0 FUN_005ba5d0; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 00652ad0 _malloc
 * calls 005af890 FUN_005af890
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005af940 FUN_005af940
 */

void __thiscall FUN_005ba5d0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_28;
  undefined4 *local_24;
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008740db;
  local_c = ExceptionList;
  uVar5 = 0;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    puVar1 = _malloc(param_2 * 0xc);
    uVar2 = *(uint *)(param_1 + 0x60);
    if (uVar2 != 0) {
      uVar5 = uVar2;
      if (param_2 <= uVar2) {
        uVar5 = param_2;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x78);
      puVar6 = puVar1;
      for (uVar2 = uVar5 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x78));
    }
    puVar4 = puVar1 + uVar5 * 3;
    for (uVar2 = (param_2 - uVar5) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar3 = *(int *)(param_1 + 100) * param_2;
    local_18 = (undefined4 *)0x0;
    if (iVar3 != 0) {
      local_18 = _malloc(iVar3 * 0x30);
      local_4 = 0;
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        FUN_00404db0(local_18,0x30,iVar3,&LAB_005ada60);
      }
      if (*(int *)(param_1 + 0x90) == 0) {
        FUN_005af890(local_18,iVar3);
      }
      else {
        local_28 = 0;
        if (*(int *)(param_1 + 100) != 0) {
          puVar4 = local_18 + uVar5 * 0xc;
          local_24 = local_18;
          do {
            puVar6 = (undefined4 *)
                     (*(int *)(param_1 + 0x60) * local_28 * 0x30 + *(int *)(param_1 + 0x90));
            puVar7 = local_24;
            for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_005af890(puVar4,param_2 - uVar5);
            local_24 = local_24 + param_2 * 0xc;
            puVar4 = puVar4 + param_2 * 0xc;
            local_28 = local_28 + 1;
          } while (local_28 < *(uint *)(param_1 + 100));
        }
        thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x90));
      }
    }
    *(uint *)(param_1 + 0x60) = param_2;
    *(undefined4 **)(param_1 + 0x90) = local_18;
    *(undefined4 **)(param_1 + 0x78) = puVar1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x60) != 0) {
    ExceptionList = &local_c;
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  FUN_005af940();
  ExceptionList = local_c;
  return;
}

