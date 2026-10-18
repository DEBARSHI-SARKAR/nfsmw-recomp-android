/* speed.exe 00456480 FUN_00456480; analysis pseudocode, not buildable source.
 * calls 00454e70 FUN_00454e70
 */

uint __thiscall FUN_00456480(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (param_1[2] == param_1[1]) {
    FUN_00454e70(((param_1[1] * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  uVar7 = param_2 % (uint)param_1[1];
  uVar9 = 0;
  iVar8 = uVar7 * 0xc;
  iVar5 = iVar8;
  if (*(int *)(*param_1 + 4 + iVar8) != *param_1 + iVar8) {
    do {
      puVar1 = (uint *)(*param_1 + iVar5);
      if ((uint *)puVar1[1] == puVar1) {
        uVar2 = 0;
      }
      else {
        uVar2 = *puVar1;
      }
      if (uVar2 == param_2) {
        return uVar2 & 0xffffff00;
      }
      uVar7 = (uVar7 + 1) % (uint)param_1[1];
      uVar9 = uVar9 + 1;
      iVar3 = *param_1 + uVar7 * 0xc;
      iVar5 = uVar7 * 0xc;
    } while (*(int *)(iVar3 + 4) != iVar3);
  }
  puVar1 = (uint *)(*param_1 + uVar7 * 0xc);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  puVar4 = (undefined4 *)(*param_1 + iVar8 + 8);
  param_2 = uVar9;
  puVar6 = &param_2;
  if (uVar9 <= *(uint *)(*param_1 + iVar8 + 8)) {
    puVar6 = puVar4;
  }
  *puVar4 = *puVar6;
  if ((uint)param_1[3] >> 1 < uVar9) {
    param_1[3] = param_1[3] & 1U | uVar9 * 2;
  }
  iVar5 = param_1[2];
  param_1[2] = iVar5 + 1;
  return CONCAT31((int3)((uint)(iVar5 + 1) >> 8),1);
}

