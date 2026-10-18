/* speed.exe 005b1e80 FUN_005b1e80; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b1e80(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873ebb;
  local_c = ExceptionList;
  if (param_2 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar2 = _malloc((int)param_2 * 0xc);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      FUN_00404db0(puVar2,0xc,param_2,&LAB_005ad890);
      param_2 = puVar2;
    }
    uVar3 = uVar1;
    if (*(uint *)(param_1 + 0x84) < uVar1) {
      uVar3 = *(uint *)(param_1 + 0x84);
    }
    if (uVar3 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x88);
      puVar5 = param_2;
      for (uVar3 = uVar3 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_007c7250(*(int *)(param_1 + 0x88));
    }
    *(uint *)(param_1 + 0x84) = uVar1;
    *(undefined4 **)(param_1 + 0x88) = param_2;
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    ExceptionList = &local_c;
    thunk_FUN_007c7250(*(int *)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  ExceptionList = local_c;
  return;
}

