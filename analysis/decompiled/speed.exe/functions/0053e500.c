/* speed.exe 0053e500 FUN_0053e500; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7580 FUN_005b7580
 * calls 005922b0 FUN_005922b0
 * calls 00591d90 FUN_00591d90
 * calls 00514c70 FUN_00514c70
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_0053e500(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_34;
  int local_30;
  undefined1 local_20 [32];
  
  local_30 = 0;
  do {
    local_34 = _malloc(0x30);
    if (local_34 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      puVar7 = local_34 + 3;
      *puVar7 = puVar7;
      local_34[4] = puVar7;
      local_34[5] = 0;
      local_34[9] = 0;
      local_34[8] = 0;
      local_34[7] = 0;
      local_34[6] = 0;
      *(undefined1 *)(local_34 + 10) = 1;
      *local_34 = &PTR_FUN_0089e144;
    }
    iVar3 = local_30 + 1;
    FUN_00515e20(local_20,0x20,"OPTION_NAME_%d",iVar3);
    pcVar8 = *(char **)(param_1 + 0x10);
    uVar4 = FUN_005af1c0(local_20);
    if (pcVar8 == (char *)0x0) {
LAB_0053e5f4:
      iVar6 = 0;
    }
    else {
      pcVar5 = pcVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 == pcVar8 + 1) goto LAB_0053e5f4;
      if (DAT_0091d218 < 1) {
        iVar6 = FUN_005b5b70(pcVar8);
        if (iVar6 == 0) {
          iVar6 = FUN_005b7580(pcVar8);
          if (iVar6 == 0) goto LAB_0053e5f4;
          goto LAB_0053e5d6;
        }
      }
      else {
        FUN_00572070();
        iVar6 = FUN_00591d90(pcVar8);
LAB_0053e5d6:
        if (iVar6 == 0) goto LAB_0053e5f4;
      }
      iVar6 = FUN_005b8550(uVar4);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x18) != 2)) goto LAB_0053e5f4;
    }
    puVar7 = _malloc(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &PTR_FUN_0089c2bc;
      puVar7[3] = iVar6;
      puVar7 = puVar7 + 1;
    }
    puVar2 = (undefined4 *)local_34[4];
    *puVar2 = puVar7;
    local_34[4] = puVar7;
    puVar7[1] = puVar2;
    *puVar7 = local_34 + 3;
    FUN_00515e20(local_20,0x20,"option_mouse_%d",iVar3);
    pcVar8 = *(char **)(param_1 + 0x10);
    uVar4 = FUN_005af1c0(local_20);
    if (pcVar8 == (char *)0x0) {
LAB_0053e6ba:
      iVar6 = 0;
    }
    else {
      pcVar5 = pcVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 == pcVar8 + 1) goto LAB_0053e6ba;
      if (DAT_0091d218 < 1) {
        iVar6 = FUN_005b5b70(pcVar8);
        if (iVar6 == 0) {
          iVar6 = FUN_005b7580(pcVar8);
          if (iVar6 == 0) goto LAB_0053e6ba;
          goto LAB_0053e6aa;
        }
      }
      else {
        FUN_00572070();
        iVar6 = FUN_00591d90(pcVar8);
LAB_0053e6aa:
        if (iVar6 == 0) goto LAB_0053e6ba;
      }
      iVar6 = FUN_005b8550(uVar4);
      if (iVar6 == 0) goto LAB_0053e6ba;
    }
    local_34[5] = iVar6;
    FUN_005922b0(local_34);
    local_34[0xb] = local_30;
    local_30 = iVar3;
  } while (iVar3 < 8);
  pcVar8 = *(char **)(param_1 + 0x10);
  if (pcVar8 == (char *)0x0) {
LAB_0053e75f:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e75f;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e75f;
        goto LAB_0053e745;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e745:
      if (iVar3 == 0) goto LAB_0053e75f;
    }
    iVar3 = FUN_005b8550(0xcf6f0439);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e75f;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 400) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053e7df:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e7df;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e7df;
        goto LAB_0053e7c5;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e7c5:
      if (iVar3 == 0) goto LAB_0053e7df;
    }
    iVar3 = FUN_005b8550(0xaba93d3f);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e7df;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x194) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053e85f:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e85f;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e85f;
        goto LAB_0053e845;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e845:
      if (iVar3 == 0) goto LAB_0053e85f;
    }
    iVar3 = FUN_005b8550(0xfa2ca290);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e85f;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x198) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053e8df:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e8df;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e8df;
        goto LAB_0053e8c5;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e8c5:
      if (iVar3 == 0) goto LAB_0053e8df;
    }
    iVar3 = FUN_005b8550(0x69ba0836);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e8df;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x19c) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053e95f:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e95f;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e95f;
        goto LAB_0053e945;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e945:
      if (iVar3 == 0) goto LAB_0053e95f;
    }
    iVar3 = FUN_005b8550(0x69ba0837);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e95f;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x1a0) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053e9df:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053e9df;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053e9df;
        goto LAB_0053e9c5;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053e9c5:
      if (iVar3 == 0) goto LAB_0053e9df;
    }
    iVar3 = FUN_005b8550(0x69ba0838);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053e9df;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x1a4) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053ea5f:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053ea5f;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053ea5f;
        goto LAB_0053ea45;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053ea45:
      if (iVar3 == 0) goto LAB_0053ea5f;
    }
    iVar3 = FUN_005b8550(0x444969fd);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053ea5f;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x188) = iVar3;
  if (pcVar8 == (char *)0x0) {
LAB_0053eadf:
    iVar3 = 0;
  }
  else {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == pcVar8 + 1) goto LAB_0053eadf;
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70(pcVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_005b7580(pcVar8);
        if (iVar3 == 0) goto LAB_0053eadf;
        goto LAB_0053eac5;
      }
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar8);
LAB_0053eac5:
      if (iVar3 == 0) goto LAB_0053eadf;
    }
    iVar3 = FUN_005b8550(0x444969fe);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 1)) goto LAB_0053eadf;
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  *(int *)(param_1 + 0x18c) = iVar3;
  if (pcVar8 != (char *)0x0) {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 != pcVar8 + 1) {
      if (DAT_0091d218 < 1) {
        iVar3 = FUN_005b5b70(pcVar8);
        if (iVar3 == 0) {
          iVar3 = FUN_005b7580(pcVar8);
          if (iVar3 == 0) goto LAB_0053eb99;
          goto LAB_0053eb51;
        }
      }
      else {
        FUN_00572070();
        iVar3 = FUN_00591d90(pcVar8);
LAB_0053eb51:
        if (iVar3 == 0) goto LAB_0053eb99;
      }
      iVar3 = FUN_005b8550(0xb8a7c6cc);
      if ((iVar3 != 0) &&
         (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001, *(int *)(iVar3 + 0x18) == 5
         )) {
        iVar6 = *(int *)(iVar3 + 100);
        iVar3 = *(int *)(iVar3 + 0x60);
        if (0 < iVar3) {
          do {
            FUN_00514c70(iVar6);
            iVar6 = *(int *)(iVar6 + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
LAB_0053eb99:
  pcVar8 = *(char **)(param_1 + 0x10);
  if (pcVar8 == (char *)0x0) {
    return;
  }
  pcVar5 = pcVar8;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == pcVar8 + 1) {
    return;
  }
  if (DAT_0091d218 < 1) {
    iVar3 = FUN_005b5b70(pcVar8);
    if (iVar3 != 0) goto LAB_0053ebfd;
    iVar3 = FUN_005b7580(pcVar8);
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    FUN_00572070();
    iVar3 = FUN_00591d90(pcVar8);
  }
  if (iVar3 == 0) {
    return;
  }
LAB_0053ebfd:
  iVar3 = FUN_005b8550(0x15a0bcaf);
  if ((iVar3 != 0) &&
     (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001, *(int *)(iVar3 + 0x18) == 5)) {
    iVar6 = *(int *)(iVar3 + 100);
    iVar3 = *(int *)(iVar3 + 0x60);
    if (0 < iVar3) {
      do {
        FUN_00514c70(iVar6);
        iVar6 = *(int *)(iVar6 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

