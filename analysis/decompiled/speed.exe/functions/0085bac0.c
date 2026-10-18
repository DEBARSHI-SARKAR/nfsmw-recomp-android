/* speed.exe 0085bac0 FUN_0085bac0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 */

void FUN_0085bac0(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  DWORD DVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  DVar1 = GetTickCount();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    do {
      param_1[iVar5] = (DVar1 & 1 << ((byte)iVar5 & 0x1f)) != 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x400));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    do {
      bVar2 = param_1[iVar5];
      do {
        DVar1 = (DVar1 + 1) * 0x10dcd;
        bVar3 = bVar2 ^ (byte)DVar1;
        bVar2 = 0;
      } while (bVar3 == 0);
      param_1[iVar5] = bVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x400));
  }
  iVar5 = *(int *)(param_1 + 0x400);
  *param_1 = 0;
  param_1[1] = 2;
  uVar4 = param_3 >> 2;
  *(undefined1 *)((int)(param_1 + (iVar5 - param_3)) + -1) = 0;
  puVar6 = (undefined4 *)(param_1 + (iVar5 - param_3));
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return;
}

