/* speed.exe 00756a90 FUN_00756a90; analysis pseudocode, not buildable source.
 * calls 0074d070 FUN_0074d070
 */

/* WARNING: Switch with 1 destination removed at 0x00756d86 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00756a90(int *param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int local_10;
  uint local_8;
  
  iVar9 = *param_1;
  if (iVar9 == 0x34600) {
    DAT_009b09d8 = (int)param_1 + 0x17U & 0xfffffff0;
    return 1;
  }
  if (iVar9 == 0x34608) {
    _DAT_009b09e0 = param_1 + 2;
    return 1;
  }
  if (iVar9 == 0x34609) {
    _DAT_009b09e4 = param_1 + 2;
    _DAT_009b09e8 = param_1 + 0x22;
    return 1;
  }
  if (iVar9 == 0x34607) {
    DAT_009b09ec = param_1 + 2;
    DAT_009b09f0 = param_1 + 0x118;
    DAT_009b09f4 = param_1[1] - 0x458U >> 4;
    return 1;
  }
  if (iVar9 != -0x7ffcb9fe) {
    return 0;
  }
  iVar9 = param_1[3];
  iVar4 = *(int *)(iVar9 + 0x14 + (int)param_1) + iVar9 + 0x18;
  iVar5 = *(int *)((int)param_1 + iVar4 + 4) + 8 + iVar4;
  piVar12 = param_1 + 4;
  iVar7 = *(int *)((int)param_1 + iVar5 + 4);
  iVar2 = *(int *)((int)param_1 + iVar7 + 0xc + iVar5);
  iVar6 = iVar7 + 8 + iVar5;
  iVar7 = *(int *)((int)param_1 + iVar2 + 0xc + iVar6);
  iVar2 = iVar2 + 8 + iVar6;
  param_1[0xb] = (int)param_1 + iVar5 + 8;
  param_1[0x11] = (int)param_1 + iVar7 + iVar2 + 0x10;
  *piVar12 = (int)piVar12;
  param_1[5] = (int)piVar12;
  param_1[7] = (int)param_1 + iVar9 + 0x18;
  param_1[9] = (int)param_1 + iVar4 + 8;
  param_1[0xd] = (int)param_1 + iVar2 + 8;
  param_1[0xf] = (int)param_1 + iVar6 + 8;
  param_1[8] = *(int *)((int)param_1 + iVar9 + 0x14);
  DAT_009b09bc = param_1[7];
  _DAT_009b09c0 = *(undefined4 *)((int)param_1 + iVar9 + 0x14);
  DAT_009b09c4 = param_1[0xd];
  DAT_009b09c8 = param_1[0xe];
  _DAT_009b09cc = param_1[0x11];
  _DAT_009b09d0 = param_1[0xf];
  psVar3 = (short *)param_1[9];
  psVar8 = (short *)(*(int *)((int)param_1 + iVar4 + 4) + (int)psVar3);
  for (; psVar3 < psVar8; psVar3 = psVar3 + *psVar3 + 1) {
  }
  uVar13 = 0;
  DAT_009b09d4 = piVar12;
  if (param_1[0x10] != 0) {
    iVar9 = 0;
    do {
      iVar7 = param_1[0xf] + iVar9;
      if (*(char *)(param_1[0xf] + iVar9) != '\0') {
        if (*(int *)(iVar7 + 4) != -1) {
          *(int *)(iVar7 + 4) = DAT_009b09bc + *(int *)(iVar7 + 4) * 4;
        }
        if (*(int *)(iVar7 + 8) != -1) {
          *(int *)(iVar7 + 8) = DAT_009b09bc + *(int *)(iVar7 + 8) * 4;
        }
        if (*(int *)(iVar7 + 0xc) != -1) {
          *(int *)(iVar7 + 0xc) = DAT_009b09bc + *(int *)(iVar7 + 0xc) * 4;
        }
        if (*(int *)(iVar7 + 0x10) != -1) {
          *(int *)(iVar7 + 0x10) = DAT_009b09bc + *(int *)(iVar7 + 0x10) * 4;
        }
        if (*(int *)(iVar7 + 0x14) != -1) {
          *(int *)(iVar7 + 0x14) = DAT_009b09bc + *(int *)(iVar7 + 0x14) * 4;
        }
      }
      uVar13 = uVar13 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar13 < (uint)param_1[0x10]);
  }
  local_8 = 0;
  if (param_1[0x12] != 0) {
    local_10 = 0;
    do {
      iVar7 = param_1[0x11] + local_10;
      cVar1 = *(char *)(iVar7 + 4);
      uVar13 = FUN_0074d070();
      piVar10 = (int *)0x0;
      iVar9 = (char)(*(byte *)(iVar7 + 5) >> 5) + -1;
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      else if (2 < iVar9) {
        iVar9 = 2;
      }
      piVar11 = (int *)0x0;
      if (cVar1 == 'L') {
        if (uVar13 < 0x3797534) {
          if (uVar13 == 0x3797533) {
            piVar10 = &DAT_009b26ec + iVar9 * 2;
          }
          else if (uVar13 == 0xda27) {
            piVar10 = &DAT_009b271c + iVar9 * 2;
          }
          else if (uVar13 == 0x2daab07) {
            piVar10 = &DAT_009b26bc + iVar9 * 2;
          }
          else {
            if (uVar13 != 0x3437a52) goto LAB_00756dd2;
            piVar10 = &DAT_009b26d4 + iVar9 * 2;
          }
        }
        else if (uVar13 == 0x3e871f1) {
          piVar10 = &DAT_009b2704 + iVar9 * 2;
        }
        else {
          if (uVar13 != 0xd6640dff) goto LAB_00756dd2;
          piVar10 = &DAT_009b2734 + iVar9 * 2;
        }
LAB_00756db6:
        if (piVar10 != (int *)0x0) {
          if (*piVar10 == 0) {
            *piVar10 = iVar7;
          }
          piVar10[1] = piVar10[1] + 1;
        }
        if (piVar11 != (int *)0x0) {
          if (*piVar11 == 0) {
            *piVar11 = iVar7;
          }
          piVar11[1] = piVar11[1] + 1;
        }
      }
      else if (cVar1 == 'O') {
        switch(*(byte *)(iVar7 + 5) & 0x1f) {
        default:
          break;
        case 1:
        case 3:
        case 6:
        case 8:
        case 10:
        case 0xd:
          break;
        case 0xf:
          goto switchD_00756d68_caseD_f;
        case 0x10:
        case 0x12:
          break;
        case 0x11:
        }
        piVar10 = (int *)(&DAT_009b2794 + iVar9 * 8);
switchD_00756d68_caseD_f:
        piVar11 = &DAT_009b274c + iVar9 * 2;
        goto LAB_00756db6;
      }
LAB_00756dd2:
      local_8 = local_8 + 1;
      local_10 = local_10 + 0xe;
    } while (local_8 < (uint)param_1[0x12]);
  }
  *DAT_009b26ac = (int)piVar12;
  piVar10 = piVar12;
  param_1[5] = (int)DAT_009b26ac;
  DAT_009b26ac = piVar10;
  *piVar12 = (int)&DAT_009b26a8;
  DAT_009b26b0 = DAT_009b26b0 + 1;
  DAT_009b26b4 = DAT_009b26b4 + param_1[0x12];
  DAT_009b26b8 = DAT_009b26b8 + param_1[1];
  return 1;
}

