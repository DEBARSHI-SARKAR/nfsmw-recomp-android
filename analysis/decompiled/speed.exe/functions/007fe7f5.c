/* speed.exe 007fe7f5 FUN_007fe7f5; analysis pseudocode, not buildable source.
 * calls 007fe49d FUN_007fe49d
 */

void FUN_007fe7f5(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = param_2;
  param_2 = (uint *)0x0;
  puVar4 = (undefined4 *)puVar1[6];
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x78) + param_3);
  if (0 < (int)puVar1[1]) {
    do {
      uVar3 = *puVar1;
      puVar5 = puVar4;
      puVar7 = puVar6;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar4 = (undefined4 *)((int)puVar4 + puVar1[2]);
      puVar6 = (undefined4 *)((int)puVar6 + *(int *)(param_1 + 0x98));
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)puVar1[1]);
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x7c) + param_3);
  puVar4 = (undefined4 *)puVar1[7];
  param_2 = (uint *)0x0;
  if (0 < (int)puVar1[4]) {
    do {
      uVar3 = puVar1[3];
      puVar5 = puVar4;
      puVar7 = puVar6;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar4 = (undefined4 *)((int)puVar4 + puVar1[5]);
      puVar6 = (undefined4 *)((int)puVar6 + *(int *)(param_1 + 0x9c));
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)puVar1[4]);
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x80) + param_3);
  puVar4 = (undefined4 *)puVar1[8];
  param_2 = (uint *)0x0;
  if (0 < (int)puVar1[4]) {
    do {
      uVar3 = puVar1[3];
      puVar5 = puVar4;
      puVar7 = puVar6;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar4 = (undefined4 *)((int)puVar4 + puVar1[5]);
      puVar6 = (undefined4 *)((int)puVar6 + *(int *)(param_1 + 0x9c));
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)puVar1[4]);
  }
  FUN_007fe49d(param_1,param_3);
  return;
}

