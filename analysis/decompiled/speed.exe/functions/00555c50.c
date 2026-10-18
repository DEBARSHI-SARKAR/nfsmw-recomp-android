/* speed.exe 00555c50 FUN_00555c50; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 005b1360 FUN_005b1360
 * calls 0045d380 FUN_0045d380
 * calls 0079bac0 FUN_0079bac0
 * calls 00525220 FUN_00525220
 * calls 0056e340 FUN_0056e340
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005929d0 FUN_005929d0
 * calls 005b7580 FUN_005b7580
 * calls 00537f60 FUN_00537f60
 * calls 00591d90 FUN_00591d90
 * calls 00586760 FUN_00586760
 * calls 0079ca30 FUN_0079ca30
 * calls 00794f80 FUN_00794f80
 * calls 005a5790 FUN_005a5790
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 0078bbe0 FUN_0078bbe0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 005b8400 FUN_005b8400
 * calls 0059b710 FUN_0059b710
 * calls 00555a90 FUN_00555a90
 * calls 00460d20 FUN_00460d20
 * calls 00586cf0 FUN_00586cf0
 * calls 00537d60 FUN_00537d60
 * calls 00592410 FUN_00592410
 * calls 00586d40 FUN_00586d40
 */

void __fastcall FUN_00555c50(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int local_24;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  FUN_0079bac0();
  iVar3 = FUN_0078bcc0();
  FUN_0079ca30();
  FUN_0078bbe0();
  iVar4 = FUN_00586cf0(*(undefined4 *)(param_1 + 0x5c));
  iVar10 = *(int *)(param_1 + 0x54);
  uVar5 = FUN_0056e340();
  iVar6 = FUN_00573140(uVar5);
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if ((iVar3 == 0) || (iVar7 = FUN_00794f80(), *(char *)(iVar7 + 0x71) == '\x01')) {
    FUN_00555a90();
    return;
  }
  if ((*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x1188)) && (iVar10 != 0)) {
    local_18 = FUN_00573140(iVar10 + 0x2a);
  }
  FUN_00586d40();
  FUN_00537f60();
  iVar10 = *(int *)(iVar3 + 0x24);
  if (iVar10 < *(int *)(iVar3 + 0x20)) {
    do {
      FUN_00537d60(iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(iVar3 + 0x20));
  }
  local_1c = *(int *)(iVar3 + 0x20);
  local_24 = local_1c;
  if ((int)local_1c < (int)(uint)DAT_0089f6fc) {
    do {
      local_24 = local_24 + 1;
      puVar8 = _malloc(0x44);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar1 = puVar8 + 3;
        *puVar1 = puVar1;
        puVar8[4] = puVar1;
        *(undefined1 *)(puVar8 + 5) = 1;
        *puVar8 = &PTR_FUN_0089dd2c;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        *(undefined1 *)(puVar8 + 10) = 0;
        *(undefined1 *)((int)puVar8 + 0x29) = 0;
        puVar8[0xf] = 0xffffffff;
        *(undefined1 *)(puVar8 + 0x10) = 0;
        *(undefined1 *)((int)puVar8 + 0x2a) = 0;
      }
      FUN_0051dcf0(&DAT_00890978,0);
      FUN_00515e20((int)puVar8 + 0x2a,0x10,&DAT_0089c8d0);
      FUN_005868e0(puVar8);
      FUN_005a5790(puVar8);
      pcVar11 = *(char **)(param_1 + 0x10);
      uVar5 = FUN_00573140("READY_INDICATOR_%d",local_24);
      if (pcVar11 != (char *)0x0) {
        pcVar9 = pcVar11;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        if (pcVar9 != pcVar11 + 1) {
          if (DAT_0091d218 < 1) {
            iVar10 = FUN_005b5b70(pcVar11);
            if (iVar10 == 0) {
              iVar10 = FUN_005b7580(pcVar11);
              if (iVar10 == 0) goto LAB_00555e5a;
              goto LAB_00555e25;
            }
          }
          else {
            FUN_00572070();
            iVar10 = FUN_00591d90(pcVar11);
LAB_00555e25:
            if (iVar10 == 0) goto LAB_00555e5a;
          }
          iVar10 = FUN_005b8550(uVar5);
          if ((iVar10 != 0) && (iVar10 = FUN_005b1360(0x16a259), iVar10 != 0)) {
            FUN_005b8400(iVar10,0);
            *(undefined4 *)(iVar10 + 0x10) = 0;
          }
        }
      }
LAB_00555e5a:
      pcVar11 = *(char **)(param_1 + 0x10);
      uVar5 = FUN_00573140("STATUS_%d",local_24);
      if (pcVar11 != (char *)0x0) {
        pcVar9 = pcVar11;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        if (pcVar9 != pcVar11 + 1) {
          if (DAT_0091d218 < 1) {
            iVar10 = FUN_005b5b70(pcVar11);
            if (iVar10 == 0) {
              iVar10 = FUN_005b7580(pcVar11);
              if (iVar10 == 0) goto LAB_00555f0a;
              goto LAB_00555ed5;
            }
          }
          else {
            FUN_00572070();
            iVar10 = FUN_00591d90(pcVar11);
LAB_00555ed5:
            if (iVar10 == 0) goto LAB_00555f0a;
          }
          iVar10 = FUN_005b8550(uVar5);
          if ((iVar10 != 0) && (iVar10 = FUN_005b1360(0x16a259), iVar10 != 0)) {
            FUN_005b8400(iVar10,0);
            *(undefined4 *)(iVar10 + 0x10) = 0;
          }
        }
      }
LAB_00555f0a:
      pcVar11 = *(char **)(param_1 + 0x10);
      uVar5 = FUN_00573140("HIGH_LIGHT_%d",local_24);
      if (pcVar11 != (char *)0x0) {
        pcVar9 = pcVar11;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        if (pcVar9 != pcVar11 + 1) {
          if (DAT_0091d218 < 1) {
            iVar10 = FUN_005b5b70(pcVar11);
            if (iVar10 == 0) {
              iVar10 = FUN_005b7580(pcVar11);
              if (iVar10 == 0) goto LAB_00555fba;
              goto LAB_00555f85;
            }
          }
          else {
            FUN_00572070();
            iVar10 = FUN_00591d90(pcVar11);
LAB_00555f85:
            if (iVar10 == 0) goto LAB_00555fba;
          }
          iVar10 = FUN_005b8550(uVar5);
          if ((iVar10 != 0) && (iVar10 = FUN_005b1360(0x7ab5521a), iVar10 != 0)) {
            FUN_005b8400(iVar10,0);
            *(undefined4 *)(iVar10 + 0x10) = 0;
          }
        }
      }
LAB_00555fba:
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)(uint)DAT_0089f6fc);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x38) + -4;
  }
  local_1c = 1;
  if (1 < *(uint *)(param_1 + 0x48)) {
    do {
      if (*(int *)(iVar10 + 4) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar10 + 4) + -4;
      }
      iVar3 = FUN_00592410(iVar10);
      iVar7 = FUN_00573140(iVar3 + 0x2a);
      if (((local_18 != 0) && (local_18 == iVar7)) &&
         (iVar3 = FUN_00460d20(iVar3 + 0x2a,&DAT_00890978), iVar3 != 0)) {
        local_10 = iVar10;
      }
      if (iVar6 == iVar7) {
        local_14 = iVar10;
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(uint *)(param_1 + 0x48));
  }
  FUN_0059b710(1);
  if ((*(char *)(param_1 + 0x119e) == '\0') && (local_14 != 0)) {
    *(undefined1 *)(param_1 + 0x119e) = 1;
  }
  else {
    local_14 = local_10;
    if (local_10 == 0) {
      if (iVar4 != 0) {
        iVar4 = iVar4 + -1;
      }
      local_14 = FUN_0045d380(iVar4);
      if (local_14 == 0) {
        local_14 = 0;
      }
      else {
        local_14 = local_14 + -4;
      }
    }
  }
  FUN_005929d0(local_14);
  DAT_0091ca80 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  iVar10 = *(int *)(param_1 + 0x54);
  if (iVar10 != 0) {
    uVar5 = FUN_0056e340();
    iVar10 = FUN_00460d20(iVar10 + 0x2a,uVar5);
    if (iVar10 == 0) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x478f18d7,0x36282214);
      return;
    }
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x478f18d7,0x552094e0);
  return;
}

