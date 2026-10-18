/* speed.exe 0064d7f0 FUN_0064d7f0; analysis pseudocode, not buildable source.
 * calls 007ece9e FUN_007ece9e
 */

void __thiscall FUN_0064d7f0(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x28) + iVar3 != iVar1) && (iVar3 != 0)) {
    FUN_007ece9e(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x34),iVar3,100);
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(int *)(param_1 + 0x30) < (int)(iVar3 + param_3)) && (iVar3 != 0)) {
    FUN_007ece9e(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x34),iVar3,100);
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  if (*(int *)(param_1 + 0x30) < (int)param_3) {
    FUN_007ece9e(*(undefined4 *)(param_1 + 0x14),iVar1,param_2,param_3,100);
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(int *)(param_1 + 0x28) = iVar1;
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c));
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x10) + param_3;
  *(int *)(param_1 + 0x10) = iVar3;
  if (*(int *)(param_1 + 0xc) < iVar3) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  return;
}

