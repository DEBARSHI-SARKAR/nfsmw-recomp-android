/* speed.exe 004c2340 FUN_004c2340; analysis pseudocode, not buildable source.
 * calls 004b2510 FUN_004b2510
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004519d0 FUN_004519d0
 * calls 00460bf0 FUN_00460bf0
 * calls 004522f0 FUN_004522f0
 * calls 004b9080 FUN_004b9080
 * calls 004b24f0 FUN_004b24f0
 * calls 006ff7b0 FUN_006ff7b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2340(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int local_268;
  char *local_264;
  undefined8 local_260;
  undefined4 local_258;
  char *local_254;
  undefined8 local_250;
  undefined4 local_248;
  char *local_244;
  undefined8 local_240;
  undefined4 local_238;
  char *local_234;
  undefined8 local_230;
  undefined4 local_228;
  char *local_224;
  undefined8 local_220;
  undefined4 local_218;
  char *local_214;
  undefined8 local_210;
  undefined4 local_208;
  char *local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  char *local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  char *local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  char *local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  char *local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char *local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  char *local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  char *local_194;
  undefined8 local_190;
  undefined4 local_188;
  char *local_184;
  undefined8 local_180;
  undefined4 local_178;
  char *local_174;
  undefined8 local_170;
  undefined4 local_168;
  char *local_164;
  undefined8 local_160;
  undefined4 local_158;
  char *local_154;
  undefined8 local_150;
  undefined4 local_148;
  char *local_144;
  undefined8 local_140;
  undefined4 local_138;
  char *local_134;
  undefined8 local_130;
  undefined4 local_128;
  char *local_124;
  undefined8 local_120;
  undefined4 local_118;
  char *local_114;
  undefined8 local_110;
  undefined4 local_108;
  char *local_104;
  undefined8 local_100;
  undefined4 local_f8;
  char *local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  char *local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  char *local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  char *local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  char *local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  char *local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  char *local_94;
  undefined8 local_90;
  undefined4 local_88;
  char *local_84;
  undefined8 local_80;
  undefined4 local_78;
  char *local_74;
  undefined8 local_70;
  undefined4 local_68;
  char *local_64;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined8 local_30;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined4 local_18;
  char *local_14;
  undefined8 local_10;
  undefined4 local_8;
  char *local_4;
  
  if (DAT_00911fa8 != 0) {
    iVar2 = FUN_004519d0(param_2);
    FUN_004522f0("Pause_Main.fng");
    local_268 = FUN_004519d0("Pause_Main.fng");
    local_264 = "Pause_Main.fng";
    local_260 = FUN_004522f0("Pause_Options.fng");
    local_258 = FUN_004519d0("Pause_Options.fng");
    local_254 = "Pause_Options.fng";
    local_250 = FUN_004522f0("Pause_Controller.fng");
    local_248 = FUN_004519d0("Pause_Controller.fng");
    local_244 = "Pause_Controller.fng";
    local_240 = FUN_004522f0("InGamePhotoMaster.fng");
    local_238 = FUN_004519d0("InGamePhotoMaster.fng");
    local_234 = "InGamePhotoMaster.fng";
    local_230 = FUN_004522f0("EA_Trax.fng");
    local_228 = FUN_004519d0("EA_Trax.fng");
    local_224 = "EA_Trax.fng";
    local_220 = FUN_004522f0("FadeScreen.fng");
    local_218 = FUN_004519d0("FadeScreen.fng");
    local_214 = "FadeScreen.fng";
    local_210 = FUN_004522f0("SMS_Message.fng");
    local_208 = FUN_004519d0("SMS_Message.fng");
    local_204 = "SMS_Message.fng";
    local_200 = FUN_004522f0("BUSTED_OVERLAY.fng");
    local_1f8 = FUN_004519d0("BUSTED_OVERLAY.fng");
    local_1f4 = "BUSTED_OVERLAY.fng";
    local_1f0 = FUN_004522f0("SixDaysLater.fng");
    local_1e8 = FUN_004519d0("SixDaysLater.fng");
    local_1e4 = "SixDaysLater.fng";
    local_1e0 = FUN_004522f0("InGame_MC_Main_GC.fng");
    local_1d8 = FUN_004519d0("InGame_MC_Main_GC.fng");
    local_1d4 = "InGame_MC_Main_GC.fng";
    local_1d0 = FUN_004522f0("InGameAnyMovie.fng");
    local_1c8 = FUN_004519d0("InGameAnyMovie.fng");
    local_1c4 = "InGameAnyMovie.fng";
    local_1c0 = FUN_004522f0("Pause_Performance_Tuning.fng");
    local_1b8 = FUN_004519d0("Pause_Performance_Tuning.fng");
    local_1b4 = "Pause_Performance_Tuning.fng";
    local_1b0 = FUN_004522f0("InGame_MC_Main.fng");
    local_1a8 = FUN_004519d0("InGame_MC_Main.fng");
    local_1a4 = "InGame_MC_Main.fng";
    local_1a0 = FUN_004522f0("InGameDialog.fng");
    local_198 = FUN_004519d0("InGameDialog.fng");
    local_194 = "InGameDialog.fng";
    local_190 = FUN_004522f0("WS_InGameAnyMovie.fng");
    local_188 = FUN_004519d0("WS_InGameAnyMovie.fng");
    local_184 = "WS_InGameAnyMovie.fng";
    local_180 = FUN_004522f0("InGameAnyMovie.fng");
    local_178 = FUN_004519d0("InGameAnyMovie.fng");
    local_174 = "InGameAnyMovie.fng";
    local_170 = FUN_004522f0("InGameAnyTutorial.fng");
    local_168 = FUN_004519d0("InGameAnyTutorial.fng");
    local_164 = "InGameAnyTutorial.fng";
    local_160 = FUN_004522f0("FEAnyMovie.fng");
    local_158 = FUN_004519d0("FEAnyMovie.fng");
    local_154 = "FEAnyMovie.fng";
    local_150 = FUN_004522f0("WS_FEAnyMovie.fng");
    local_148 = FUN_004519d0("WS_FEAnyMovie.fng");
    local_144 = "WS_FEAnyMovie.fng";
    local_140 = FUN_004522f0("FEAnyTutorial.fng");
    local_138 = FUN_004519d0("FEAnyTutorial.fng");
    local_134 = "FEAnyTutorial.fng";
    local_130 = FUN_004522f0("InGameAnyTutorial.fng");
    local_128 = FUN_004519d0("InGameAnyTutorial.fng");
    local_124 = "InGameAnyTutorial.fng";
    local_120 = FUN_004522f0("LS_EALogo.fng");
    local_118 = FUN_004519d0("LS_EALogo.fng");
    local_114 = "LS_EALogo.fng";
    local_110 = FUN_004522f0("LS_EA_hidef.fng");
    local_108 = FUN_004519d0("LS_EA_hidef.fng");
    local_104 = "LS_EA_hidef.fng";
    local_100 = FUN_004522f0("LS_PSA.fng");
    local_f8 = FUN_004519d0("LS_PSA.fng");
    local_f4 = "LS_PSA.fng";
    local_f0 = FUN_004522f0("MW_LS_IntroFMV.fng");
    local_e8 = FUN_004519d0("MW_LS_IntroFMV.fng");
    local_e4 = "MW_LS_IntroFMV.fng";
    local_e0 = FUN_004522f0("MW_LS_AttractFMV.fng");
    local_d8 = FUN_004519d0("MW_LS_AttractFMV.fng");
    local_d4 = "MW_LS_AttractFMV.fng";
    local_d0 = FUN_004522f0("WS_LS_EALogo.fng");
    local_c8 = FUN_004519d0("WS_LS_EALogo.fng");
    local_c4 = "WS_LS_EALogo.fng";
    local_c0 = FUN_004522f0("WS_LS_EA_hidef.fng");
    local_b8 = FUN_004519d0("WS_LS_EA_hidef.fng");
    local_b4 = "WS_LS_EA_hidef.fng";
    local_b0 = FUN_004522f0("WS_LS_PSA.fng");
    local_a8 = FUN_004519d0("WS_LS_PSA.fng");
    local_a4 = "WS_LS_PSA.fng";
    local_a0 = FUN_004522f0("WS_LS_IntroFMV.fng");
    local_98 = FUN_004519d0("WS_LS_IntroFMV.fng");
    local_94 = "WS_LS_IntroFMV.fng";
    local_90 = FUN_004522f0("WS_MW_LS_AttractFMV.fng");
    local_88 = FUN_004519d0("WS_MW_LS_AttractFMV.fng");
    local_84 = "WS_MW_LS_AttractFMV.fng";
    local_80 = FUN_004522f0("PostRace_MilestoneRewards.fng");
    local_78 = FUN_004519d0("PostRace_MilestoneRewards.fng");
    local_74 = "PostRace_MilestoneRewards.fng";
    local_70 = FUN_004522f0("PostRace_Pursuit.fng");
    local_68 = FUN_004519d0("PostRace_Pursuit.fng");
    local_64 = "PostRace_Pursuit.fng";
    local_60 = FUN_004522f0("Game_StartRace");
    local_58 = FUN_004519d0("Game_StartRace");
    local_54 = "Game_StartRace";
    local_50 = FUN_004522f0("InGameMilestones.fng");
    local_48 = FUN_004519d0("InGameMilestones.fng");
    local_44 = "InGameMilestones.fng";
    local_40 = FUN_004522f0("InGameBounty.fng");
    local_38 = FUN_004519d0("InGameBounty.fng");
    local_34 = "InGameBounty.fng";
    local_30 = FUN_004522f0("InGameRaceSheet.fng");
    local_28 = FUN_004519d0("InGameRaceSheet.fng");
    local_24 = "InGameRaceSheet.fng";
    local_20 = FUN_004522f0("Pause_PC_Controller.fng");
    local_18 = FUN_004519d0("Pause_PC_Controller.fng");
    local_14 = "Pause_PC_Controller.fng";
    local_10 = FUN_004522f0("Pause_PCDisplayOptions.fng");
    local_8 = FUN_004519d0("Pause_PCDisplayOptions.fng");
    local_4 = "Pause_PCDisplayOptions.fng";
    FUN_00460bf0(param_2);
    iVar3 = 0;
    piVar4 = &local_268;
    do {
      iVar5 = iVar3;
      if (iVar2 == *piVar4) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
      iVar5 = -1;
    } while (iVar3 < 0x27);
    if (*(int *)(DAT_00911fa8 + 0x70) == 1) {
      if ((((((iVar5 == 10) || (0xd < iVar5)) && (DAT_008ee5bc != '\0')) && (DAT_008f86f8 != 0)) &&
          (((DAT_00911fe8 & 0x800) == 0 || ((char)param_1 == '\0')))) &&
         (((DAT_00911fe8 & 0x800) != 0 || ((char)param_1 != '\0')))) {
        _DAT_00911fec = DAT_00911fe8;
        DAT_00911ff4 = DAT_00911ff0;
        if ((char)param_1 == '\0') {
          DAT_00911fe8 = DAT_00911fe8 & 0xfffff7ff;
        }
        else {
          DAT_00911fe8 = DAT_00911fe8 | 0x800;
        }
        uVar9 = 0;
        puVar8 = &DAT_008ee574;
        iVar2 = 2;
        do {
          bVar1 = (byte)iVar2;
          if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
            uVar9 = uVar9 | puVar8[-1];
          }
          if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
            uVar9 = uVar9 | *puVar8;
          }
          if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
            uVar9 = uVar9 | puVar8[1];
          }
          if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
            uVar9 = uVar9 | puVar8[2];
          }
          if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
            uVar9 = uVar9 | puVar8[3];
          }
          if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
            uVar9 = uVar9 | puVar8[4];
          }
          iVar3 = iVar2 + 4;
          puVar8 = puVar8 + 6;
          iVar2 = iVar2 + 6;
        } while (iVar3 < 0x12);
        iVar2 = 0;
        DAT_00911ff0 = uVar9;
        do {
          uVar6 = 1 << ((byte)iVar2 & 0x1f);
          if (((uVar6 & (uVar9 ^ DAT_00911ff4)) != 0) &&
             (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
            if ((uVar9 & uVar6) == 0) {
              if (iVar2 == 0) {
                iVar3 = *(int *)(iVar3 + 0x18);
              }
              else if (iVar2 == 1) {
                iVar3 = *(int *)(iVar3 + 0x14);
              }
              else {
                if (iVar2 != 2) goto LAB_004c36e5;
                iVar3 = *(int *)(iVar3 + 0x1c);
              }
              if (iVar3 != 0) {
                FUN_004b2510();
                uVar9 = DAT_00911ff0;
              }
            }
            else {
              if (iVar2 == 0) {
                iVar3 = *(int *)(iVar3 + 0x18);
              }
              else if (iVar2 == 1) {
                iVar3 = *(int *)(iVar3 + 0x14);
              }
              else {
                if (iVar2 != 2) goto LAB_004c36e5;
                iVar3 = *(int *)(iVar3 + 0x1c);
              }
              if (iVar3 != 0) {
                FUN_004b24f0();
                uVar9 = DAT_00911ff0;
              }
            }
          }
LAB_004c36e5:
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xd);
      }
    }
    else {
      switch(iVar5) {
      case 0:
      case 1:
      case 2:
      case 0xb:
      case 0x25:
      case 0x26:
        *(char *)(DAT_00911fa8 + 0x28) = (char)param_1;
        FUN_004b9080(param_1,1,param_2);
        return;
      case 3:
        FUN_004b9080(param_1,1,param_2);
        return;
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xd:
        break;
      case 8:
        FUN_004b9080(param_1,1,param_2);
        FUN_004b9080(param_1,0,param_2);
        return;
      case 9:
      case 0xc:
        if (*(char *)(DAT_00911fa8 + 0x28) == '\0') {
          FUN_004b9080(param_1,1,param_2);
          return;
        }
        break;
      case 10:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
        if ((char)param_1 == '\0') {
          if (DAT_008ee5bc != '\0') {
            uVar9 = DAT_00911fe8;
            uVar6 = DAT_00911ff0;
            if ((DAT_008f86f8 != 0) && ((DAT_00911fe8 & 0x800) != 0)) {
              _DAT_00911fec = DAT_00911fe8;
              uVar9 = DAT_00911fe8 & 0xfffff7ff;
              uVar6 = 0;
              DAT_00911ff4 = DAT_00911ff0;
              puVar8 = &DAT_008ee574;
              iVar2 = 2;
              do {
                bVar1 = (byte)iVar2;
                if ((uVar9 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
                  uVar6 = uVar6 | puVar8[-1];
                }
                if ((uVar9 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
                  uVar6 = uVar6 | *puVar8;
                }
                if ((uVar9 & 1 << (bVar1 & 0x1f)) != 0) {
                  uVar6 = uVar6 | puVar8[1];
                }
                if ((uVar9 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
                  uVar6 = uVar6 | puVar8[2];
                }
                if ((uVar9 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
                  uVar6 = uVar6 | puVar8[3];
                }
                if ((uVar9 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
                  uVar6 = uVar6 | puVar8[4];
                }
                iVar3 = iVar2 + 4;
                puVar8 = puVar8 + 6;
                iVar2 = iVar2 + 6;
              } while (iVar3 < 0x12);
              iVar2 = 0;
              DAT_00911fe8 = uVar9;
              DAT_00911ff0 = uVar6;
              do {
                uVar7 = 1 << ((byte)iVar2 & 0x1f);
                if (((uVar7 & (uVar6 ^ DAT_00911ff4)) != 0) &&
                   (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
                  if ((uVar6 & uVar7) == 0) {
                    if (iVar2 == 0) {
                      iVar3 = *(int *)(iVar3 + 0x18);
                    }
                    else if (iVar2 == 1) {
                      iVar3 = *(int *)(iVar3 + 0x14);
                    }
                    else {
                      if (iVar2 != 2) goto LAB_004c31cd;
                      iVar3 = *(int *)(iVar3 + 0x1c);
                    }
                    if (iVar3 != 0) {
                      FUN_004b2510();
                      uVar9 = DAT_00911fe8;
                      uVar6 = DAT_00911ff0;
                    }
                  }
                  else {
                    if (iVar2 == 0) {
                      iVar3 = *(int *)(iVar3 + 0x18);
                    }
                    else if (iVar2 == 1) {
                      iVar3 = *(int *)(iVar3 + 0x14);
                    }
                    else {
                      if (iVar2 != 2) goto LAB_004c31cd;
                      iVar3 = *(int *)(iVar3 + 0x1c);
                    }
                    if (iVar3 != 0) {
                      FUN_004b24f0();
                      uVar9 = DAT_00911fe8;
                      uVar6 = DAT_00911ff0;
                    }
                  }
                }
LAB_004c31cd:
                iVar2 = iVar2 + 1;
              } while (iVar2 < 0xd);
            }
            if ((((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) && (DAT_008f86f8 != 0)) &&
               ((uVar9 & 0x1000) == 0)) {
              DAT_00911fe8 = uVar9 | 0x1000;
              uVar7 = 0;
              puVar8 = &DAT_008ee574;
              iVar2 = 2;
              do {
                bVar1 = (byte)iVar2;
                if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
                  uVar7 = uVar7 | puVar8[-1];
                }
                if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
                  uVar7 = uVar7 | *puVar8;
                }
                if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
                  uVar7 = uVar7 | puVar8[1];
                }
                if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
                  uVar7 = uVar7 | puVar8[2];
                }
                if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
                  uVar7 = uVar7 | puVar8[3];
                }
                if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
                  uVar7 = uVar7 | puVar8[4];
                }
                iVar3 = iVar2 + 4;
                puVar8 = puVar8 + 6;
                iVar2 = iVar2 + 6;
              } while (iVar3 < 0x12);
              iVar2 = 0;
              _DAT_00911fec = uVar9;
              DAT_00911ff0 = uVar7;
              DAT_00911ff4 = uVar6;
              do {
                uVar9 = 1 << ((byte)iVar2 & 0x1f);
                if (((uVar9 & (uVar7 ^ DAT_00911ff4)) != 0) &&
                   (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
                  if ((uVar7 & uVar9) == 0) {
                    if (iVar2 == 0) {
                      iVar3 = *(int *)(iVar3 + 0x18);
                    }
                    else if (iVar2 == 1) {
                      iVar3 = *(int *)(iVar3 + 0x14);
                    }
                    else {
                      if (iVar2 != 2) goto LAB_004c3337;
                      iVar3 = *(int *)(iVar3 + 0x1c);
                    }
                    if (iVar3 != 0) {
                      FUN_004b2510();
                      uVar7 = DAT_00911ff0;
                    }
                  }
                  else {
                    if (iVar2 == 0) {
                      iVar3 = *(int *)(iVar3 + 0x18);
                    }
                    else if (iVar2 == 1) {
                      iVar3 = *(int *)(iVar3 + 0x14);
                    }
                    else {
                      if (iVar2 != 2) goto LAB_004c3337;
                      iVar3 = *(int *)(iVar3 + 0x1c);
                    }
                    if (iVar3 != 0) {
                      FUN_004b24f0();
                      uVar7 = DAT_00911ff0;
                    }
                  }
                }
LAB_004c3337:
                iVar2 = iVar2 + 1;
                if (0xc < iVar2) {
                  return;
                }
              } while( true );
            }
          }
        }
        else if (((DAT_008ee5bc != '\0') && (DAT_008f86f8 != 0)) && ((DAT_00911fe8 & 0x800) == 0)) {
          _DAT_00911fec = DAT_00911fe8;
          DAT_00911fe8 = DAT_00911fe8 | 0x800;
          uVar9 = 0;
          DAT_00911ff4 = DAT_00911ff0;
          puVar8 = &DAT_008ee574;
          iVar2 = 2;
          do {
            bVar1 = (byte)iVar2;
            if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[-1];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
              uVar9 = uVar9 | *puVar8;
            }
            if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[1];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[2];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[3];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[4];
            }
            iVar3 = iVar2 + 4;
            puVar8 = puVar8 + 6;
            iVar2 = iVar2 + 6;
          } while (iVar3 < 0x12);
          iVar2 = 0;
          DAT_00911ff0 = uVar9;
          do {
            uVar6 = 1 << ((byte)iVar2 & 0x1f);
            if (((uVar6 & (uVar9 ^ DAT_00911ff4)) != 0) &&
               (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
              if ((uVar9 & uVar6) == 0) {
                if (iVar2 == 0) {
                  iVar3 = *(int *)(iVar3 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar3 = *(int *)(iVar3 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c3067;
                  iVar3 = *(int *)(iVar3 + 0x1c);
                }
                if (iVar3 != 0) {
                  FUN_004b2510();
                  uVar9 = DAT_00911ff0;
                }
              }
              else {
                if (iVar2 == 0) {
                  iVar3 = *(int *)(iVar3 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar3 = *(int *)(iVar3 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c3067;
                  iVar3 = *(int *)(iVar3 + 0x1c);
                }
                if (iVar3 != 0) {
                  FUN_004b24f0();
                  uVar9 = DAT_00911ff0;
                }
              }
            }
LAB_004c3067:
            iVar2 = iVar2 + 1;
            if (0xc < iVar2) {
              return;
            }
          } while( true );
        }
        break;
      case 0x10:
      case 0x14:
        if (DAT_008ee5bc != '\0') {
          uVar9 = DAT_00911ff0;
          uVar6 = DAT_00911fe8;
          if (((DAT_008f86f8 != 0) && (((DAT_00911fe8 & 0x800) == 0 || ((char)param_1 == '\0')))) &&
             (((DAT_00911fe8 & 0x800) != 0 || ((char)param_1 != '\0')))) {
            _DAT_00911fec = DAT_00911fe8;
            DAT_00911ff4 = DAT_00911ff0;
            if ((char)param_1 == '\0') {
              uVar6 = DAT_00911fe8 & 0xfffff7ff;
            }
            else {
              uVar6 = DAT_00911fe8 | 0x800;
            }
            uVar9 = 0;
            puVar8 = &DAT_008ee574;
            iVar2 = 2;
            do {
              bVar1 = (byte)iVar2;
              if ((uVar6 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
                uVar9 = uVar9 | puVar8[-1];
              }
              if ((uVar6 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
                uVar9 = uVar9 | *puVar8;
              }
              if ((uVar6 & 1 << (bVar1 & 0x1f)) != 0) {
                uVar9 = uVar9 | puVar8[1];
              }
              if ((uVar6 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
                uVar9 = uVar9 | puVar8[2];
              }
              if ((uVar6 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
                uVar9 = uVar9 | puVar8[3];
              }
              if ((uVar6 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
                uVar9 = uVar9 | puVar8[4];
              }
              iVar3 = iVar2 + 4;
              puVar8 = puVar8 + 6;
              iVar2 = iVar2 + 6;
            } while (iVar3 < 0x12);
            iVar2 = 0;
            DAT_00911fe8 = uVar6;
            DAT_00911ff0 = uVar9;
            do {
              uVar7 = 1 << ((byte)iVar2 & 0x1f);
              if (((uVar7 & (uVar9 ^ DAT_00911ff4)) != 0) &&
                 (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
                if ((uVar7 & uVar9) == 0) {
                  if (iVar2 == 0) {
                    iVar3 = *(int *)(iVar3 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar3 = *(int *)(iVar3 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c2d63;
                    iVar3 = *(int *)(iVar3 + 0x1c);
                  }
                  if (iVar3 != 0) {
                    FUN_004b2510();
                    uVar9 = DAT_00911ff0;
                    uVar6 = DAT_00911fe8;
                  }
                }
                else {
                  if (iVar2 == 0) {
                    iVar3 = *(int *)(iVar3 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar3 = *(int *)(iVar3 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c2d63;
                    iVar3 = *(int *)(iVar3 + 0x1c);
                  }
                  if (iVar3 != 0) {
                    FUN_004b24f0();
                    uVar9 = DAT_00911ff0;
                    uVar6 = DAT_00911fe8;
                  }
                }
              }
LAB_004c2d63:
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0xd);
          }
          if ((((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) && (DAT_008f86f8 != 0)) &&
             ((((uVar6 & 0x1000) == 0 || ((char)param_1 == '\0')) &&
              (((uVar6 & 0x1000) != 0 || ((char)param_1 != '\0')))))) {
            if ((char)param_1 == '\0') {
              DAT_00911fe8 = uVar6 & 0xffffefff;
            }
            else {
              DAT_00911fe8 = uVar6 | 0x1000;
            }
            uVar7 = 0;
            puVar8 = &DAT_008ee574;
            iVar2 = 2;
            do {
              bVar1 = (byte)iVar2;
              if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
                uVar7 = uVar7 | puVar8[-1];
              }
              if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
                uVar7 = uVar7 | *puVar8;
              }
              if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
                uVar7 = uVar7 | puVar8[1];
              }
              if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
                uVar7 = uVar7 | puVar8[2];
              }
              if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
                uVar7 = uVar7 | puVar8[3];
              }
              if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
                uVar7 = uVar7 | puVar8[4];
              }
              iVar3 = iVar2 + 4;
              puVar8 = puVar8 + 6;
              iVar2 = iVar2 + 6;
            } while (iVar3 < 0x12);
            iVar2 = 0;
            _DAT_00911fec = uVar6;
            DAT_00911ff0 = uVar7;
            DAT_00911ff4 = uVar9;
            do {
              uVar9 = 1 << ((byte)iVar2 & 0x1f);
              if (((uVar9 & (uVar7 ^ DAT_00911ff4)) != 0) &&
                 (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
                if ((uVar9 & uVar7) == 0) {
                  if (iVar2 == 0) {
                    iVar3 = *(int *)(iVar3 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar3 = *(int *)(iVar3 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c2eed;
                    iVar3 = *(int *)(iVar3 + 0x1c);
                  }
                  if (iVar3 != 0) {
                    FUN_004b2510();
                    uVar7 = DAT_00911ff0;
                  }
                }
                else {
                  if (iVar2 == 0) {
                    iVar3 = *(int *)(iVar3 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar3 = *(int *)(iVar3 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c2eed;
                    iVar3 = *(int *)(iVar3 + 0x1c);
                  }
                  if (iVar3 != 0) {
                    FUN_004b24f0();
                    uVar7 = DAT_00911ff0;
                  }
                }
              }
LAB_004c2eed:
              iVar2 = iVar2 + 1;
              if (0xc < iVar2) {
                return;
              }
            } while( true );
          }
        }
        break;
      case 0x1f:
      case 0x20:
        FUN_004b9080(param_1,5,param_2);
        return;
      case 0x21:
        if ((((DAT_008ee5bc != '\0') && (DAT_008f86f8 != 0)) &&
            (((DAT_00911fe8 & 0x1000) == 0 || ((char)param_1 == '\0')))) &&
           (((DAT_00911fe8 & 0x1000) != 0 || ((char)param_1 != '\0')))) {
          _DAT_00911fec = DAT_00911fe8;
          DAT_00911ff4 = DAT_00911ff0;
          if ((char)param_1 == '\0') {
            DAT_00911fe8 = DAT_00911fe8 & 0xffffefff;
          }
          else {
            DAT_00911fe8 = DAT_00911fe8 | 0x1000;
          }
          uVar9 = 0;
          puVar8 = &DAT_008ee574;
          iVar2 = 2;
          do {
            bVar1 = (byte)iVar2;
            if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[-1];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
              uVar9 = uVar9 | *puVar8;
            }
            if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[1];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[2];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[3];
            }
            if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
              uVar9 = uVar9 | puVar8[4];
            }
            iVar3 = iVar2 + 4;
            puVar8 = puVar8 + 6;
            iVar2 = iVar2 + 6;
          } while (iVar3 < 0x12);
          iVar2 = 0;
          DAT_00911ff0 = uVar9;
          do {
            uVar6 = 1 << ((byte)iVar2 & 0x1f);
            if (((uVar6 & (uVar9 ^ DAT_00911ff4)) != 0) &&
               (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
              if ((uVar9 & uVar6) == 0) {
                if (iVar2 == 0) {
                  iVar3 = *(int *)(iVar3 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar3 = *(int *)(iVar3 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c34e7;
                  iVar3 = *(int *)(iVar3 + 0x1c);
                }
                if (iVar3 != 0) {
                  FUN_004b2510();
                  uVar9 = DAT_00911ff0;
                }
              }
              else {
                if (iVar2 == 0) {
                  iVar3 = *(int *)(iVar3 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar3 = *(int *)(iVar3 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c34e7;
                  iVar3 = *(int *)(iVar3 + 0x1c);
                }
                if (iVar3 != 0) {
                  FUN_004b24f0();
                  uVar9 = DAT_00911ff0;
                }
              }
            }
LAB_004c34e7:
            iVar2 = iVar2 + 1;
            if (0xc < iVar2) {
              return;
            }
          } while( true );
        }
        break;
      case 0x22:
      case 0x23:
      case 0x24:
        iVar2 = FUN_006ff2d0(1);
        if (iVar2 != 0) {
          FUN_006ff2d0(1);
          FUN_006ff7b0();
        }
        FUN_004b9080(param_1,4,param_2);
        return;
      default:
        FUN_004b9080(param_1,4,param_2);
        return;
      }
    }
  }
  return;
}

