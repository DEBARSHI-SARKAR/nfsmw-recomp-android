/* speed.exe 005b6f20 FUN_005b6f20; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b6f20(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != 0) {
    if (param_2 != *(uint *)(param_1 + 4)) {
      puVar1 = _malloc(param_2 * 4);
      uVar2 = *(uint *)(param_1 + 4);
      if (param_2 < uVar2) {
        puVar4 = *(undefined4 **)(param_1 + 0xc);
        puVar5 = puVar1;
        for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      else {
        puVar4 = *(undefined4 **)(param_1 + 0xc);
        puVar5 = puVar1;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 **)(param_1 + 0xc) = puVar1;
    }
    *(uint *)(param_1 + 4) = param_2;
    return;
  }
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

