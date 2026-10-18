/* speed.exe 00808e5b FUN_00808e5b; analysis pseudocode, not buildable source.
 */

void FUN_00808e5b(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_5;
  puVar6 = param_1;
  param_1 = param_2;
  puVar5 = puVar6;
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (1 < (int)(param_4 + -1)) {
    pbVar4 = (byte *)((int)puVar6 + param_5);
    puVar5 = puVar6;
    param_5 = param_4 + -2;
    do {
      param_1 = (undefined4 *)((int)param_1 + iVar1);
      puVar6 = (undefined4 *)((int)puVar5 + iVar1);
      pbVar4 = pbVar4 + iVar1;
      if (0 < (int)param_3) {
        param_4 = param_3;
        pbVar2 = pbVar4;
        do {
          pbVar2[(int)param_1 - (int)pbVar4] =
               (byte)(pbVar2[(int)puVar5 - (int)pbVar4] + 2 +
                      (uint)pbVar2[(int)puVar6 - (int)pbVar4] * 2 + (uint)*pbVar2 >> 2);
          pbVar2 = pbVar2 + 1;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
      param_5 = param_5 + -1;
      puVar5 = puVar6;
    } while (param_5 != 0);
  }
  puVar6 = (undefined4 *)((int)puVar6 + iVar1);
  puVar5 = (undefined4 *)(iVar1 + (int)param_1);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}

