/* speed.exe 0084e860 FUN_0084e860; analysis pseudocode, not buildable source.
 */

int FUN_0084e860(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xa8)) {
    return -7;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac));
  uVar3 = (int)*(short *)(puVar1 + 1);
  if ((int)param_3 <= (int)*(short *)(puVar1 + 1)) {
    uVar3 = param_3;
  }
  puVar4 = (undefined4 *)((int)puVar1 + 6);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *puVar1;
  }
  return (int)*(short *)(puVar1 + 1);
}

