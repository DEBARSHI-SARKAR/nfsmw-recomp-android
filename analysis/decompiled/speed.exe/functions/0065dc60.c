/* speed.exe 0065dc60 FUN_0065dc60; analysis pseudocode, not buildable source.
 * calls 0065cab0 FUN_0065cab0
 */

uint __thiscall FUN_0065dc60(int *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *local_4;
  
  if (param_1[2] == param_1[1]) {
    FUN_0065cab0(param_1[1]);
  }
  uVar7 = param_2 % (uint)param_1[1];
  uVar8 = 0;
  iVar9 = uVar7 * 0x10;
  iVar4 = iVar9;
  if (*(int *)(*param_1 + 8 + iVar9) != *param_1 + iVar9) {
    do {
      puVar1 = (uint *)(*param_1 + iVar4);
      if ((uint *)puVar1[2] == puVar1) {
        uVar5 = 0;
        local_4 = (uint *)0x0;
      }
      else {
        uVar5 = *puVar1;
        puVar1 = (uint *)puVar1[1];
        local_4 = puVar1;
      }
      if ((uVar5 == param_2) && (local_4 == param_3)) {
        return (uint)puVar1 & 0xffffff00;
      }
      uVar7 = (uVar7 + 1) % (uint)param_1[1];
      uVar8 = uVar8 + 1;
      iVar2 = *param_1 + uVar7 * 0x10;
      iVar4 = uVar7 * 0x10;
    } while (*(int *)(iVar2 + 8) != iVar2);
  }
  puVar1 = (uint *)(uVar7 * 0x10 + *param_1);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = (uint)param_3;
    puVar1[2] = param_4;
  }
  puVar3 = (undefined4 *)(*param_1 + iVar9 + 0xc);
  param_4 = uVar8;
  puVar6 = &param_4;
  if (uVar8 <= *(uint *)(*param_1 + iVar9 + 0xc)) {
    puVar6 = puVar3;
  }
  *puVar3 = *puVar6;
  if ((uint)param_1[3] >> 1 < uVar8) {
    param_1[3] = param_1[3] & 1U | uVar8 * 2;
  }
  iVar4 = param_1[2];
  param_1[2] = iVar4 + 1;
  return CONCAT31((int3)((uint)(iVar4 + 1) >> 8),1);
}

