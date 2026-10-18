/* speed.exe 005584d0 FUN_005584d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0054dfa0 FUN_0054dfa0
 * calls 005b8400 FUN_005b8400
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 * calls 00799f50 FUN_00799f50
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 007935b0 FUN_007935b0
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 0083b8a0 FUN_0083b8a0
 */

void __fastcall FUN_005584d0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  iVar8 = *(int *)(param_1 + 0x340);
  iVar2 = *(int *)(param_1 + 0x33c);
  FUN_00799f50();
  iVar9 = 1;
  do {
    iVar4 = FUN_007935b0(*(undefined4 *)(param_1 + 0x38),0,iVar9 + -2 + *(int *)(param_1 + 0x33c));
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    if (iVar4 == 0) {
      local_68 = FUN_005af1c0("UNHIGHLIGHT");
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_00573140("RANK_%d",iVar9,&DAT_00890978);
      FUN_005252d0(uVar6,uVar5);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_00573140("GAMERTAG_%d",iVar9,&DAT_00890978);
      FUN_005252d0(uVar6,uVar5);
      iVar4 = *(int *)(param_1 + 0x10);
      uVar6 = FUN_00573140("RANK_%d",iVar9);
      if (iVar4 != 0) {
        iVar4 = FUN_00516af0(iVar4);
        if (iVar4 != 0) {
          iVar4 = FUN_005b8550(uVar6);
          if (iVar4 != 0) {
            iVar4 = FUN_005b1360(local_68);
            if (iVar4 != 0) {
              FUN_005b8400(iVar4,0);
              *(undefined4 *)(iVar4 + 0x10) = 0;
            }
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x10);
      uVar6 = FUN_00573140("GAMERTAG_%d",iVar9);
      if (iVar4 != 0) {
        iVar4 = FUN_00516af0(iVar4);
        if (iVar4 != 0) {
          iVar4 = FUN_005b8550(uVar6);
          if (iVar4 != 0) {
            iVar4 = FUN_005b1360(local_68);
            if (iVar4 != 0) {
              FUN_005b8400(iVar4,0);
              *(undefined4 *)(iVar4 + 0x10) = 0;
            }
          }
        }
      }
      puVar10 = (undefined4 *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0x340) - *(int *)(param_1 + 0x33c) == iVar9 + -1) {
        pcVar11 = "HIGHLIGHT";
      }
      else {
        pcVar11 = "UNHIGHLIGHT";
      }
      local_68 = FUN_005af1c0(pcVar11);
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      FUN_0083b8a0(iVar4 + 0x1c,&local_58,0x1c,&DAT_0089b350);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_00573140("RANK_%d",iVar9,&DAT_0089d764,*(undefined4 *)(iVar4 + 4));
      FUN_005252d0(uVar6,uVar5);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_00573140("GAMERTAG_%d",iVar9,&DAT_008941f8,iVar4 + 0xc);
      FUN_005252d0(uVar6,uVar5);
      iVar4 = *(int *)(param_1 + 0x10);
      uVar6 = FUN_00573140("RANK_%d",iVar9);
      if (iVar4 != 0) {
        iVar4 = FUN_00516af0(iVar4);
        if (iVar4 != 0) {
          iVar4 = FUN_005b8550(uVar6);
          if (iVar4 != 0) {
            iVar4 = FUN_005b1360(local_68);
            if (iVar4 != 0) {
              FUN_005b8400(iVar4,0);
              *(undefined4 *)(iVar4 + 0x10) = 0;
            }
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x10);
      uVar6 = FUN_00573140("GAMERTAG_%d",iVar9);
      if (iVar4 != 0) {
        iVar4 = FUN_00516af0(iVar4);
        if (iVar4 != 0) {
          iVar4 = FUN_005b8550(uVar6);
          if (iVar4 != 0) {
            iVar4 = FUN_005b1360(local_68);
            if (iVar4 != 0) {
              FUN_005b8400(iVar4,0);
              *(undefined4 *)(iVar4 + 0x10) = 0;
            }
          }
        }
      }
      puVar10 = &local_58;
    }
    FUN_0054dfa0(puVar10,iVar9,local_68);
    bVar3 = iVar9 < 10;
    iVar9 = iVar9 + 1;
  } while (bVar3);
  FUN_00515e20(local_20,0x20,"POS%d",(iVar8 - iVar2) + 1);
  pcVar11 = *(char **)(param_1 + 0x10);
  uVar6 = FUN_005af1c0(local_20);
  if (pcVar11 == (char *)0x0) goto LAB_005588ab;
  pcVar7 = pcVar11;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar7 == pcVar11 + 1) goto LAB_005588ab;
  if (DAT_0091d218 < 1) {
    iVar8 = FUN_005b5b70(pcVar11);
    if (iVar8 == 0) {
      iVar8 = FUN_005b7580(pcVar11);
      if (iVar8 == 0) goto LAB_005588ab;
      goto LAB_00558877;
    }
  }
  else {
    FUN_00572070();
    iVar8 = FUN_00591d90(pcVar11);
LAB_00558877:
    if (iVar8 == 0) goto LAB_005588ab;
  }
  iVar8 = FUN_005b8550(0xdaf7);
  if (iVar8 != 0) {
    iVar8 = FUN_005b1360(uVar6);
    if (iVar8 != 0) {
      FUN_005b8400(iVar8,0);
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
  }
LAB_005588ab:
  iVar8 = FUN_007935b0(*(undefined4 *)(param_1 + 0x38),1,0);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  if (iVar8 != 0) {
    FUN_0083b8a0(iVar8 + 0x1c,&local_3c,0x1c,&DAT_0089b350);
  }
  FUN_0054dfa0(&local_3c,0xb,0);
  return;
}

