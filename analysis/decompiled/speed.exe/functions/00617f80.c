/* speed.exe 00617f80 FUN_00617f80; analysis pseudocode, not buildable source.
 * calls 00614060 FUN_00614060
 * calls 00460c50 FUN_00460c50
 * calls 0060e2e0 FUN_0060e2e0
 * calls 005c81c0 FUN_005c81c0
 * calls 00605a60 FUN_00605a60
 * calls 00614d10 FUN_00614d10
 * calls 005cc240 FUN_005cc240
 * calls 00617f80 FUN_00617f80
 * calls 0060bf90 FUN_0060bf90
 * calls 00614e00 FUN_00614e00
 * calls 00603e40 FUN_00603e40
 * calls 00606000 FUN_00606000
 * calls 00614f10 FUN_00614f10
 */

int FUN_00617f80(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  bool local_9d;
  float local_9c;
  undefined1 local_80 [128];
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0060e2e0(param_1);
  bVar5 = *param_2;
  pfVar14 = (float *)(param_2 + 1);
  local_9d = true;
  if ((char)bVar5 < '\0') {
    do {
      if (local_9d != (bool)(bVar5 >> 6 & 1)) goto switchD_00618010_caseD_6;
      switch((int)(char)(bVar5 << 4) >> 4) {
      case 1:
        puVar13 = *(undefined4 **)(param_1 + 8);
        *puVar13 = 1;
        puVar13[1] = (uint)((bVar5 >> 4 & 1) != 0);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
        goto LAB_00618098;
      case 2:
        if ((local_9d != false) || ((char)param_3 == '\0')) goto switchD_00618010_caseD_6;
        fVar3 = *pfVar14;
        puVar13 = *(undefined4 **)(param_1 + 8);
        *puVar13 = 2;
        puVar13[1] = fVar3;
        pfVar14 = pfVar14 + 1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
        break;
      case 3:
        if ((bVar5 & 0x20) == 0) {
          local_9c = *pfVar14;
          pfVar14 = pfVar14 + 1;
        }
        else {
          bVar5 = *(byte *)pfVar14;
          pfVar14 = (float *)((int)pfVar14 + 1);
          local_9c = (float)(int)(char)bVar5;
        }
        cVar6 = FUN_005c81c0(local_9c);
        if (cVar6 == '\0') {
          puVar13 = *(undefined4 **)(param_1 + 8);
          *puVar13 = 3;
          puVar13[1] = local_9c;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
          goto LAB_00618098;
        }
        goto switchD_00618010_caseD_6;
      case 4:
        if ((bVar5 & 0x20) == 0) {
          FUN_00614e00(param_1,pfVar14);
          iVar11 = FUN_00460c50(pfVar14);
          pfVar14 = (float *)((int)pfVar14 + iVar11 + 1);
        }
        else {
          iVar11 = FUN_00603e40(pfVar14,local_80);
          pfVar14 = (float *)((int)pfVar14 + iVar11);
          FUN_00614e00(param_1,local_80);
        }
LAB_00618098:
        if (local_9d == false) break;
        goto LAB_006180c1;
      case 5:
        if ((local_9d != false) || (iVar11 = FUN_00617f80(param_1,pfVar14,param_3), iVar11 == 0))
        goto switchD_00618010_caseD_6;
        pfVar14 = (float *)((int)pfVar14 + iVar11);
        break;
      default:
        goto switchD_00618010_caseD_6;
      case 7:
        if ((local_9d != false) || ((char)param_3 == '\0')) goto switchD_00618010_caseD_6;
        bVar5 = *(byte *)pfVar14;
        uVar16 = (uint)bVar5;
        pbVar7 = (byte *)FUN_00614f10(param_1,uVar16);
        pbVar17 = (byte *)((int)pfVar14 + 1);
        for (uVar12 = (uint)(bVar5 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)pbVar17;
          pbVar17 = pbVar17 + 4;
          pbVar7 = pbVar7 + 4;
        }
        pbVar15 = (byte *)((int)pfVar14 + 1) + uVar16;
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pbVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          pbVar7 = pbVar7 + 1;
        }
        iVar11 = *(int *)pbVar15;
        pfVar14 = (float *)(pbVar15 + 4);
        if (iVar11 != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          puVar13 = *(undefined4 **)(param_1 + 8);
          *puVar13 = *(undefined4 *)(iVar8 + 0x2c);
          puVar13[1] = *(undefined4 *)(iVar8 + 0x30);
          puVar13 = (undefined4 *)(*(int *)(param_1 + 8) + 8);
          *(undefined4 **)(param_1 + 8) = puVar13;
          *puVar13 = 0;
          bVar4 = false;
          iVar8 = *(int *)(param_1 + 8) + 8;
          while( true ) {
            *(int *)(param_1 + 8) = iVar8;
            iVar8 = FUN_00614060(param_1,*(undefined4 *)(iVar8 + -0xc),iVar8 + -8);
            if (iVar8 == 0) break;
            piVar9 = (int *)(*(int *)(param_1 + 8) + -8);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
            if ((piVar9 != (int *)0x0) && (*piVar9 == 4)) {
              uVar10 = FUN_00614d10(param_1,0xfffffffe);
              iVar8 = FUN_005cc240(uVar10);
              if (iVar8 == iVar11) {
                FUN_00606000(param_1,0xfffffffc);
                bVar4 = true;
                break;
              }
            }
            iVar8 = *(int *)(param_1 + 8) + -8;
          }
          iVar11 = *(int *)(param_1 + 8);
          *(int *)(param_1 + 8) = iVar11 + -8;
          *(int *)(param_1 + 8) = iVar11 + -0x10;
          if (!bVar4) goto switchD_00618010_caseD_6;
        }
      }
      iVar11 = *(int *)(param_1 + 8);
      FUN_0060bf90(param_1,iVar11 + -0x18,iVar11 + -0x10,iVar11 + -8);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
LAB_006180c1:
      bVar5 = *(byte *)pfVar14;
      pfVar14 = (float *)((int)pfVar14 + 1);
      local_9d = local_9d == false;
    } while ((char)bVar5 < '\0');
    if (!local_9d) {
switchD_00618010_caseD_6:
      FUN_00605a60(param_1,iVar1 - iVar2 >> 3);
      return 0;
    }
  }
  return (int)pfVar14 - (int)param_2;
}

