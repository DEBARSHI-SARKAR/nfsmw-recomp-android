/* speed.exe 0055c450 FUN_0055c450; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00652ad0 _malloc
 * calls 00554ad0 FUN_00554ad0
 * calls 005b8550 FUN_005b8550
 * calls 0051dcf0 FUN_0051dcf0
 * calls 0056bc10 FUN_0056bc10
 * calls 00591d90 FUN_00591d90
 * calls 005868e0 FUN_005868e0
 * calls 005a8cb0 FUN_005a8cb0
 * calls 005922b0 FUN_005922b0
 * calls 005926b0 FUN_005926b0
 * calls 00572070 FUN_00572070
 * calls 005af1c0 FUN_005af1c0
 * calls 005b7580 FUN_005b7580
 * calls 00515e20 FUN_00515e20
 */

void __fastcall FUN_0055c450(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined1 local_24 [36];
  
  local_38 = 1;
  local_30 = 9;
  do {
    local_34 = _malloc(0x2c);
    if (local_34 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      puVar5 = local_34 + 3;
      *local_34 = &PTR_FUN_0089d348;
      *puVar5 = puVar5;
      local_34[4] = puVar5;
      local_34[5] = 0;
      local_34[9] = 0;
      local_34[8] = 0;
      local_34[7] = 0;
      local_34[6] = 0;
      *(undefined1 *)(local_34 + 10) = 1;
    }
    FUN_00515e20(local_24,0x24,"scroll_text_%d",local_38);
    pcVar9 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_24);
    if (pcVar9 == (char *)0x0) {
LAB_0055c551:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar9;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar9 + 1) goto LAB_0055c551;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar9);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar9);
          if (iVar4 == 0) goto LAB_0055c551;
          goto LAB_0055c533;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar9);
LAB_0055c533:
        if (iVar4 == 0) goto LAB_0055c551;
      }
      iVar4 = FUN_005b8550(uVar2);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) != 2)) goto LAB_0055c551;
    }
    puVar5 = _malloc(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_0089c2bc;
      puVar5[3] = iVar4;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined4 *)local_34[4];
    puVar8 = local_34 + 3;
    *puVar6 = puVar5;
    local_34[4] = puVar5;
    puVar5[1] = puVar6;
    *puVar5 = puVar8;
    pcVar9 = *(char **)(param_1 + 0x10);
    if (pcVar9 == (char *)0x0) {
LAB_0055c602:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar9;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar9 + 1) goto LAB_0055c602;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar9);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar9);
          if (iVar4 == 0) goto LAB_0055c602;
          goto LAB_0055c5e4;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar9);
LAB_0055c5e4:
        if (iVar4 == 0) goto LAB_0055c602;
      }
      iVar4 = FUN_005b8550(0x116d2d5c);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) != 2)) goto LAB_0055c602;
    }
    puVar5 = _malloc(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_0089c2bc;
      puVar5[3] = iVar4;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined4 *)local_34[4];
    *puVar6 = puVar5;
    local_34[4] = puVar5;
    puVar5[1] = puVar6;
    *puVar5 = puVar8;
    FUN_00515e20(local_24,0x24,"scroll_racers_%d",local_38);
    pcVar9 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_24);
    if (pcVar9 == (char *)0x0) {
LAB_0055c6d2:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar9;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar9 + 1) goto LAB_0055c6d2;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar9);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar9);
          if (iVar4 == 0) goto LAB_0055c6d2;
          goto LAB_0055c6b4;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar9);
LAB_0055c6b4:
        if (iVar4 == 0) goto LAB_0055c6d2;
      }
      iVar4 = FUN_005b8550(uVar2);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) != 2)) goto LAB_0055c6d2;
    }
    puVar5 = _malloc(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_0089c2bc;
      puVar5[3] = iVar4;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined4 *)local_34[4];
    *puVar6 = puVar5;
    local_34[4] = puVar5;
    puVar5[1] = puVar6;
    *puVar5 = puVar8;
    FUN_00515e20(local_24,0x24,"High_Light_%d",local_38);
    pcVar9 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_24);
    if (pcVar9 == (char *)0x0) {
LAB_0055c795:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar9;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar9 + 1) goto LAB_0055c795;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar9);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar9);
          if (iVar4 == 0) goto LAB_0055c795;
          goto LAB_0055c785;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar9);
LAB_0055c785:
        if (iVar4 == 0) goto LAB_0055c795;
      }
      iVar4 = FUN_005b8550(uVar2);
      if (iVar4 == 0) goto LAB_0055c795;
    }
    local_34[5] = iVar4;
    FUN_005922b0(local_34);
    local_38 = local_38 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_FUN_0089d348;
    *puVar6 = puVar6;
    puVar5[4] = puVar6;
    puVar5[5] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 10) = 1;
  }
  pcVar9 = *(char **)(param_1 + 0x10);
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar9 + 1) {
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar9);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar9);
          if (iVar4 == 0) goto LAB_0055c878;
          goto LAB_0055c856;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar9);
LAB_0055c856:
        if (iVar4 == 0) goto LAB_0055c878;
      }
      iVar4 = FUN_005b8550(0x980822b3);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 2)) goto LAB_0055c87a;
    }
  }
LAB_0055c878:
  iVar4 = 0;
LAB_0055c87a:
  puVar6 = _malloc(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_0089c2bc;
    puVar6[3] = iVar4;
    piVar7 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)puVar5[4];
  *puVar6 = piVar7;
  puVar5[4] = piVar7;
  *piVar7 = (int)(puVar5 + 3);
  piVar7[1] = (int)puVar6;
  FUN_005922b0(puVar5);
  puVar5 = _malloc(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_FUN_0089d344;
    *puVar6 = puVar6;
    puVar5[4] = puVar6;
    *(undefined1 *)(puVar5 + 5) = 1;
  }
  uVar10 = 0;
  uVar2 = FUN_0056bc10(0x63d57a0,0);
  FUN_0051dcf0(uVar2,uVar10);
  FUN_005868e0(puVar5);
  FUN_005a8cb0();
  FUN_005926b0(1);
  puVar5 = _malloc(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_FUN_0089d344;
    *puVar6 = puVar6;
    puVar5[4] = puVar6;
    *(undefined1 *)(puVar5 + 5) = 1;
  }
  uVar10 = 0;
  uVar2 = FUN_0056bc10(0x7ad18f04,0);
  FUN_0051dcf0(uVar2,uVar10);
  FUN_005868e0(puVar5);
  FUN_005a8cb0();
  FUN_005926b0(1);
  puVar5 = _malloc(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_FUN_0089d344;
    *puVar6 = puVar6;
    puVar5[4] = puVar6;
    *(undefined1 *)(puVar5 + 5) = 1;
  }
  uVar10 = 0;
  uVar2 = FUN_0056bc10(0x39751bdf,0);
  FUN_0051dcf0(uVar2,uVar10);
  FUN_005868e0(puVar5);
  FUN_005a8cb0();
  FUN_005926b0(1);
  puVar5 = _malloc(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_FUN_0089d344;
    *puVar6 = puVar6;
    puVar5[4] = puVar6;
    *(undefined1 *)(puVar5 + 5) = 1;
  }
  uVar10 = 0;
  uVar2 = FUN_0056bc10(0x813251f6,0);
  FUN_0051dcf0(uVar2,uVar10);
  FUN_005868e0(puVar5);
  FUN_005a8cb0();
  FUN_005926b0(1);
  FUN_00554ad0();
  return;
}

