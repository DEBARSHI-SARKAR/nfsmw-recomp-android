/* speed.exe 005b2c50 FUN_005b2c50; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b2c50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(size_t *)(param_1 + 0x18) != 0) {
    puVar1 = _malloc(*(size_t *)(param_1 + 0x18));
    uVar3 = *(uint *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x20) = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return;
}

