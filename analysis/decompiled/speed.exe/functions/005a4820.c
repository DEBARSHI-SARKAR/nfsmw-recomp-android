/* speed.exe 005a4820 FUN_005a4820; analysis pseudocode, not buildable source.
 * calls 005124e0 FUN_005124e0
 * calls 0079f450 FUN_0079f450
 * calls 00516ac0 FUN_00516ac0
 * calls 00533530 FUN_00533530
 * calls 0079ee50 FUN_0079ee50
 * calls 0062fe40 FUN_0062fe40
 * calls 00794f80 FUN_00794f80
 * calls 0083a670 FUN_0083a670
 * calls 005252d0 FUN_005252d0
 * calls 00735620 FUN_00735620
 * calls 00525940 FUN_00525940
 * calls 00533460 FUN_00533460
 * calls 0056bc10 FUN_0056bc10
 * calls 005864b0 FUN_005864b0
 * calls 00549460 FUN_00549460
 * calls 00572ed0 FUN_00572ed0
 * calls 00598970 FUN_00598970
 * calls 00516af0 FUN_00516af0
 * calls 0083b210 FUN_0083b210
 * calls 0059b2c0 FUN_0059b2c0
 * calls 00516c50 FUN_00516c50
 * calls 00598c00 FUN_00598c00
 * calls 005257f0 FUN_005257f0
 * calls 00790370 FUN_00790370
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00798380 FUN_00798380
 * calls 0059b0a0 FUN_0059b0a0
 * calls 00516a90 FUN_00516a90
 * calls 005425d0 FUN_005425d0
 * calls 00460c70 FUN_00460c70
 * calls 0079bac0 FUN_0079bac0
 * calls 005258b0 FUN_005258b0
 * calls 008412c0 FUN_008412c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007612c0 FUN_007612c0
 * calls 00627400 FUN_00627400
 * calls 0078b260 FUN_0078b260
 * calls 00512650 FUN_00512650
 * calls 0079a9e0 FUN_0079a9e0
 * calls 005af1c0 FUN_005af1c0
 * calls 00524920 FUN_00524920
 * calls 00838360 FUN_00838360
 * calls 0078b720 FUN_0078b720
 * calls 00794790 FUN_00794790
 * calls 00460d20 FUN_00460d20
 * calls 007902f0 FUN_007902f0
 * calls 0078fdd0 FUN_0078fdd0
 * calls 0078c730 FUN_0078c730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005a4820(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  char local_40 [16];
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined2 local_f;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087375e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0059b2c0(param_2);
  if (cVar2 != '\0') {
    ExceptionList = local_c;
    return;
  }
  if (param_2 < 0xa94d69f3) {
    if (param_2 == 0xa94d69f2) {
      FUN_005124e0();
      FUN_005258b0(0);
      FUN_005425d0();
      FUN_00533460(param_1[4]);
    }
    else if (param_2 < 0x971391a3) {
      if (param_2 == 0x971391a2) {
        if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
           ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
          if (DAT_008f32bc < 1) {
            if (DAT_008f32bc == 0) {
              DAT_008f32bc = -1;
              iVar5 = *(int *)(param_1[6] + 0x10);
              iVar3 = FUN_005af1c0("GarageMain.fng");
              if (((iVar5 != iVar3) &&
                  (iVar5 = *(int *)(param_1[6] + 0x10), iVar3 = FUN_005af1c0("EA_Trax.fng"),
                  iVar5 != iVar3)) &&
                 (iVar5 = *(int *)(param_1[6] + 0x10), iVar3 = FUN_005af1c0("OL_GameRoom.fng"),
                 iVar5 != iVar3)) {
                FUN_005258b0(1);
              }
            }
            else {
              FUN_00524920(param_1[4],0xb977eeb0,0x16a259,1);
            }
          }
          else {
            FUN_00524920(param_1[4],0xb977eeb0,0x2c856ed,0);
            uVar6 = FUN_0056bc10(0x250d0152,DAT_008f32bc);
            FUN_005252d0(param_1[4],0xb977eeb0,"%s %d",uVar6);
          }
        }
      }
      else {
        if (param_2 == 0x12b277aa) {
          FUN_005124e0();
          iVar5 = FUN_00627400(0x10);
          local_4 = 0;
        }
        else {
          if (param_2 != 0x2c0e485a) {
            if (param_2 == 0x62799a4c) {
              iVar3 = FUN_00516ac0();
              iVar4 = FUN_00516a90();
              iVar5 = param_1[6];
              if (((DAT_00925e90 == 3) && (cVar2 = FUN_005864b0(), cVar2 != '\0')) &&
                 ((*(char *)(iVar5 + 0x28) != '\0' && ((iVar5 == iVar4 && (iVar4 == iVar3)))))) {
                FUN_00598c00(param_1[4],&DAT_00890978,3,0x70e01038,0x417b25e4,0xbe34e004,0x34dc1bcf,
                             0x34dc1bcf,1,0x75cac3b);
              }
            }
            goto LAB_005a4fe2;
          }
          cVar2 = FUN_00735620();
          if (cVar2 == '\0') goto LAB_005a4fe2;
          FUN_007612c0(1);
          iVar5 = FUN_00627400(0x10);
          local_4 = 1;
        }
        if (iVar5 != 0) {
          FUN_0062fe40(1,0);
        }
        local_4 = 0xffffffff;
      }
    }
    else if (param_2 == 0x9757a0c0) {
      FUN_00572ed0();
    }
    else if ((param_2 == 0x9803f6e2) && (*(int *)(param_1[6] + 0x20) == 0)) {
      ExceptionList = local_c;
      return;
    }
    goto LAB_005a4fe2;
  }
  if (param_2 < 0xcac20c25) {
    if (param_2 == 0xcac20c24) {
      FUN_0079f450();
      FUN_00794790();
      FUN_0078fdd0();
      iVar5 = DAT_0091cf90;
      if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
        iVar5 = param_1[4];
        pcVar10 = "OLEALogin.fng";
        FUN_00512650(iVar5,"OLEALogin.fng");
        FUN_00533530(iVar5,pcVar10);
      }
      else {
        *(undefined4 *)(DAT_0091cf90 + 0x1a0) = *(undefined4 *)(DAT_0091cf90 + 0x19c);
        *(undefined4 *)(iVar5 + 0x19c) = 0;
        *(undefined4 *)(iVar5 + 0x17c) = 0;
        FUN_00525940("UI_PC_LAN_ServerSelect.fng",0,0,0);
      }
    }
    else if (param_2 == 0xbe34e004) {
      DAT_009257ec = 1;
    }
    else if (param_2 == 0xc519bfc0) {
      iVar5 = FUN_00516af0("Dialog.fng");
      if (((((iVar5 == 0) && (_DAT_008f42c0 < (float)(DAT_00925b14 - DAT_0091cc24) * _DAT_00890984))
           && (1 < *(int *)(DAT_0091cf90 + 0x19c))) &&
          (((char)param_1[3] != '\0' && (iVar5 = FUN_00516af0("Dialog.fng"), iVar5 == 0)))) &&
         (DAT_0091d260 == '\0')) {
        FUN_005257f0("OL_EAMessenger.fng",0,param_4,0);
        DAT_0091d260 = '\x01';
      }
    }
    else if (param_2 == 0xc98356ba) {
      if ((-1 < DAT_008f48e8) && (iVar5 = param_1[6], iVar3 = FUN_00516ac0(), iVar3 == iVar5)) {
        if (0 < DAT_008f48e8) {
          DAT_008f48e8 = DAT_008f48e8 + -1;
        }
        if (DAT_008f48e8 == 0) {
          DAT_008f48e8 = -1;
          FUN_00516c50(0xe92e4847,param_1[4],0xff);
        }
      }
      if ((1 < *(int *)(DAT_0091cf90 + 0x19c)) && (iVar5 = FUN_0078b260(), iVar5 != 0)) {
        FUN_00794f80();
        iVar5 = FUN_0078b720();
        if (iVar5 != 0) {
          FUN_008412c0(iVar5,0);
        }
      }
      if ((DAT_0091ca58 == '\x01') && (DAT_0091ca60 == 0)) {
        FUN_00549460(0);
      }
    }
    goto LAB_005a4fe2;
  }
  if (param_2 != 0xe92e4847) {
    if (param_2 == 0xf764cbe7) {
      DAT_008f48e8 = 5;
    }
    goto LAB_005a4fe2;
  }
  iVar5 = *(int *)(param_1[6] + 0x10);
  iVar3 = FUN_005af1c0("GarageMain.fng");
  if (iVar5 == iVar3) {
    ExceptionList = local_c;
    return;
  }
  iVar5 = *(int *)(param_1[6] + 0x10);
  iVar3 = FUN_005af1c0("EA_Trax.fng");
  if (iVar5 == iVar3) {
    ExceptionList = local_c;
    return;
  }
  iVar5 = *(int *)(param_1[6] + 0x10);
  iVar3 = FUN_005af1c0("OL_EAMessenger.fng");
  if (iVar5 == iVar3) {
    ExceptionList = local_c;
    return;
  }
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    local_2f = 0;
    local_2b = 0;
    local_27 = 0;
    local_23 = 0;
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_d = 0;
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    bVar1 = false;
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[8] = '\0';
    uVar6 = 0;
    local_30 = 0;
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    if (DAT_0091cacc == 0) {
      iVar3 = 0;
      FUN_0079a9e0();
      iVar5 = FUN_0045d3a0(0);
      if (0 < iVar5) {
        do {
          iVar5 = iVar3;
          FUN_0079a9e0(iVar3);
          iVar5 = FUN_00790370(iVar5);
          if (iVar5 == 0) break;
          iVar4 = FUN_00460d20(iVar5 + 0xc,&DAT_0091c39c);
          if (iVar4 == 0) {
            uVar6 = *(undefined4 *)(iVar5 + 8);
            bVar1 = true;
          }
          iVar3 = iVar3 + 1;
          FUN_0079a9e0();
          iVar5 = FUN_0045d3a0(0);
        } while (iVar3 < iVar5);
        if (bVar1) goto LAB_005a4e42;
      }
      uVar6 = FUN_0056bc10(0x331f4f58);
      FUN_00598970(param_1[4],&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar6);
    }
    else {
      uVar6 = *(undefined4 *)(DAT_0091cacc + 4);
LAB_005a4e42:
      if (DAT_0091cacc == 0) {
        puVar8 = &DAT_0091c39c;
        FUN_0079a9e0(&DAT_0091c39c,uVar6);
        iVar5 = FUN_007902f0(puVar8,uVar6);
        uVar6 = FUN_0083a670(*(undefined4 *)(iVar5 + 0x20),"GAMENAME",&local_30,0x24,"unknown game")
        ;
        FUN_0083b210(uVar6);
        uVar6 = FUN_0083a670(*(undefined4 *)(iVar5 + 0x20),"PASSWORD",local_40,0xd,&DAT_00890978);
        FUN_0083b210(uVar6);
        uVar6 = *(undefined4 *)(iVar5 + 8);
        uVar11 = 0;
        iVar5 = iVar5 + 0xc;
        FUN_0079a9e0(iVar5,uVar6,0);
        FUN_00798380(iVar5,uVar6,uVar11);
      }
      else {
        FUN_00460c70(&local_30,DAT_0091cacc + 0x4c);
        FUN_00460c70(local_40,DAT_0091cacc + 0xec);
        if (*(char *)(DAT_0091cacc + 0x110) == '\x01') {
          iVar5 = FUN_0078c730();
          FUN_00838360(*(undefined4 *)(iVar5 + 0xf8),&DAT_0091c39c,0,0,0);
        }
        thunk_FUN_007c7250(DAT_0091cacc);
        DAT_0091cacc = 0;
      }
      iVar5 = DAT_0091cf90;
      pcVar10 = "";
      if (local_40[0] != '\0') {
        pcVar10 = local_40;
      }
      FUN_00460c70(DAT_0091cf90 + 0x145,pcVar10);
      pcVar10 = "";
      if (local_40[0] != '\0') {
        pcVar10 = local_40;
      }
      FUN_00460c70(iVar5 + 0x152,pcVar10);
      *(bool *)(iVar5 + 0x144) = local_40[0] != '\0';
      puVar9 = &LAB_0059b110;
      pcVar10 = local_40;
      puVar7 = &local_30;
      piVar12 = param_1;
      FUN_0079bac0(puVar7,pcVar10,&LAB_0059b110,param_1);
      uVar6 = FUN_0079ee50(puVar7,pcVar10,puVar9,piVar12);
      FUN_0059b0a0(uVar6);
    }
  }
  DAT_0091d261 = 0;
LAB_005a4fe2:
  (**(code **)(*param_1 + 4))(param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return;
}

