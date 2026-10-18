/* speed.exe 00536670 FUN_00536670; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 00572070 FUN_00572070
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00536670(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_2c;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_20 = 0;
  local_1 = 0;
  local_2c = 1;
  do {
    FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,local_2c);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(&local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00536757:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00536757;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00536757;
          goto LAB_00536737;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00536737:
        if (iVar5 == 0) goto LAB_00536757;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (iVar5 == 0) goto LAB_00536757;
    }
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    if (pcVar7 == (char *)0x0) {
LAB_005367e9:
      uVar3 = *(undefined4 *)(iVar5 + 0x10);
      if (((*(int *)(param_1 + 0x10) != 0) &&
          (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
         ((iVar5 = FUN_005b8550(uVar3), iVar5 != 0 && (iVar5 = FUN_005b1360(0x76d72a2d), iVar5 != 0)
          ))) {
        FUN_005b8400(iVar5,0);
        *(undefined4 *)(iVar5 + 0x10) = 0;
      }
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_005367e9;
      if (DAT_0091d218 < 1) {
        iVar6 = FUN_005b5b70(pcVar7);
        if (iVar6 == 0) {
          iVar6 = FUN_005b7580(pcVar7);
          if (iVar6 == 0) goto LAB_005367e9;
          goto LAB_005367b7;
        }
      }
      else {
        FUN_00572070();
        iVar6 = FUN_00591d90(pcVar7);
LAB_005367b7:
        if (iVar6 == 0) goto LAB_005367e9;
      }
      iVar6 = FUN_005b8550(uVar3);
      if ((((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x54), iVar6 == 0)) ||
          (*(int *)(iVar6 + 0x30) != 0x76d72a2d)) ||
         (*(int *)(iVar6 + 0xc) < *(int *)(iVar6 + 0x10))) goto LAB_005367e9;
    }
    local_2c = local_2c + 1;
  } while (local_2c < 3);
  FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,3);
  pcVar7 = *(char **)(param_1 + 0x10);
  uVar3 = FUN_005af1c0(&local_20);
  if (pcVar7 == (char *)0x0) {
LAB_005368e8:
    iVar5 = 0;
  }
  else {
    pcVar4 = pcVar7;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 == pcVar7 + 1) goto LAB_005368e8;
    if (DAT_0091d218 < 1) {
      iVar5 = FUN_005b5b70(pcVar7);
      if (iVar5 == 0) {
        iVar5 = FUN_005b7580(pcVar7);
        if (iVar5 == 0) goto LAB_005368e8;
        goto LAB_005368c8;
      }
    }
    else {
      FUN_00572070();
      iVar5 = FUN_00591d90(pcVar7);
LAB_005368c8:
      if (iVar5 == 0) goto LAB_005368e8;
    }
    iVar5 = FUN_005b8550(uVar3);
    if (iVar5 == 0) goto LAB_005368e8;
  }
  pcVar7 = *(char **)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(iVar5 + 0x10);
  if (pcVar7 == (char *)0x0) {
LAB_0053697a:
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(uVar3), iVar5 != 0)) && (iVar5 = FUN_005b1360(0xccfa), iVar5 != 0)) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  else {
    pcVar4 = pcVar7;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 == pcVar7 + 1) goto LAB_0053697a;
    if (DAT_0091d218 < 1) {
      iVar6 = FUN_005b5b70(pcVar7);
      if (iVar6 == 0) {
        iVar6 = FUN_005b7580(pcVar7);
        if (iVar6 == 0) goto LAB_0053697a;
        goto LAB_00536948;
      }
    }
    else {
      FUN_00572070();
      iVar6 = FUN_00591d90(pcVar7);
LAB_00536948:
      if (iVar6 == 0) goto LAB_0053697a;
    }
    iVar6 = FUN_005b8550(uVar3);
    if (((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x54), iVar6 == 0)) ||
       ((*(int *)(iVar6 + 0x30) != 0xccfa || (*(int *)(iVar6 + 0xc) < *(int *)(iVar6 + 0x10)))))
    goto LAB_0053697a;
  }
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if (pcVar7 == (char *)0x0) goto LAB_00536a59;
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar7 + 1) goto LAB_00536a59;
  if (DAT_0091d218 < 1) {
    iVar5 = FUN_005b5b70(pcVar7);
    if (iVar5 == 0) {
      iVar5 = FUN_005b7580(pcVar7);
      if (iVar5 == 0) goto LAB_00536a59;
      goto LAB_00536a2b;
    }
  }
  else {
    FUN_00572070();
    iVar5 = FUN_00591d90(pcVar7);
LAB_00536a2b:
    if (iVar5 == 0) goto LAB_00536a59;
  }
  iVar5 = FUN_005b8550(puVar2);
  if (((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x54), iVar5 != 0)) &&
     ((*(int *)(iVar5 + 0x30) == 0x16a259 && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc))))) {
    return;
  }
LAB_00536a59:
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
     ((iVar5 = FUN_005b8550(puVar2), iVar5 != 0 && (iVar5 = FUN_005b1360(0x16a259), iVar5 != 0)))) {
    FUN_005b8400(iVar5,0);
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  return;
}

