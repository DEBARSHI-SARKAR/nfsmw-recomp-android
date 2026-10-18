/* speed.exe 005504f0 FUN_005504f0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b5b70 FUN_005b5b70
 * calls 00515e20 FUN_00515e20
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 005922b0 FUN_005922b0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00572070 FUN_00572070
 * calls 0056bc30 FUN_0056bc30
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_005504f0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  int local_a0;
  undefined4 *local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [132];
  
  local_a0 = 0;
  if (0 < *(int *)(param_1 + 0xf8)) {
    do {
      local_98 = _malloc(0x2c);
      if (local_98 == (undefined4 *)0x0) {
        local_98 = (undefined4 *)0x0;
      }
      else {
        puVar7 = local_98 + 3;
        *puVar7 = puVar7;
        local_98[4] = puVar7;
        local_98[5] = 0;
        local_98[9] = 0;
        local_98[8] = 0;
        local_98[7] = 0;
        local_98[6] = 0;
        *(undefined1 *)(local_98 + 10) = 1;
        *local_98 = &PTR_FUN_0089d358;
      }
      pcVar12 = *(char **)(param_1 + 0x10);
      iVar9 = local_a0 + 1;
      uVar4 = FUN_00573140("MOUSE_REGION_%d",iVar9);
      if (pcVar12 == (char *)0x0) {
LAB_005505dd:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_005505dd;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_005505dd;
            goto LAB_005505c9;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_005505c9:
          if (iVar6 == 0) goto LAB_005505dd;
        }
        iVar6 = FUN_005b8550(uVar4);
        if (iVar6 == 0) goto LAB_005505dd;
      }
      local_98[5] = iVar6;
      pcVar12 = *(char **)(param_1 + 0x10);
      if (pcVar12 == (char *)0x0) {
LAB_0055065c:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_0055065c;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_0055065c;
            goto LAB_00550648;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_00550648:
          if (iVar6 == 0) goto LAB_0055065c;
        }
        iVar6 = FUN_005b8550(local_a0 + -0x1bab165b);
        if (iVar6 == 0) goto LAB_0055065c;
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
      puVar8 = (undefined4 *)local_98[4];
      puVar10 = local_98 + 3;
      *puVar8 = puVar7;
      local_98[4] = puVar7;
      puVar7[1] = puVar8;
      *puVar7 = puVar10;
      pcVar12 = *(char **)(param_1 + 0x10);
      if (pcVar12 == (char *)0x0) {
LAB_0055070a:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_0055070a;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_0055070a;
            goto LAB_005506ec;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_005506ec:
          if (iVar6 == 0) goto LAB_0055070a;
        }
        iVar6 = FUN_005b8550(local_a0 + 0x66646fc4);
        if (iVar6 == 0) goto LAB_0055070a;
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
      puVar8 = (undefined4 *)local_98[4];
      *puVar8 = puVar7;
      local_98[4] = puVar7;
      puVar7[1] = puVar8;
      *puVar7 = puVar10;
      pcVar12 = *(char **)(param_1 + 0x10);
      if (pcVar12 == (char *)0x0) {
LAB_005507bc:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_005507bc;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_005507bc;
            goto LAB_005507a4;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_005507a4:
          if (iVar6 == 0) goto LAB_005507bc;
        }
        iVar6 = FUN_005b8550(local_a0 + 0x2890c8af);
        if (iVar6 == 0) goto LAB_005507bc;
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
      puVar8 = (undefined4 *)local_98[4];
      *puVar8 = puVar7;
      local_98[4] = puVar7;
      puVar7[1] = puVar8;
      *puVar7 = puVar10;
      pcVar12 = *(char **)(param_1 + 0x10);
      if (pcVar12 == (char *)0x0) {
LAB_00550863:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_00550863;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_00550863;
            goto LAB_00550845;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_00550845:
          if (iVar6 == 0) goto LAB_00550863;
        }
        iVar6 = FUN_005b8550(local_a0 + 0x77bd189e);
        if (iVar6 == 0) goto LAB_00550863;
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
      puVar8 = (undefined4 *)local_98[4];
      *puVar8 = puVar7;
      local_98[4] = puVar7;
      puVar7[1] = puVar8;
      *puVar7 = puVar10;
      pcVar12 = *(char **)(param_1 + 0x10);
      if (pcVar12 == (char *)0x0) {
LAB_00550911:
        iVar6 = 0;
      }
      else {
        pcVar5 = pcVar12;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == pcVar12 + 1) goto LAB_00550911;
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_00550911;
            goto LAB_005508f9;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_005508f9:
          if (iVar6 == 0) goto LAB_00550911;
        }
        iVar6 = FUN_005b8550(local_a0 + -0xc1423b2);
        if (iVar6 == 0) goto LAB_00550911;
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
      puVar8 = (undefined4 *)local_98[4];
      *puVar8 = puVar7;
      local_98[4] = puVar7;
      puVar7[1] = puVar8;
      *puVar7 = puVar10;
      FUN_005922b0(local_98);
      local_a0 = iVar9;
    } while (iVar9 < *(int *)(param_1 + 0xf8));
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0xfc)) {
    do {
      puVar8 = _malloc(0x20);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        puVar7 = puVar8 + 3;
        *puVar7 = puVar7;
        puVar8[4] = puVar7;
        puVar8[6] = 0;
        *(undefined1 *)(puVar8 + 5) = 1;
        *puVar8 = &PTR_FUN_0089d354;
        *(undefined1 *)(puVar8 + 7) = 0;
        puVar7 = puVar8;
      }
      FUN_005868e0(puVar7);
      iVar6 = iVar9 + 1;
      FUN_00515e20(local_90,8,&DAT_0089d368,iVar6);
      FUN_0051dcf0(local_90,0);
      iVar3 = *(int *)(DAT_0091cf90 + 0x10);
      iVar11 = iVar3 + 0x324;
      FUN_0051dcf0(*(undefined4 *)
                    (*(int *)(DAT_009123d0 + *(int *)(iVar3 + 0x324 + iVar9 * 8) * 4) + 4),0);
      FUN_0051dcf0(**(undefined4 **)(DAT_009123d0 + *(int *)(iVar11 + iVar9 * 8) * 4),0);
      FUN_0051dcf0(*(undefined4 *)(*(int *)(DAT_009123d0 + *(int *)(iVar11 + iVar9 * 8) * 4) + 8),0)
      ;
      puVar7[6] = *(undefined4 *)(iVar11 + iVar9 * 8);
      uVar2 = *(undefined1 *)(iVar3 + 0x328 + iVar9 * 8);
      *(undefined1 *)(puVar7 + 7) = uVar2;
      switch(uVar2) {
      case 0:
        uVar4 = 0x9cce9f86;
        break;
      case 1:
        uVar4 = 0x5278c50b;
        break;
      case 2:
        uVar4 = 0x5c1b351c;
        break;
      case 3:
        uVar4 = 0x9cce64c4;
        break;
      default:
        uVar4 = 0;
      }
      FUN_0056bc30(local_88,0x80,uVar4);
      FUN_0051dcf0(local_88,0);
      iVar9 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0xfc));
  }
  FUN_005926b0(1);
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x7c);
  if (cVar1 == '\0') {
    uVar4 = 0x4ca36b89;
  }
  else if (cVar1 == '\x01') {
    uVar4 = 0xa9c9c8f7;
  }
  else {
    uVar4 = 0;
  }
  iVar9 = *(int *)(param_1 + 0xe4);
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar9 + 0x60) = uVar4;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar9);
    }
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

