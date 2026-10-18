/* speed.exe 008511b0 FUN_008511b0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 008505e0 FUN_008505e0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084fd30 FUN_0084fd30
 * calls 0084fef0 FUN_0084fef0
 */

int FUN_008511b0(int param_1,uint *param_2,uint param_3,byte param_4)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (*(int *)(param_1 + 0x94) != 4) {
    return -2;
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  iVar5 = *(int *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xc4);
  if ((iVar5 + iVar3) % iVar1 == *(int *)(param_1 + 0xcc)) {
    return 0;
  }
  if (iVar3 + -0x10 < (int)param_3) {
    return -6;
  }
  if (param_3 == 0) {
    return (((iVar1 - *(int *)(param_1 + 0xcc)) + iVar5) % iVar1) / iVar3 + 1;
  }
  puVar6 = (uint *)(*(int *)(param_1 + 0xd4) + iVar5);
  uVar4 = param_3 >> 2;
  *puVar6 = param_3;
  puVar7 = puVar6 + 4;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(char *)puVar7 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  DVar2 = GetTickCount();
  puVar6[1] = DVar2;
  if ((param_4 & 1) != 0) {
    FUN_0084bd60(&DAT_009c3cd8);
    puVar6[2] = *(uint *)(param_1 + 0xdc);
    puVar6[3] = *(int *)(param_1 + 0xb0) - 1;
    FUN_0084fd30();
    uVar4 = *(int *)(param_1 + 0xdc) + 1;
    *(uint *)(param_1 + 0xdc) = uVar4;
    if (0xff < uVar4) {
      *(undefined4 *)(param_1 + 0xdc) = 0x80;
    }
    FUN_0084bdf0(&DAT_009c3cd8);
    return 1;
  }
  puVar6[2] = *(uint *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  puVar6[3] = *(int *)(param_1 + 0xb0) - 1;
  iVar3 = *(int *)(param_1 + 0xc4);
  iVar5 = (*(int *)(param_1 + 200) + *(int *)(param_1 + 0xc0)) % iVar3;
  *(int *)(param_1 + 200) = iVar5;
  iVar3 = (((iVar5 - *(int *)(param_1 + 0xcc)) + iVar3) % iVar3) / *(int *)(param_1 + 0xc0);
  if (iVar3 < 0x10) {
    FUN_0084bd60(&DAT_009c3cd8);
    FUN_0084fef0();
    if (DAT_009c3880 != 0) {
      DVar2 = GetTickCount();
      do {
        iVar5 = FUN_008505e0(DVar2);
      } while (0 < iVar5);
      DAT_009c3880 = 0;
    }
    FUN_0084bdf0(&DAT_009c3cd8);
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}

