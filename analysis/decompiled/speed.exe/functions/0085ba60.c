/* speed.exe 0085ba60 FUN_0085ba60; analysis pseudocode, not buildable source.
 */

void FUN_0085ba60(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(uint *)(param_1 + 0x400) = param_3;
  uVar1 = param_3 >> 2;
  *(uint *)(param_1 + 0x488) = param_5;
  puVar2 = (undefined4 *)(param_1 + 0x404);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = (undefined4 *)(param_1 + 0x48c);
  for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}

