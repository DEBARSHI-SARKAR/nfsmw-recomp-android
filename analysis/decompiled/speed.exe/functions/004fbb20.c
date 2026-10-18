/* speed.exe 004fbb20 FUN_004fbb20; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 * calls 006be570 FUN_006be570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fbb20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int local_48;
  int local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if ((((iVar1 != 0) && (param_2 != 0)) && (0 < param_3)) &&
     (local_40 = (int)*(short *)(iVar1 + 10), 0 < local_40)) {
    local_48 = 0;
    do {
      uVar2 = *(uint *)(*(int *)(iVar1 + 4) + 4 + local_48);
      puVar9 = (uint *)(*(int *)(iVar1 + 4) + local_48);
      uVar3 = *puVar9;
      iVar11 = 0;
      iVar8 = param_3 + -1;
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 0.0;
      iVar10 = -1;
      if (-1 < iVar8) {
        do {
          iVar6 = iVar10;
          if (iVar10 != -1) goto LAB_004fbc0c;
          iVar6 = (iVar8 + iVar11) / 2;
          uVar4 = **(uint **)(param_2 + iVar6 * 4);
          if (uVar3 < uVar4) {
            iVar8 = iVar6 + -1;
            iVar6 = iVar10;
          }
          else if (uVar4 < uVar3) {
            iVar11 = iVar6 + 1;
            iVar6 = iVar10;
          }
          iVar10 = iVar6;
        } while (iVar11 <= iVar8);
        if (iVar6 != -1) {
LAB_004fbc0c:
          if (0 < iVar6) {
            puVar7 = (undefined4 *)(param_2 + -4 + iVar6 * 4);
            do {
              if (*(uint *)*puVar7 != uVar3) break;
              iVar6 = iVar6 + -1;
              puVar7 = puVar7 + -1;
            } while (0 < iVar6);
          }
          while ((iVar6 < param_3 && (puVar5 = *(uint **)(param_2 + iVar6 * 4), *puVar5 == uVar3)))
          {
            if ((uVar2 & 1 << ((byte)puVar5[1] & 0x1f)) != 0) {
              local_20 = (float)(int)*(char *)((int)puVar5 + 5) * _DAT_00890bf0;
              local_1c = (float)(int)*(char *)((int)puVar5 + 6) * _DAT_00890bf0;
              local_18 = (float)(int)*(char *)((int)puVar5 + 7) * _DAT_00890bf0;
              FUN_0045f490(&local_20,&local_20);
              local_30 = local_30 + local_20;
              local_2c = local_2c + local_1c;
              local_28 = local_28 + local_18;
            }
            iVar6 = iVar6 + 1;
          }
          FUN_0045f490(&local_30,&local_30);
          FUN_006be570(puVar9[2],local_30,local_2c,local_28);
        }
      }
      local_48 = local_48 + 0xc;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}

