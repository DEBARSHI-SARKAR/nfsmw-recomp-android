/* speed.exe 006e3ee0 FUN_006e3ee0; analysis pseudocode, not buildable source.
 * calls 00454640 FUN_00454640
 * calls 006e19d0 FUN_006e19d0
 * calls 006e3a00 FUN_006e3a00
 * calls 006be360 FUN_006be360
 * calls 006c5760 FUN_006c5760
 * calls 006cf230 FUN_006cf230
 * calls 0045a430 FUN_0045a430
 */

undefined4 __thiscall FUN_006e3ee0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int **local_70;
  int *local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  int *local_44;
  undefined1 local_40 [28];
  int *local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e6d0;
  local_c = ExceptionList;
  piVar9 = (int *)(param_2 + 8);
  local_44 = (int *)(*(int *)(param_2 + 4) + 8 + param_2);
  puVar7 = (undefined4 *)0x0;
  param_2 = 0;
  if (piVar9 < local_44) {
    local_54 = 0;
    ExceptionList = &local_c;
    local_50 = param_1;
    do {
      iVar6 = 0;
      iVar3 = *piVar9;
      if (iVar3 == 0x134900) {
        puVar7 = (undefined4 *)((int)piVar9 + 0x17U & 0xfffffff0);
        puVar7[8] = 0;
        *local_50 = puVar7;
        *DAT_00987af4 = puVar7;
        puVar8 = puVar7;
        puVar7[1] = DAT_00987af4;
        DAT_00987af4 = puVar8;
        *puVar7 = &DAT_00987af0;
      }
      else if (iVar3 == 0x134b02) {
        puVar7 = (undefined4 *)*local_50;
        puVar7[5] = (int)piVar9 + 0x17U & 0xfffffff0;
        iVar3 = 0;
        if (0 < (int)puVar7[4]) {
          do {
            *(undefined4 *)(puVar7[5] + iVar6 + 0x34) =
                 (&DAT_0093de78)[*(int *)(puVar7[5] + 0x30 + iVar6)];
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 0x68;
          } while (iVar3 < (int)puVar7[4]);
        }
      }
      else {
        local_5c = piVar9;
        if (iVar3 == 0x134b03) {
          puVar7 = (undefined4 *)*local_50;
          puVar8 = (undefined4 *)((int)piVar9 + 0x17U & 0xfffffff0);
          puVar7[9] = puVar8;
          if (puVar7[0xb] == 0) {
            puVar7[10] = 0;
            puVar7[9] = 0;
          }
          else {
            local_70 = (int **)0x0;
            puVar11 = puVar7 + 10;
            puVar10 = (undefined4 *)0x65;
            (**(code **)(*DAT_00982bdc + 0x6c))(DAT_00982bdc,puVar7[0xb] * 2,0,0x65,1,puVar11);
            (**(code **)(*(int *)*puVar11 + 0x2c))((int *)*puVar11,0,0,&stack0xffffff98,0);
            uVar5 = puVar7[0xb];
            for (uVar4 = (uVar5 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (iVar3 = (uVar5 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            (**(code **)(*(int *)*puVar11 + 0x30))((int *)*puVar11);
            piVar9 = local_5c;
          }
        }
        else if (iVar3 == 0x134b01) {
          puVar7 = (undefined4 *)*local_50;
          iVar3 = (piVar9[1] - ((int)piVar9 + 0x87U & 0xffffff80)) + 8 + (int)piVar9;
          if (iVar3 != 0) {
            iVar6 = param_2 * 0x68 + puVar7[5];
            *(uint *)(iVar6 + 0x4c) = (int)piVar9 + 0x87U & 0xffffff80;
            *(int *)(iVar6 + 0x50) = iVar3;
            if ((DAT_00982a90 == '\0') || (*(char *)(puVar7 + 3) < '\0')) {
              local_70 = (int **)0x0;
              puVar11 = (undefined4 *)0x1;
              (**(code **)(*DAT_00982bdc + 0x68))
                        (DAT_00982bdc,iVar3,8,0,1,(undefined4 *)(iVar6 + 0x54));
              *(uint *)(iVar6 + 0x58) =
                   *(uint *)(iVar6 + 0x50) / *(uint *)(*(int *)(iVar6 + 0x34) + 8);
              piVar9 = *(int **)(iVar6 + 0x54);
              (**(code **)(*piVar9 + 0x2c))(piVar9,0,0,&stack0xffffff9c,0);
              uVar5 = *(uint *)(iVar6 + 0x50);
              puVar8 = *(undefined4 **)(iVar6 + 0x4c);
              for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar11 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              (**(code **)(**(int **)(iVar6 + 0x54) + 0x30))(*(int **)(iVar6 + 0x54));
              param_2 = param_2 + 1;
              piVar9 = local_5c;
              if (param_2 < (int)puVar7[4]) {
                iVar3 = param_2 * 0x68;
                do {
                  iVar1 = iVar3 + puVar7[5];
                  if (*(int *)(iVar1 + 0x30) != *(int *)(iVar3 + -0x38 + puVar7[5])) break;
                  *(undefined4 *)(iVar1 + 0x4c) = 0;
                  *(undefined4 *)(iVar1 + 0x50) = 0;
                  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
                  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
                  param_2 = param_2 + 1;
                  iVar3 = iVar3 + 0x68;
                } while (param_2 < (int)puVar7[4]);
              }
            }
            else {
              if (puVar7[8] == 0) {
                puVar7[8] = 1;
              }
              param_2 = param_2 + 1;
              if (param_2 < (int)puVar7[4]) {
                iVar3 = param_2 * 0x68;
                do {
                  iVar1 = iVar3 + puVar7[5];
                  if (*(int *)(iVar1 + 0x30) != *(int *)(iVar3 + -0x38 + puVar7[5])) break;
                  *(undefined4 *)(iVar1 + 0x4c) = 0;
                  *(undefined4 *)(iVar1 + 0x50) = 0;
                  *(undefined4 *)(iVar1 + 0x54) = 0;
                  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
                  param_2 = param_2 + 1;
                  iVar3 = iVar3 + 0x68;
                } while (param_2 < (int)puVar7[4]);
              }
            }
          }
        }
        else if (iVar3 == 0x134c02) {
          iVar3 = puVar7[5] + local_54;
          local_54 = local_54 + 0x68;
          local_70 = (int **)(piVar9 + 2);
          *(int ***)(iVar3 + 0x60) = local_70;
          piVar2 = (int *)FUN_00454640();
          local_70 = &local_5c;
          local_5c = piVar2;
          FUN_006e19d0(&local_58);
          if (local_58 == DAT_009877c4) {
            local_70 = (int **)0x0;
            local_70 = (int **)FUN_006cf230(piVar2,0);
            local_4 = 0;
            local_24[0] = piVar2;
            FUN_006be360();
            local_70 = local_24;
            local_4._0_1_ = 1;
            piVar2 = (int *)FUN_006e3a00(local_40);
            local_58 = *piVar2;
            local_4 = (uint)local_4._1_3_ << 8;
            local_70 = (int **)0x6e4263;
            FUN_0045a430();
            local_4 = 0xffffffff;
            local_70 = (int **)0x6e4274;
            FUN_0045a430();
          }
          *(int *)(iVar3 + 100) = local_58 + 0x10;
          if (*(int *)(local_58 + 0x14) != 0) {
            local_5c = (int *)&local_70;
            local_70 = (int **)(*(int *)(local_58 + 0x18) + 0x30);
            FUN_006c5760();
          }
        }
      }
      piVar9 = (int *)((int)piVar9 + piVar9[1] + 8);
    } while (piVar9 < local_44);
  }
  ExceptionList = local_c;
  return 1;
}

