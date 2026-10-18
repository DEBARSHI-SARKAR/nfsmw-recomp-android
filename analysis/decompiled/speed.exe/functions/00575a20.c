/* speed.exe 00575a20 FUN_00575a20; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00575a20(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(uint *)(param_1 + 0x44) <= *(int *)(param_1 + 0x40) + (0x7fffffff - param_3) * 2) {
    *(uint *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) * 4) =
         *(int *)(param_1 + 0x3c) + *(uint *)(param_1 + 0x44);
    uVar1 = param_3 * 2;
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) * 4);
    for (uVar2 = (param_3 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined2 *)(uVar1 + *(int *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) * 4)) = 0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar1 + 2;
  }
  return;
}

