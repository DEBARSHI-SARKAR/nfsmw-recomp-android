/* speed.exe 00538540 FUN_00538540; analysis pseudocode, not buildable source.
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

void __thiscall FUN_00538540(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
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
    pcVar6 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(&local_20);
    if (pcVar6 == (char *)0x0) {
LAB_00538627:
      iVar4 = 0;
    }
    else {
      pcVar3 = pcVar6;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar6 + 1) goto LAB_00538627;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar6);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar6);
          if (iVar4 == 0) goto LAB_00538627;
          goto LAB_00538607;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar6);
LAB_00538607:
        if (iVar4 == 0) goto LAB_00538627;
      }
      iVar4 = FUN_005b8550(uVar2);
      if (iVar4 == 0) goto LAB_00538627;
    }
    pcVar6 = *(char **)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(iVar4 + 0x10);
    if (pcVar6 == (char *)0x0) {
LAB_005386b9:
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      if (((*(int *)(param_1 + 0x10) != 0) &&
          (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
         ((iVar4 = FUN_005b8550(uVar2), iVar4 != 0 && (iVar4 = FUN_005b1360(0x76d72a2d), iVar4 != 0)
          ))) {
        FUN_005b8400(iVar4,0);
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
    }
    else {
      pcVar3 = pcVar6;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar6 + 1) goto LAB_005386b9;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar6);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar6);
          if (iVar5 == 0) goto LAB_005386b9;
          goto LAB_00538687;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar6);
LAB_00538687:
        if (iVar5 == 0) goto LAB_005386b9;
      }
      iVar5 = FUN_005b8550(uVar2);
      if ((((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x54), iVar5 == 0)) ||
          (*(int *)(iVar5 + 0x30) != 0x76d72a2d)) ||
         (*(int *)(iVar5 + 0xc) < *(int *)(iVar5 + 0x10))) goto LAB_005386b9;
    }
    local_2c = local_2c + 1;
  } while (local_2c < 3);
  FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,3);
  pcVar6 = *(char **)(param_1 + 0x10);
  uVar2 = FUN_005af1c0(&local_20);
  if (pcVar6 == (char *)0x0) {
LAB_005387b8:
    iVar4 = 0;
  }
  else {
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == pcVar6 + 1) goto LAB_005387b8;
    if (DAT_0091d218 < 1) {
      iVar4 = FUN_005b5b70(pcVar6);
      if (iVar4 == 0) {
        iVar4 = FUN_005b7580(pcVar6);
        if (iVar4 == 0) goto LAB_005387b8;
        goto LAB_00538798;
      }
    }
    else {
      FUN_00572070();
      iVar4 = FUN_00591d90(pcVar6);
LAB_00538798:
      if (iVar4 == 0) goto LAB_005387b8;
    }
    iVar4 = FUN_005b8550(uVar2);
    if (iVar4 == 0) goto LAB_005387b8;
  }
  pcVar6 = *(char **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(iVar4 + 0x10);
  if (pcVar6 == (char *)0x0) {
LAB_0053884a:
    uVar2 = *(undefined4 *)(iVar4 + 0x10);
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
        (iVar4 = FUN_005b8550(uVar2), iVar4 != 0)) && (iVar4 = FUN_005b1360(0xccfa), iVar4 != 0)) {
      FUN_005b8400(iVar4,0);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
  }
  else {
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == pcVar6 + 1) goto LAB_0053884a;
    if (DAT_0091d218 < 1) {
      iVar5 = FUN_005b5b70(pcVar6);
      if (iVar5 == 0) {
        iVar5 = FUN_005b7580(pcVar6);
        if (iVar5 == 0) goto LAB_0053884a;
        goto LAB_00538818;
      }
    }
    else {
      FUN_00572070();
      iVar5 = FUN_00591d90(pcVar6);
LAB_00538818:
      if (iVar5 == 0) goto LAB_0053884a;
    }
    iVar5 = FUN_005b8550(uVar2);
    if (((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x54), iVar5 == 0)) ||
       ((*(int *)(iVar5 + 0x30) != 0xccfa || (*(int *)(iVar5 + 0xc) < *(int *)(iVar5 + 0x10)))))
    goto LAB_0053884a;
  }
  pcVar6 = *(char **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(&DAT_008f32fc + param_2 * 4);
  if (pcVar6 == (char *)0x0) goto LAB_00538929;
  pcVar3 = pcVar6;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == pcVar6 + 1) goto LAB_00538929;
  if (DAT_0091d218 < 1) {
    iVar4 = FUN_005b5b70(pcVar6);
    if (iVar4 == 0) {
      iVar4 = FUN_005b7580(pcVar6);
      if (iVar4 == 0) goto LAB_00538929;
      goto LAB_005388fb;
    }
  }
  else {
    FUN_00572070();
    iVar4 = FUN_00591d90(pcVar6);
LAB_005388fb:
    if (iVar4 == 0) goto LAB_00538929;
  }
  iVar4 = FUN_005b8550(uVar2);
  if (((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x54), iVar4 != 0)) &&
     ((*(int *)(iVar4 + 0x30) == 0x16a259 && (*(int *)(iVar4 + 0x10) <= *(int *)(iVar4 + 0xc))))) {
    return;
  }
LAB_00538929:
  uVar2 = *(undefined4 *)(&DAT_008f32fc + param_2 * 4);
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
     ((iVar4 = FUN_005b8550(uVar2), iVar4 != 0 && (iVar4 = FUN_005b1360(0x16a259), iVar4 != 0)))) {
    FUN_005b8400(iVar4,0);
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  return;
}

