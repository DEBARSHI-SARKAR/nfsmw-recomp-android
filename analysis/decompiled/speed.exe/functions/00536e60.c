/* speed.exe 00536e60 FUN_00536e60; analysis pseudocode, not buildable source.
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

void __thiscall FUN_00536e60(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_28;
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
  local_28 = 1;
  do {
    FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,local_28);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_005af1c0(&local_20);
    if (pcVar7 == (char *)0x0) {
LAB_00536f41:
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 == pcVar7 + 1) goto LAB_00536f41;
      if (DAT_0091d218 < 1) {
        iVar5 = FUN_005b5b70(pcVar7);
        if (iVar5 == 0) {
          iVar5 = FUN_005b7580(pcVar7);
          if (iVar5 == 0) goto LAB_00536f41;
          goto LAB_00536f2d;
        }
      }
      else {
        FUN_00572070();
        iVar5 = FUN_00591d90(pcVar7);
LAB_00536f2d:
        if (iVar5 == 0) goto LAB_00536f41;
      }
      iVar5 = FUN_005b8550(uVar3);
      if (iVar5 == 0) goto LAB_00536f41;
    }
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    if (pcVar7 == (char *)0x0) {
LAB_00536fc9:
      uVar3 = *(undefined4 *)(iVar5 + 0x10);
      if (((*(int *)(param_1 + 0x10) != 0) &&
          (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
         ((iVar5 = FUN_005b8550(uVar3), iVar5 != 0 && (iVar5 = FUN_005b1360(0x5e40072f), iVar5 != 0)
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
      if (pcVar4 == pcVar7 + 1) goto LAB_00536fc9;
      if (DAT_0091d218 < 1) {
        iVar6 = FUN_005b5b70(pcVar7);
        if (iVar6 == 0) {
          iVar6 = FUN_005b7580(pcVar7);
          if (iVar6 == 0) goto LAB_00536fc9;
          goto LAB_00536fa1;
        }
      }
      else {
        FUN_00572070();
        iVar6 = FUN_00591d90(pcVar7);
LAB_00536fa1:
        if (iVar6 == 0) goto LAB_00536fc9;
      }
      iVar6 = FUN_005b8550(uVar3);
      if ((((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x54), iVar6 == 0)) ||
          (*(int *)(iVar6 + 0x30) != 0x5e40072f)) ||
         (*(int *)(iVar6 + 0xc) < *(int *)(iVar6 + 0x10))) goto LAB_00536fc9;
    }
    local_28 = local_28 + 1;
  } while (local_28 < 4);
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if (pcVar7 == (char *)0x0) goto LAB_005370c2;
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar7 + 1) goto LAB_005370c2;
  if (DAT_0091d218 < 1) {
    iVar5 = FUN_005b5b70(pcVar7);
    if (iVar5 == 0) {
      iVar5 = FUN_005b7580(pcVar7);
      if (iVar5 == 0) goto LAB_005370c2;
      goto LAB_0053709a;
    }
  }
  else {
    FUN_00572070();
    iVar5 = FUN_00591d90(pcVar7);
LAB_0053709a:
    if (iVar5 == 0) goto LAB_005370c2;
  }
  iVar5 = FUN_005b8550(puVar2);
  if (((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x54), iVar5 != 0)) &&
     ((*(int *)(iVar5 + 0x30) == 0x1ca7c0 && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc))))) {
    return;
  }
LAB_005370c2:
  puVar2 = (&PTR_s_UI_PC_LAN_ServerSelect_fng_008f3288)[param_2];
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
      (iVar5 = FUN_005b8550(puVar2), iVar5 != 0)) && (iVar5 = FUN_005b1360(0x1ca7c0), iVar5 != 0)) {
    FUN_005b8400(iVar5,0);
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  return;
}

