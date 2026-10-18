/* speed.exe 0074da80 FUN_0074da80; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00460c70 FUN_00460c70
 * calls 00460c20 FUN_00460c20
 */

void __thiscall FUN_0074da80(int param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  iVar4 = FUN_00460bf0("DEFAULTALPHA");
  piVar15 = (int *)(param_1 + 0x474);
  piVar12 = &DAT_009b3674;
  do {
    piVar15[-1] = piVar12[-1];
    if (iVar4 != *piVar15) {
      *piVar15 = iVar4;
      piVar15[1] = -1;
    }
    piVar15[2] = *piVar12;
    if (iVar4 != piVar15[3]) {
      piVar15[3] = iVar4;
      piVar15[4] = -1;
    }
    piVar12 = piVar12 + 2;
    piVar15 = piVar15 + 6;
  } while ((int)piVar12 < 0x9b36d9);
  local_a0[0] = FUN_00460bf0("DUMMY_DECAL1");
  local_a0[1] = FUN_00460bf0("DUMMY_DECAL2");
  local_a0[2] = FUN_00460bf0("DUMMY_DECAL3");
  local_a0[3] = FUN_00460bf0("DUMMY_DECAL4");
  local_90 = FUN_00460bf0("DUMMY_DECAL5");
  local_8c = FUN_00460bf0("DUMMY_DECAL6");
  local_88 = FUN_00460bf0("DUMMY_NUMBER_LEFT");
  local_84 = FUN_00460bf0("DUMMY_NUMBER_RIGHT");
  piVar15 = (int *)(param_1 + 0x918);
  uVar13 = 2;
  do {
    piVar15[-1] = local_a0[uVar13 - 2 & 7];
    if (iVar4 != *piVar15) {
      *piVar15 = iVar4;
      piVar15[1] = -1;
    }
    piVar15[2] = local_a0[uVar13 - 1 & 7];
    if (iVar4 != piVar15[3]) {
      piVar15[3] = iVar4;
      piVar15[4] = -1;
    }
    piVar15[5] = local_a0[uVar13 & 7];
    if (iVar4 != piVar15[6]) {
      piVar15[6] = iVar4;
      piVar15[7] = -1;
    }
    piVar15[8] = local_a0[uVar13 + 1 & 7];
    if (iVar4 != piVar15[9]) {
      piVar15[9] = iVar4;
      piVar15[10] = -1;
    }
    piVar15[0xb] = local_a0[uVar13 + 2 & 7];
    if (iVar4 != piVar15[0xc]) {
      piVar15[0xc] = iVar4;
      piVar15[0xd] = -1;
    }
    piVar15[0xe] = local_a0[uVar13 + 3 & 7];
    if (iVar4 != piVar15[0xf]) {
      piVar15[0xf] = iVar4;
      piVar15[0x10] = -1;
    }
    iVar5 = uVar13 + 4;
    piVar15 = piVar15 + 0x12;
    uVar13 = uVar13 + 6;
  } while (iVar5 < 0x30);
  iVar4 = *(int *)(param_2 + 0x144);
  iVar5 = FUN_00460bf0(&DAT_008aeb6c);
  iVar6 = FUN_00460bf0("SHAPE");
  FUN_00460bf0("SMALL");
  FUN_00460bf0("MEDIUM");
  FUN_00460bf0("LARGE");
  iVar7 = FUN_00460bf0("SQUARE");
  iVar8 = FUN_00460bf0(&DAT_008b4ccc);
  iVar9 = FUN_00460bf0(&DAT_008b4cc4);
  piVar15 = (int *)(param_2 + 0x160);
  local_c8 = 0;
  local_c4 = 0;
LAB_0074dca0:
  if (((*piVar15 != 0) && (iVar4 != 0)) && (uVar2 = *(ushort *)(*piVar15 + 10), uVar2 != 0xffff)) {
    iVar16 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    psVar11 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    iVar14 = 0;
    if (0 < iVar16) {
      iVar17 = *(int *)(DAT_009b09d4 + 0x1c);
      psVar10 = psVar11;
      do {
        psVar10 = psVar10 + 1;
        piVar12 = (int *)(iVar17 + *psVar10 * 8);
        if ((iVar5 == 0) || (*piVar12 == iVar5)) {
          if (piVar12 != (int *)0x0) {
            iVar14 = 0;
            psVar10 = psVar11;
            if (0 < *psVar11) goto LAB_0074dd20;
          }
          break;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar16);
    }
  }
  goto LAB_0074decd;
  while (iVar14 = iVar14 + 1, psVar10 = psVar10 + 1, iVar14 < *psVar11) {
LAB_0074dd20:
    piVar12 = (int *)(iVar17 + psVar10[1] * 8);
    if ((iVar6 == 0) || (*piVar12 == iVar6)) {
      if (piVar12 != (int *)0x0) {
        iVar14 = 0;
        psVar10 = psVar11;
        if (*psVar11 < 1) goto LAB_0074dd71;
        goto LAB_0074dd55;
      }
      break;
    }
  }
  goto LAB_0074decd;
  while (iVar14 = iVar14 + 1, iVar14 < *psVar11) {
LAB_0074dd55:
    psVar10 = psVar10 + 1;
    if ((iVar5 == 0) || (*(int *)(iVar17 + *psVar10 * 8) == iVar5)) break;
  }
LAB_0074dd71:
  sVar3 = *psVar11;
  iVar14 = 0;
  if (0 < sVar3) {
    do {
      psVar11 = psVar11 + 1;
      piVar12 = (int *)(iVar17 + *psVar11 * 8);
      if ((iVar6 == 0) || (*piVar12 == iVar6)) {
        if (piVar12 != (int *)0x0) {
          local_c0 = piVar12[1];
          goto LAB_0074dda6;
        }
        break;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < sVar3);
  }
  local_c0 = 0;
LAB_0074dda6:
  piVar12 = (int *)(local_c8 + 0x918 + param_1);
  local_cc = (int *)(local_c4 + 0x194 + param_2);
  local_bc = 8;
  do {
    iVar14 = *local_cc;
    if (iVar14 != 0) {
      iVar16 = FUN_00460bf0(&DAT_008b4cbc);
      uVar2 = *(ushort *)(iVar14 + 10);
      if (uVar2 != 0xffff) {
        iVar17 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
        psVar11 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
        iVar14 = 0;
        if (0 < iVar17) {
          do {
            psVar11 = psVar11 + 1;
            piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar11 * 8);
            if ((iVar16 == 0) || (*piVar1 == iVar16)) {
              if (piVar1 != (int *)0x0) {
                iVar14 = piVar1[1];
                goto LAB_0074de30;
              }
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar17);
        }
      }
      iVar14 = 0;
LAB_0074de30:
      if (local_c0 == iVar7) {
        pcVar18 = "_SQUARE";
LAB_0074de85:
        FUN_00460c70(local_80,pcVar18);
      }
      else {
        if (local_c0 == iVar8) {
          pcVar18 = "_RECT";
          goto LAB_0074de85;
        }
        if (local_c0 == iVar9) {
          pcVar18 = "_WIDE";
          goto LAB_0074de85;
        }
      }
      iVar14 = FUN_00460c20(local_80,iVar14);
      if (iVar14 != *piVar12) {
        *piVar12 = iVar14;
        piVar12[1] = -1;
      }
    }
    local_cc = local_cc + 1;
    piVar12 = piVar12 + 3;
    local_bc = local_bc + -1;
  } while (local_bc != 0);
LAB_0074decd:
  local_c4 = local_c4 + 0x20;
  piVar15 = piVar15 + 1;
  local_c8 = local_c8 + 0x60;
  if (0xa0 < local_c4) {
    return;
  }
  goto LAB_0074dca0;
}

