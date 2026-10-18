/* speed.exe 00705d50 FUN_00705d50; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00705d50(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar7 = param_2;
  if ((param_2 == param_3) && (uVar7 = param_3, *(int *)(param_3 * 0x10 + 0xc + *param_1) == 0)) {
    uVar9 = param_1[1];
    uVar4 = (uint)param_1[3] >> 1;
    uVar7 = ((uVar9 - uVar4) + param_3) % uVar9;
    if (*(uint *)(uVar7 * 0x10 + 0xc + *param_1) < uVar4) {
      do {
        bVar10 = true;
        if (uVar4 == 0) goto LAB_00705e3c;
        uVar7 = (uVar7 + 1) % uVar9;
        uVar4 = uVar4 - 1;
      } while (*(uint *)(uVar7 * 0x10 + 0xc + *param_1) < uVar4);
    }
    bVar10 = uVar4 == 0;
LAB_00705e3c:
    if (bVar10) {
      return 0xffffffff;
    }
  }
  iVar1 = *param_1;
  uVar9 = *(uint *)(uVar7 * 0x10 + 0xc + iVar1);
  uVar4 = (uVar7 + uVar9) % (uint)param_1[1];
  if (param_3 != uVar4) {
    puVar2 = (undefined4 *)(uVar4 * 0x10 + iVar1);
    puVar5 = (undefined4 *)(param_3 * 0x10 + iVar1);
    *puVar5 = *puVar2;
    puVar5[1] = puVar2[1];
    puVar5[2] = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar2;
  }
  uVar8 = 1;
  param_2 = 0;
  if (1 < uVar9) {
    do {
      puVar6 = (uint *)(((uVar8 + uVar7) % (uint)param_1[1]) * 0x10 + *param_1);
      if ((uint *)puVar6[2] == puVar6) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar6;
      }
      if (uVar3 % (uint)param_1[1] == uVar7) {
        param_2 = uVar8;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  *(uint *)(uVar7 * 0x10 + 0xc + *param_1) = param_2;
  uVar7 = (uint)param_1[3] >> 1;
  if ((((uVar9 == uVar7) && (*(uint *)(param_3 * 0x10 + 0xc + *param_1) < uVar7)) &&
      (param_2 < uVar9)) && (param_1[3] = param_1[3] & 1, param_1[1] != 0)) {
    puVar6 = (uint *)(*param_1 + 0xc);
    uVar9 = 0;
    do {
      uVar8 = (uint)param_1[3] >> 1;
      if (uVar7 <= uVar8) {
        return uVar4;
      }
      if (uVar8 < *puVar6) {
        param_1[3] = *puVar6 * 2 | param_1[3] & 1U;
      }
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar9 < (uint)param_1[1]);
  }
  return uVar4;
}

