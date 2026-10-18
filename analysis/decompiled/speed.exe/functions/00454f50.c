/* speed.exe 00454f50 FUN_00454f50; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00454f50(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = param_3;
  if ((param_2 == param_3) && (param_2 = param_3, *(int *)(*param_1 + 8 + param_3 * 0xc) == 0)) {
    uVar6 = param_1[1];
    uVar5 = (uint)param_1[3] >> 1;
    param_2 = ((uVar6 - uVar5) + param_3) % uVar6;
    if (*(uint *)(*param_1 + 8 + param_2 * 0xc) < uVar5) {
      do {
        bVar10 = true;
        if (uVar5 == 0) goto LAB_0045502b;
        param_2 = (param_2 + 1) % uVar6;
        uVar5 = uVar5 - 1;
      } while (*(uint *)(*param_1 + 8 + param_2 * 0xc) < uVar5);
    }
    bVar10 = uVar5 == 0;
LAB_0045502b:
    if (bVar10) {
      return 0xffffffff;
    }
  }
  iVar3 = *param_1;
  uVar6 = *(uint *)(param_2 * 0xc + 8 + iVar3);
  uVar5 = (uVar6 + param_2) % (uint)param_1[1];
  if (param_3 != uVar5) {
    puVar1 = (undefined4 *)(iVar3 + uVar5 * 0xc);
    puVar2 = (undefined4 *)(iVar3 + param_3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = puVar1;
  }
  uVar8 = 1;
  param_3 = 0;
  if (1 < uVar6) {
    do {
      puVar7 = (uint *)(*param_1 + ((uVar8 + param_2) % (uint)param_1[1]) * 0xc);
      if ((uint *)puVar7[1] == puVar7) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar7;
      }
      if (uVar4 % (uint)param_1[1] == param_2) {
        param_3 = uVar8;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  *(uint *)(param_2 * 0xc + 8 + *param_1) = param_3;
  uVar8 = (uint)param_1[3] >> 1;
  if (((uVar6 == uVar8) && (*(uint *)(*param_1 + 8 + uVar9 * 0xc) < uVar8)) && (param_3 < uVar6)) {
    param_1[3] = param_1[3] & 1;
    uVar9 = 0;
    if (param_1[1] != 0) {
      puVar7 = (uint *)(*param_1 + 8);
      do {
        uVar6 = (uint)param_1[3] >> 1;
        if (uVar8 <= uVar6) {
          return uVar5;
        }
        if (uVar6 < *puVar7) {
          param_1[3] = *puVar7 * 2 | param_1[3] & 1U;
        }
        uVar9 = uVar9 + 1;
        puVar7 = puVar7 + 3;
      } while (uVar9 < (uint)param_1[1]);
    }
  }
  return uVar5;
}

