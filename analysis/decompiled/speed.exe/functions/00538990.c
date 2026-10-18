/* speed.exe 00538990 FUN_00538990; analysis pseudocode, not buildable source.
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

void __thiscall FUN_00538990(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
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
  FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,1);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0(&local_20);
  if (((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(uVar2), iVar3 == 0)) {
    iVar3 = 0;
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
      ((iVar4 = FUN_005b8550(uVar2), iVar4 == 0 ||
       ((iVar4 = *(int *)(iVar4 + 0x54), iVar4 == 0 || (*(int *)(iVar4 + 0x30) != 0x2d02fcd6))))))
     || (*(int *)(iVar4 + 0xc) < *(int *)(iVar4 + 0x10))) {
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
        (iVar3 = FUN_005b8550(uVar2), iVar3 != 0)) && (iVar3 = FUN_005b1360(0x2d02fcd6), iVar3 != 0)
       ) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  local_2c = 2;
  do {
    FUN_00515e20(&local_20,0x20,"Ping_Circle_%d_%d",param_2,local_2c);
    pcVar6 = *(char **)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(&local_20);
    if (pcVar6 == (char *)0x0) {
LAB_00538b4d:
      iVar3 = 0;
    }
    else {
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 == pcVar6 + 1) goto LAB_00538b4d;
      if (DAT_0091d218 < 1) {
        iVar3 = FUN_005b5b70(pcVar6);
        if (iVar3 == 0) {
          iVar3 = FUN_005b7580(pcVar6);
          if (iVar3 == 0) goto LAB_00538b4d;
          goto LAB_00538b39;
        }
      }
      else {
        FUN_00572070();
        iVar3 = FUN_00591d90(pcVar6);
LAB_00538b39:
        if (iVar3 == 0) goto LAB_00538b4d;
      }
      iVar3 = FUN_005b8550(uVar2);
      if (iVar3 == 0) goto LAB_00538b4d;
    }
    pcVar6 = *(char **)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    if (pcVar6 == (char *)0x0) {
LAB_00538bd6:
      uVar2 = *(undefined4 *)(iVar3 + 0x10);
      if ((((*(int *)(param_1 + 0x10) != 0) &&
           (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
          (iVar3 = FUN_005b8550(uVar2), iVar3 != 0)) && (iVar3 = FUN_005b1360(0xccfa), iVar3 != 0))
      {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
    }
    else {
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 == pcVar6 + 1) goto LAB_00538bd6;
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar6);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar6);
          if (iVar4 == 0) goto LAB_00538bd6;
          goto LAB_00538bae;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar6);
LAB_00538bae:
        if (iVar4 == 0) goto LAB_00538bd6;
      }
      iVar4 = FUN_005b8550(uVar2);
      if (((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x54), iVar4 == 0)) ||
         ((*(int *)(iVar4 + 0x30) != 0xccfa || (*(int *)(iVar4 + 0xc) < *(int *)(iVar4 + 0x10)))))
      goto LAB_00538bd6;
    }
    local_2c = local_2c + 1;
  } while (local_2c < 4);
  pcVar6 = *(char **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(&DAT_008f32fc + param_2 * 4);
  if (pcVar6 == (char *)0x0) goto LAB_00538cca;
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == pcVar6 + 1) goto LAB_00538cca;
  if (DAT_0091d218 < 1) {
    iVar3 = FUN_005b5b70(pcVar6);
    if (iVar3 == 0) {
      iVar3 = FUN_005b7580(pcVar6);
      if (iVar3 == 0) goto LAB_00538cca;
      goto LAB_00538ca2;
    }
  }
  else {
    FUN_00572070();
    iVar3 = FUN_00591d90(pcVar6);
LAB_00538ca2:
    if (iVar3 == 0) goto LAB_00538cca;
  }
  iVar3 = FUN_005b8550(uVar2);
  if ((((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x54), iVar3 != 0)) &&
      (*(int *)(iVar3 + 0x30) == 0x16a259)) && (*(int *)(iVar3 + 0x10) <= *(int *)(iVar3 + 0xc))) {
    return;
  }
LAB_00538cca:
  uVar2 = *(undefined4 *)(&DAT_008f32fc + param_2 * 4);
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
     ((iVar3 = FUN_005b8550(uVar2), iVar3 != 0 && (iVar3 = FUN_005b1360(0x16a259), iVar3 != 0)))) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  return;
}

