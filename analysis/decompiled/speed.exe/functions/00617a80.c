/* speed.exe 00617a80 FUN_00617a80; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00617a80 FUN_00617a80
 * calls 00605950 FUN_00605950
 * calls 00614060 FUN_00614060
 * calls 00460c50 FUN_00460c50
 * calls 00603d90 FUN_00603d90
 * calls 00607d80 FUN_00607d80
 * calls 00614c50 FUN_00614c50
 * calls 00605db0 FUN_00605db0
 * calls 0060b060 FUN_0060b060
 * calls 00605d60 FUN_00605d60
 * calls 00614d10 FUN_00614d10
 * calls 00605f40 FUN_00605f40
 * calls 007c4b80 FUN_007c4b80
 * calls 005cc240 FUN_005cc240
 */

int FUN_00617a80(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  float10 fVar18;
  int local_18;
  undefined4 local_14;
  byte local_c [4];
  undefined4 local_8;
  
  local_18 = 0;
  piVar15 = *(undefined4 **)(param_1 + 8) + -2;
  iVar4 = 0;
  if ((piVar15 != (int *)0x0) && (*piVar15 == 5)) {
    **(undefined4 **)(param_1 + 8) = 0;
    iVar4 = *(int *)(param_1 + 8) + 8;
    while( true ) {
      *(int *)(param_1 + 8) = iVar4;
      iVar4 = FUN_00614060(param_1,*(undefined4 *)(iVar4 + -0xc),iVar4 + -8);
      if (iVar4 == 0) break;
      puVar6 = *(undefined4 **)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar6 + 2;
      if (puVar6 + -2 == (undefined4 *)0x0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = puVar6[-2];
      }
      if (puVar6 == (undefined4 *)0x0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *puVar6;
      }
      switch(uVar5) {
      case 0:
      case 2:
      case 5:
      case 6:
      case 7:
      case 8:
        break;
      default:
        switch(uVar11) {
        case 0:
        case 6:
        case 8:
          break;
        default:
switchD_00617b2c_caseD_1:
          local_14 = -2;
          do {
            iVar4 = local_14;
            if (local_14 < 1) {
              if (local_14 < -9999) {
                if (local_14 == -0x2711) {
                  puVar6 = (undefined4 *)(param_1 + 0x40);
                }
                else if (local_14 == -10000) {
                  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c);
                }
                else {
                  iVar13 = *(int *)(*(int *)(param_1 + 0xc) + -4);
                  if ((int)(uint)*(byte *)(iVar13 + 7) < -0x2711 - local_14) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    puVar6 = (undefined4 *)(iVar13 + 8 + (-0x2711 - local_14) * 8);
                  }
                }
              }
              else {
                puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + local_14 * 8);
              }
LAB_00617bbb:
              if (puVar6 == (undefined4 *)0x0) goto LAB_00617bbf;
              bVar2 = (byte)*puVar6;
            }
            else {
              puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + local_14 * 8);
              if (puVar6 < *(undefined4 **)(param_1 + 8)) goto LAB_00617bbb;
LAB_00617bbf:
              bVar2 = 0xff;
            }
            local_c[0] = (local_14 == -2 | 0xfeU) << 6 ^ bVar2 & 0xf;
            pbVar14 = local_c;
            if (param_2 != 0) {
              pbVar14 = (byte *)(local_18 + param_2);
              *pbVar14 = local_c[0];
            }
            iVar13 = local_18 + 1;
            switch((int)(char)(bVar2 << 4) >> 4) {
            case 1:
              if (local_14 < 1) {
                piVar15 = (int *)FUN_00605950();
LAB_00617c39:
                if (((piVar15 == (int *)0x0) || (*piVar15 == 0)) ||
                   ((*piVar15 == 1 && (piVar15[1] == 0)))) goto LAB_00617c16;
                cVar3 = '\x01';
              }
              else {
                piVar15 = (int *)(*(int *)(param_1 + 0xc) + -8 + local_14 * 8);
                if (piVar15 < *(int **)(param_1 + 8)) goto LAB_00617c39;
LAB_00617c16:
                cVar3 = '\0';
              }
              *pbVar14 = *pbVar14 ^ (cVar3 << 4 ^ *pbVar14) & 0x10;
              break;
            case 2:
              puVar7 = (undefined1 *)FUN_00605d60(param_1,local_14);
              if (param_2 != 0) {
                *(undefined1 *)(iVar13 + param_2) = *puVar7;
                *(undefined1 *)(local_18 + 2 + param_2) = puVar7[1];
                *(undefined1 *)(local_18 + 3 + param_2) = puVar7[2];
                *(undefined1 *)(local_18 + 4 + param_2) = puVar7[3];
              }
              iVar13 = local_18 + 5;
              break;
            case 3:
              fVar18 = (float10)FUN_0060b060(param_1,local_14);
              fVar1 = (float)fVar18;
              cVar3 = FUN_007c4b80();
              if (fVar1 == (float)(int)cVar3) {
                *pbVar14 = *pbVar14 | 0x20;
              }
              if ((*pbVar14 & 0x20) == 0) {
                if (param_2 != 0) {
                  local_14._1_1_ = (undefined1)((uint)fVar1 >> 8);
                  local_14._0_1_ = SUB41(fVar1,0);
                  *(undefined1 *)(local_18 + 2 + param_2) = local_14._1_1_;
                  *(undefined1 *)(iVar13 + param_2) = (undefined1)local_14;
                  *(char *)(local_18 + 3 + param_2) = (char)((uint)fVar1 >> 0x10);
                  *(char *)(local_18 + 4 + param_2) = (char)((uint)fVar1 >> 0x18);
                }
                iVar13 = local_18 + 5;
              }
              else {
                if (param_2 != 0) {
                  *(char *)(iVar13 + param_2) = cVar3;
                }
                iVar13 = local_18 + 2;
              }
              break;
            case 4:
              uVar5 = FUN_00614d10(param_1,local_14);
              iVar16 = FUN_00460c50(uVar5);
              if (((((*pbVar14 & 0x40) == 0) || ((char)param_3 != '\0')) ||
                  (iVar10 = FUN_00603d90(uVar5,0), iVar10 < 1)) ||
                 ((iVar16 + 1 <= iVar10 || (0x80 < iVar10)))) {
                if (param_2 != 0) {
                  FUN_00460c70(iVar13 + param_2,uVar5);
                }
                iVar13 = local_18 + 2 + iVar16;
              }
              else {
                if (param_2 != 0) {
                  FUN_00603d90(uVar5,iVar13 + param_2);
                }
                *pbVar14 = *pbVar14 | 0x20;
                iVar13 = iVar13 + iVar10;
              }
              break;
            case 5:
              if (param_2 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = iVar13 + param_2;
              }
              iVar16 = FUN_00617a80(param_1,iVar16,param_3);
              iVar13 = iVar13 + iVar16;
              break;
            case 7:
              uVar8 = FUN_00605db0(param_1,local_14);
              if (param_2 != 0) {
                *(char *)(iVar13 + param_2) = (char)uVar8;
                puVar6 = (undefined4 *)FUN_00605d60(param_1,local_14);
                puVar17 = (undefined4 *)(local_18 + 2 + param_2);
                for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *puVar17 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar17 = puVar17 + 1;
                }
                for (uVar12 = uVar8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                }
              }
              iVar13 = local_18 + 2 + uVar8;
              uVar5 = 0;
              local_8 = 0;
              FUN_00605f40(param_1,local_14);
              iVar16 = *(int *)(param_1 + 8);
              piVar15 = (int *)(iVar16 + -8);
              if ((piVar15 != (int *)0x0) && (*piVar15 == 5)) {
                piVar9 = (int *)FUN_00607d80(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),
                                             piVar15);
                *piVar15 = *piVar9;
                *(int *)(iVar16 + -4) = piVar9[1];
                iVar16 = *(int *)(param_1 + 8);
                piVar15 = (int *)(iVar16 + -8);
                if ((piVar15 != (int *)0x0) && ((*piVar15 == 4 || (*piVar15 == 3)))) {
                  if (piVar15 == (int *)0x0) {
LAB_00617e90:
                    iVar16 = 0;
                  }
                  else if (*piVar15 == 4) {
                    iVar16 = *(int *)(iVar16 + -4) + 0x10;
                  }
                  else {
                    iVar10 = FUN_00614c50(param_1,piVar15);
                    if (iVar10 == 0) goto LAB_00617e90;
                    iVar16 = *(int *)(iVar16 + -4) + 0x10;
                  }
                  uVar5 = FUN_005cc240(iVar16);
                  local_8 = uVar5;
                }
              }
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
              if (param_2 != 0) {
                *(char *)(iVar13 + param_2) = (char)uVar5;
                *(char *)(iVar13 + 1 + param_2) = (char)((uint)uVar5 >> 8);
                *(char *)(iVar13 + 2 + param_2) = (char)((uint)local_8 >> 0x10);
                *(char *)(iVar13 + 3 + param_2) = (char)((uint)local_8 >> 0x18);
              }
              iVar13 = iVar13 + 4;
            }
            local_18 = iVar13;
            local_14 = iVar4 + 1;
          } while (local_14 < 0);
          break;
        case 2:
        case 7:
          if ((char)param_3 != '\0') goto switchD_00617b2c_caseD_1;
        }
      }
      iVar4 = *(int *)(param_1 + 8) + -8;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
    iVar4 = local_18;
  }
  if (param_2 != 0) {
    *(undefined1 *)(iVar4 + param_2) = 0;
  }
  return iVar4 + 1;
}

