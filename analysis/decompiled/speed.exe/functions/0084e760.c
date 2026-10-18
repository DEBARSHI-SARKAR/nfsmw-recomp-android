/* speed.exe 0084e760 FUN_0084e760; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084e570 FUN_0084e570
 */

int FUN_0084e760(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 0x94) != 4) {
    return -2;
  }
  iVar4 = *(int *)(param_1 + 0xbc);
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar1 + iVar4) % iVar2 == *(int *)(param_1 + 200)) {
    return 0;
  }
  if (iVar4 + -8 < (int)param_3) {
    return -6;
  }
  if (param_3 == 0) {
    return (((iVar2 - *(int *)(param_1 + 200)) + iVar1) % iVar2) / iVar4 + 1;
  }
  pDVar6 = (DWORD *)(*(int *)(param_1 + 0xcc) + iVar1);
  *(short *)(pDVar6 + 1) = (short)param_3;
  puVar7 = (undefined4 *)((int)pDVar6 + 6);
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DVar3 = GetTickCount();
  *pDVar6 = DVar3;
  *(int *)(param_1 + 0xc4) =
       (*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)) % *(int *)(param_1 + 0xc0);
  FUN_0084e570(*(undefined4 *)(param_1 + 0x80),0,param_1);
  iVar4 = (((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 200)) + *(int *)(param_1 + 0xc4)) %
          *(int *)(param_1 + 0xc0)) / *(int *)(param_1 + 0xbc);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  return iVar4;
}

