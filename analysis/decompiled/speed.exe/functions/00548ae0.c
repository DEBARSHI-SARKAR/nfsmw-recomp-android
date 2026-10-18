/* speed.exe 00548ae0 FUN_00548ae0; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00588250 FUN_00588250
 * calls 00462830 FUN_00462830
 * calls 0045d380 FUN_0045d380
 * calls 0051fdf0 FUN_0051fdf0
 * calls 005b1360 FUN_005b1360
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0056d720 FUN_0056d720
 * calls 005b8400 FUN_005b8400
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 00593560 FUN_00593560
 * calls 0056d750 FUN_0056d750
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00593880 FUN_00593880
 */

void __fastcall FUN_00548ae0(int param_1)

{
  int ***pppiVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  int ***local_20;
  int ***local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00870158;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00593880();
  local_20 = (int ***)&local_20;
  bVar12 = false;
  bVar2 = false;
  local_c = 0;
  iVar10 = 0x95;
  local_1c = local_20;
  do {
    pppiVar5 = (int ***)FUN_0056d720(iVar10);
    if ((*(char *)pppiVar5 != -1) && (((uint)*pppiVar5 & 0x600) != 0)) {
      ppppiVar6 = _malloc(0xc);
      if (ppppiVar6 == (int ****)0x0) {
        ppppiVar6 = (int ****)0x0;
      }
      else {
        ppppiVar6[2] = pppiVar5;
      }
      *local_1c = (int **)ppppiVar6;
      ppppiVar6[1] = local_1c;
      *ppppiVar6 = (int ***)&local_20;
      local_1c = (int ***)ppppiVar6;
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  FUN_00462830(&LAB_00511e40);
  iVar11 = 0;
  iVar10 = FUN_0045d3a0(0);
  bVar3 = false;
  if (0 < iVar10) {
    do {
      bVar12 = bVar3;
      iVar10 = FUN_0045d380(iVar11);
      iVar10 = *(int *)(iVar10 + 8);
      if ((*(byte *)(iVar10 + 1) & 2) != 0) {
        cVar4 = FUN_0056d750();
        if (cVar4 == '\0') {
          bVar2 = true;
        }
        else {
          bVar12 = true;
        }
      }
      if (*(char *)(param_1 + 0xe8) == '\0') {
        cVar4 = FUN_0056d750();
        if (cVar4 == '\0') goto LAB_00548beb;
      }
      else {
        cVar4 = FUN_0056d750();
        if (cVar4 != '\0') {
LAB_00548beb:
          FUN_0051fdf0(iVar10);
        }
      }
      iVar11 = iVar11 + 1;
      iVar10 = FUN_0045d3a0(0);
      bVar3 = bVar12;
    } while (iVar11 < iVar10);
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (bVar12) {
      if (pcVar8 != (char *)0x0) {
        pcVar7 = pcVar8;
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        if (pcVar7 != pcVar8 + 1) {
          if (DAT_0091d218 < 1) {
            iVar10 = FUN_005b5b70(pcVar8);
            if (iVar10 == 0) {
              iVar10 = FUN_005b7580(pcVar8);
              if (iVar10 == 0) goto LAB_00548f34;
              goto LAB_00548e6d;
            }
          }
          else {
            FUN_00572070();
            iVar10 = FUN_00591d90(pcVar8);
LAB_00548e6d:
            if (iVar10 == 0) goto LAB_00548f34;
          }
          iVar10 = FUN_005b8550(0x19161ccc);
          if (iVar10 != 0) {
            uVar13 = 0x1ca7c0;
LAB_00548f10:
            iVar10 = FUN_005b1360(uVar13);
            if (iVar10 != 0) {
              FUN_005b8400(iVar10,0);
              *(undefined4 *)(iVar10 + 0x10) = 0;
            }
          }
        }
      }
    }
    else if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      if (pcVar7 != pcVar8 + 1) {
        if (DAT_0091d218 < 1) {
          iVar10 = FUN_005b5b70(pcVar8);
          if (iVar10 == 0) {
            iVar10 = FUN_005b7580(pcVar8);
            if (iVar10 == 0) goto LAB_00548f34;
            goto LAB_00548ef5;
          }
        }
        else {
          FUN_00572070();
          iVar10 = FUN_00591d90(pcVar8);
LAB_00548ef5:
          if (iVar10 == 0) goto LAB_00548f34;
        }
        iVar10 = FUN_005b8550(0x19161ccc);
        if (iVar10 != 0) {
          uVar13 = 0x16a259;
          goto LAB_00548f10;
        }
      }
    }
LAB_00548f34:
    if (!bVar2) {
      pcVar8 = *(char **)(param_1 + 0x10);
      if (pcVar8 == (char *)0x0) goto LAB_0054905e;
      pcVar7 = pcVar8;
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      iVar10 = (int)pcVar7 - (int)(pcVar8 + 1);
      goto LAB_00548fed;
    }
    pcVar8 = *(char **)(param_1 + 0x10);
    if (pcVar8 == (char *)0x0) goto LAB_0054905e;
    pcVar7 = pcVar8;
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    if (pcVar7 == pcVar8 + 1) goto LAB_0054905e;
    if (DAT_0091d218 < 1) {
      iVar10 = FUN_005b5b70(pcVar8);
      if (iVar10 == 0) {
        iVar10 = FUN_005b7580(pcVar8);
        if (iVar10 == 0) goto LAB_0054905e;
        goto LAB_00548fa3;
      }
    }
    else {
      FUN_00572070();
      iVar10 = FUN_00591d90(pcVar8);
LAB_00548fa3:
      if (iVar10 == 0) goto LAB_0054905e;
    }
    iVar10 = FUN_005b8550(0xd6fd6f9);
    if (iVar10 == 0) goto LAB_0054905e;
    uVar13 = 0x249db7b7;
  }
  else {
    if (bVar12) {
      if (pcVar8 != (char *)0x0) {
        pcVar7 = pcVar8;
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        if (pcVar7 != pcVar8 + 1) {
          if (DAT_0091d218 < 1) {
            iVar10 = FUN_005b5b70(pcVar8);
            if (iVar10 == 0) {
              iVar10 = FUN_005b7580(pcVar8);
              if (iVar10 == 0) goto LAB_00548d44;
              goto LAB_00548c82;
            }
          }
          else {
            FUN_00572070();
            iVar10 = FUN_00591d90(pcVar8);
LAB_00548c82:
            if (iVar10 == 0) goto LAB_00548d44;
          }
          iVar10 = FUN_005b8550(0x19161ccc);
          if (iVar10 != 0) {
            uVar13 = 0x249db7b7;
LAB_00548d20:
            iVar10 = FUN_005b1360(uVar13);
            if (iVar10 != 0) {
              FUN_005b8400(iVar10,0);
              *(undefined4 *)(iVar10 + 0x10) = 0;
            }
          }
        }
      }
    }
    else if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      if (pcVar7 != pcVar8 + 1) {
        if (DAT_0091d218 < 1) {
          iVar10 = FUN_005b5b70(pcVar8);
          if (iVar10 == 0) {
            iVar10 = FUN_005b7580(pcVar8);
            if (iVar10 == 0) goto LAB_00548d44;
            goto LAB_00548d05;
          }
        }
        else {
          FUN_00572070();
          iVar10 = FUN_00591d90(pcVar8);
LAB_00548d05:
          if (iVar10 == 0) goto LAB_00548d44;
        }
        iVar10 = FUN_005b8550(0x19161ccc);
        if (iVar10 != 0) {
          uVar13 = 0x16a259;
          goto LAB_00548d20;
        }
      }
    }
LAB_00548d44:
    if (bVar2) {
      pcVar8 = *(char **)(param_1 + 0x10);
      if (pcVar8 == (char *)0x0) goto LAB_0054905e;
      pcVar7 = pcVar8;
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      if (pcVar7 == pcVar8 + 1) goto LAB_0054905e;
      if (DAT_0091d218 < 1) {
        iVar10 = FUN_005b5b70(pcVar8);
        if (iVar10 == 0) {
          iVar10 = FUN_005b7580(pcVar8);
          if (iVar10 == 0) goto LAB_0054905e;
          goto LAB_00548db3;
        }
      }
      else {
        FUN_00572070();
        iVar10 = FUN_00591d90(pcVar8);
LAB_00548db3:
        if (iVar10 == 0) goto LAB_0054905e;
      }
      iVar10 = FUN_005b8550(0xd6fd6f9);
      if (iVar10 == 0) goto LAB_0054905e;
      uVar13 = 0x1ca7c0;
    }
    else {
      pcVar8 = *(char **)(param_1 + 0x10);
      if (pcVar8 == (char *)0x0) goto LAB_0054905e;
      pcVar7 = pcVar8;
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      iVar10 = (int)pcVar7 - (int)(pcVar8 + 1);
LAB_00548fed:
      if (iVar10 == 0) goto LAB_0054905e;
      if (DAT_0091d218 < 1) {
        iVar10 = FUN_005b5b70(pcVar8);
        if (iVar10 == 0) {
          iVar10 = FUN_005b7580(pcVar8);
          if (iVar10 == 0) goto LAB_0054905e;
          goto LAB_00549025;
        }
      }
      else {
        FUN_00572070();
        iVar10 = FUN_00591d90(pcVar8);
LAB_00549025:
        if (iVar10 == 0) goto LAB_0054905e;
      }
      iVar10 = FUN_005b8550(0xd6fd6f9);
      if (iVar10 == 0) goto LAB_0054905e;
      uVar13 = 0x16a259;
    }
  }
  iVar10 = FUN_005b1360(uVar13);
  if (iVar10 != 0) {
    FUN_005b8400(iVar10,0);
    *(undefined4 *)(iVar10 + 0x10) = 0;
  }
LAB_0054905e:
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = FUN_0045d3a0(0);
  if (0 < iVar11) {
    do {
      iVar11 = FUN_00588250(iVar9);
      if (*(char *)(param_1 + 0xe8) == '\0') {
        bVar12 = **(char **)(iVar11 + 0x18) == *(char *)(param_1 + 0xe1);
      }
      else {
        bVar12 = **(char **)(iVar11 + 0x18) == *(char *)(param_1 + 0xe0);
      }
      if (bVar12) {
        iVar10 = iVar9;
      }
      iVar9 = iVar9 + 1;
      iVar11 = FUN_0045d3a0(0);
    } while (iVar9 < iVar11);
  }
  FUN_00593560(iVar10);
  if (*(int *)(param_1 + 0x44) == 0) {
    DAT_0091ca50 = 0;
  }
  else {
    DAT_0091ca50 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x18);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar5 = (int ***)*local_20;
      pppiVar1 = (int ***)local_20[1];
      *pppiVar1 = (int **)pppiVar5;
      pppiVar5[1] = (int **)pppiVar1;
      thunk_FUN_007c7250(local_20);
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = pvStack_14;
  return;
}

