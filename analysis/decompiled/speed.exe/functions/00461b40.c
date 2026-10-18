/* speed.exe 00461b40 FUN_00461b40; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 */

void __thiscall FUN_00461b40(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = _malloc(param_2 * 0xc);
  if (*(undefined4 **)(param_1 + 0x15c) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0x15c);
    puVar5 = puVar1;
    for (uVar2 = *(int *)(param_1 + 0x154) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x15c));
    *(undefined4 **)(param_1 + 0x15c) = puVar1;
    *(int *)(param_1 + 0x158) = param_2;
    return;
  }
  *(int *)(param_1 + 0x158) = param_2;
  *(undefined4 **)(param_1 + 0x15c) = puVar1;
  return;
}

