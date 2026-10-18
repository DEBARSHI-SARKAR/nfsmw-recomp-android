/* speed.exe 0084f6d0 FUN_0084f6d0; analysis pseudocode, not buildable source.
 */

uint FUN_0084f6d0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == *(int *)(param_1 + 0xa8)) {
    return 0xfffffff9;
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb0) + iVar1);
  uVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 4 + iVar1) - 1;
  if ((int)uVar2 < (int)param_3) {
    param_3 = uVar2;
  }
  puVar5 = (undefined4 *)((int)puVar4 + 9);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *puVar4;
  }
  return uVar2;
}

