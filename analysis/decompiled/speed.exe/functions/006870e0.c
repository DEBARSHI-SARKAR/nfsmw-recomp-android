/* speed.exe 006870e0 FUN_006870e0; analysis pseudocode, not buildable source.
 * calls 00682d70 FUN_00682d70
 * calls 00681e20 FUN_00681e20
 * calls 0066a7d0 FUN_0066a7d0
 */

int __thiscall FUN_006870e0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *extraout_ECX;
  uint local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ba1b;
  local_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &local_c;
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(int *)(param_2 + 4) + 8 + param_2;
  local_4 = 0;
  uVar5 = param_2 + 8;
  for (uVar2 = uVar5; uVar2 < uVar1; uVar2 = uVar2 + 8 + *(int *)(uVar2 + 4)) {
    iVar7 = iVar7 + 1;
  }
  FUN_00682d70(iVar7);
  if (uVar1 <= uVar5) {
    ExceptionList = local_c;
    return param_1;
  }
  do {
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar2 = *(uint *)(uVar5 + 0x17 & 0xfffffff0);
    iVar7 = *(int *)(param_1 + 0x14) - (int)puVar3 >> 3;
    while (iVar6 = iVar7, 0 < iVar6) {
      iVar7 = iVar6 / 2;
      if (puVar3[iVar7 * 2] < uVar2) {
        puVar3 = puVar3 + iVar7 * 2 + 2;
        iVar7 = iVar6 + (-1 - iVar7);
      }
    }
    if (((puVar3 == *(uint **)(param_1 + 0x14)) || (*puVar3 != uVar2)) || (puVar3[1] == 0)) {
      FUN_0066a7d0();
      local_14[0] = *extraout_ECX;
      iVar7 = *(int *)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x14) - iVar7 >> 3;
      while (iVar4 = iVar6, 0 < iVar4) {
        iVar6 = iVar4 / 2;
        if (*(uint *)(iVar7 + iVar6 * 8) <= local_14[0]) {
          iVar7 = iVar7 + 8 + iVar6 * 8;
          iVar6 = iVar4 + (-1 - iVar6);
        }
      }
      FUN_00681e20(iVar7,1,local_14);
    }
    uVar5 = uVar5 + 8 + *(int *)(uVar5 + 4);
  } while (uVar5 < uVar1);
  ExceptionList = local_c;
  return param_1;
}

