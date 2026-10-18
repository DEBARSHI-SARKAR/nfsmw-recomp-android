/* speed.exe 0073b010 FUN_0073b010; analysis pseudocode, not buildable source.
 * calls 006beb80 FUN_006beb80
 * calls 006bed80 FUN_006bed80
 * calls 0073ae60 FUN_0073ae60
 * calls 006bedb0 FUN_006bedb0
 */

/* WARNING: Removing unreachable block (ram,0x0073b256) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0073b010(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 local_44;
  float local_3c;
  float local_38;
  int local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar8 = param_1[1];
  local_28 = param_1 + 2;
  iVar6 = *param_1;
  local_30 = (undefined4 *)param_1[0x13];
  local_2c = param_1 + 6;
  if ((iVar6 == 0) || (*(char *)(iVar6 + 0x4a) != ' ')) {
    return 0;
  }
  local_24 = iVar6;
  piVar4 = (int *)FUN_006bed80(1);
  sVar1 = *(short *)(iVar6 + 0x44);
  local_3c = (float)(int)*(short *)(iVar6 + 0x46);
  if (DAT_009b0a18 == 0) {
    puVar11 = &DAT_009af288;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_20 = (int *)0xbf0000ff;
    local_1c = -0x40ff0100;
    local_18 = 0xbfff0000;
    local_14 = 0xbfff00ff;
    if (piVar4 < piVar4 + (int)local_3c * (int)sVar1) {
      param_1 = (int *)0x0;
      piVar7 = piVar4;
      do {
        iVar6 = 0;
        do {
          if ((int *)*piVar7 == (&local_20)[iVar6]) {
            iVar2 = (&DAT_009b0a1c)[iVar6];
            (&DAT_009af288)[iVar6 * 0x10 + iVar2] = (int)param_1 >> 2;
            (&DAT_009b0a1c)[iVar6] = iVar2 + 1;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 4);
        piVar7 = piVar7 + 1;
        param_1 = (int *)((int)param_1 + 4);
      } while (piVar7 < piVar4 + (int)local_3c * (int)sVar1);
    }
    DAT_009b0a18 = 1;
  }
  local_44._2_1_ = (undefined1)((uint)iVar8 >> 0x10);
  param_1 = (int *)CONCAT31((int3)((uint)iVar8 >> 8),local_44._2_1_);
  uVar3 = param_1;
  local_34 = (int)local_3c * (int)sVar1;
  param_1._3_1_ = (undefined1)((uint)iVar8 >> 0x18);
  param_1._0_3_ = CONCAT12((char)iVar8,(short)uVar3);
  if (piVar4 < piVar4 + local_34) {
    piVar7 = piVar4;
    for (iVar8 = ((uint)((int)(piVar4 + local_34) + (-1 - (int)piVar4)) >> 2) + 1; iVar8 != 0;
        iVar8 = iVar8 + -1) {
      *piVar7 = (int)param_1;
      piVar7 = piVar7 + 1;
    }
  }
  if (0 < (int)local_30) {
    local_44 = local_30;
    piVar7 = local_2c;
    do {
      if (*piVar7 != 0) {
        piVar9 = piVar7 + 9;
        if (piVar7[8] != 0) {
          iVar8 = 4;
          do {
            iVar6 = FUN_006beb80(piVar9);
            *piVar9 = iVar6;
            piVar9 = piVar9 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        puVar11 = (undefined4 *)piVar7[3];
        local_30 = puVar11 + local_34;
        iVar8 = piVar7[5];
        piVar9 = piVar4;
        if (puVar11 < local_30) {
          do {
            piVar5 = (int *)*puVar11;
            piVar10 = (int *)(uint)*(byte *)(iVar8 + 1);
            local_2c = piVar5;
            if ((piVar7[8] != 0) && (piVar10 != (int *)0x0)) {
              local_2c = (int *)((uint)piVar5 & 0xff);
              local_10 = (float)((uint)piVar5 >> 0x10 & 0xff) * _DAT_00899dd0;
              local_c = (float)((uint)piVar5 >> 8 & 0xff) * _DAT_00899dd0;
              local_8 = (float)(int)local_2c * _DAT_00899dd0;
              local_4 = 0;
              piVar5 = (int *)FUN_0073ae60(piVar7 + 9,&local_10,3,1);
            }
            if (piVar10 < (int *)0x80) {
              if (piVar10 != (int *)0x0) {
                local_1c = *piVar9;
                local_3c = (float)(int)piVar10 * _DAT_008a7a5c;
                local_38 = _DAT_0089096c - local_3c;
                if (_DAT_0089096c < local_3c) {
                  local_3c = 1.0;
                }
                if (local_38 < _DAT_00890968) {
                  local_38 = 0.0;
                }
                local_2c = piVar10;
                local_20 = piVar5;
                piVar5 = (int *)FUN_0073ae60(&local_20,&local_3c,2,0);
                goto LAB_0073b2be;
              }
            }
            else {
LAB_0073b2be:
              *piVar9 = (int)piVar5;
            }
            puVar11 = puVar11 + 1;
            iVar8 = iVar8 + 4;
            piVar9 = piVar9 + 1;
          } while (puVar11 < local_30);
        }
      }
      piVar7 = piVar7 + 0xd;
      local_44 = (undefined4 *)((int)local_44 - 1);
    } while (local_44 != (undefined4 *)0x0);
  }
  param_1 = &DAT_009af288;
  iVar8 = (int)&DAT_009b0a1c - (int)local_28;
  piVar7 = local_28;
  do {
    iVar6 = FUN_006beb80(piVar7);
    *piVar7 = iVar6;
    iVar6 = 0;
    piVar9 = param_1;
    if (0 < *(int *)(iVar8 + (int)piVar7)) {
      do {
        piVar4[*piVar9] = *piVar7;
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar6 < *(int *)(iVar8 + (int)piVar7));
    }
    param_1 = param_1 + 0x10;
    piVar7 = piVar7 + 1;
  } while ((int)param_1 < 0x9af388);
  FUN_006bedb0(piVar4);
  return 1;
}

