/* speed.exe 00858330 FUN_00858330; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 008575b0 FUN_008575b0
 * calls EXTERNAL:00000056 EnterCriticalSection
 * calls EXTERNAL:00000011 GetTickCount
 */

int FUN_00858330(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if ((*(int *)(param_1 + 0xd0) != 4) && (*(int *)(param_1 + 0xd0) != 5)) {
    return -2;
  }
  iVar3 = *(int *)(param_1 + 0xf8);
  iVar1 = *(int *)(param_1 + 0xf4);
  if ((iVar3 + *(int *)(param_1 + 0xf0)) % iVar1 == *(int *)(param_1 + 0xfc)) {
    return 0;
  }
  if (param_3 == 0) {
    return (((iVar1 - *(int *)(param_1 + 0xfc)) + iVar3) % iVar1) / *(int *)(param_1 + 0xf0) + 1;
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0x104) + iVar3);
  *puVar5 = param_3;
  if (*(int *)(param_1 + 0xf0) + 0x800U < param_3 + 4) {
    return -6;
  }
  puVar6 = puVar5 + 4;
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(char *)puVar6 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  puVar5[2] = *(uint *)(param_1 + 0x108);
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  puVar5[3] = *(int *)(param_1 + 0xec) - 1;
  DVar2 = GetTickCount();
  puVar5[1] = DVar2;
  *(int *)(param_1 + 0xf8) =
       (*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf8)) % *(int *)(param_1 + 0xf4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1924));
  FUN_008575b0();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1924));
  iVar3 = (((*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xfc)) + *(int *)(param_1 + 0xf4)) %
          *(int *)(param_1 + 0xf4)) / *(int *)(param_1 + 0xf0);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}

