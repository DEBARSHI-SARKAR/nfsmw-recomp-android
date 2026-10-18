/* speed.exe 00536ac0 FUN_00536ac0; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 005b8550 FUN_005b8550
 * calls 00591d90 FUN_00591d90
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 00516af0 FUN_00516af0
 * calls 00572070 FUN_00572070
 */

void __thiscall FUN_00536ac0(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
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
  FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,1);
  iVar4 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_005af1c0(&local_20);
  if (((iVar4 == 0) || (iVar4 = FUN_00516af0(iVar4), iVar4 == 0)) ||
     (iVar4 = FUN_005b8550(uVar3), iVar4 == 0)) {
    iVar4 = 0;
  }
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 == 0)) ||
      ((iVar5 = FUN_005b8550(uVar3), iVar5 == 0 ||
       ((iVar5 = *(int *)(iVar5 + 0x54), iVar5 == 0 || (*(int *)(iVar5 + 0x30) != 0x2d02fcd6))))))
     || (*(int *)(iVar5 + 0xc) < *(int *)(iVar5 + 0x10))) {
    uVar3 = *(undefined4 *)(iVar4 + 0x10);
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
        (iVar4 = FUN_005b8550(uVar3), iVar4 != 0)) && (iVar4 = FUN_005b1360(0x2d02fcd6), iVar4 != 0)
       ) {
      FUN_005b8400(iVar4,0);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
  }
  local_2c = 2;
  do {
    FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,local_2c);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(&local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00536c7d:
      iVar4 = 0;
    }
    else {
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == pcVar7 + 1) goto LAB_00536c7d;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar7);
          if (iVar4 == 0) goto LAB_00536c7d;
          goto LAB_00536c69;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar7);
LAB_00536c69:
        if (iVar4 == 0) goto LAB_00536c7d;
      }
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 == 0) goto LAB_00536c7d;
    }
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(iVar4 + 0x10);
    if (pcVar7 == (char *)0x0) {
LAB_00536d06:
      uVar3 = *(undefined4 *)(iVar4 + 0x10);
      if ((((*(int *)(param_1 + 0x10) != 0) &&
           (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
          (iVar4 = FUN_005b8550(uVar3), iVar4 != 0)) && (iVar4 = FUN_005b1360(0xccfa), iVar4 != 0))
      {
        FUN_005b8400(iVar4,0);
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
    }
    else {
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == pcVar7 + 1) goto LAB_00536d06;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00536d06;
          goto LAB_00536cde;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00536cde:
        if (iVar5 == 0) goto LAB_00536d06;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x54), iVar5 == 0)) ||
         ((*(int *)(iVar5 + 0x30) != 0xccfa || (*(int *)(iVar5 + 0xc) < *(int *)(iVar5 + 0x10)))))
      goto LAB_00536d06;
    }
    local_2c = local_2c + 1;
  } while (local_2c < 4);
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if (pcVar7 == (char *)0x0) goto LAB_00536dfa;
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == pcVar7 + 1) goto LAB_00536dfa;
  if (DAT_0091d218 < 1) {
    iVar4 = FUN_005b5b70(pcVar7);
    if (iVar4 == 0) {
      iVar4 = FUN_005b7580(pcVar7);
      if (iVar4 == 0) goto LAB_00536dfa;
      goto LAB_00536dd2;
    }
  }
  else {
    FUN_00572070();
    iVar4 = FUN_00591d90(pcVar7);
LAB_00536dd2:
    if (iVar4 == 0) goto LAB_00536dfa;
  }
  iVar4 = FUN_005b8550(puVar2);
  if ((((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x54), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0x30) == 0x16a259)) && (*(int *)(iVar4 + 0x10) <= *(int *)(iVar4 + 0xc))) {
    return;
  }
LAB_00536dfa:
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 != 0)) &&
     ((iVar4 = FUN_005b8550(puVar2), iVar4 != 0 && (iVar4 = FUN_005b1360(0x16a259), iVar4 != 0)))) {
    FUN_005b8400(iVar4,0);
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  return;
}

