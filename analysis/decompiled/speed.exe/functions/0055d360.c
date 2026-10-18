/* speed.exe 0055d360 FUN_0055d360; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 007994f0 FUN_007994f0
 * calls 00522700 FUN_00522700
 * calls 0056e340 FUN_0056e340
 * calls 0054ad10 FUN_0054ad10
 * calls 00799130 FUN_00799130
 * calls 00586ca0 FUN_00586ca0
 * calls 005865e0 FUN_005865e0
 * calls 005134b0 FUN_005134b0
 * calls 0050d9f0 FUN_0050d9f0
 * calls 005110b0 FUN_005110b0
 * calls 00838420 FUN_00838420
 * calls 0078bcc0 FUN_0078bcc0
 * calls 005425d0 FUN_005425d0
 * calls 00537970 FUN_00537970
 * calls 00586550 FUN_00586550
 * calls 00555c50 FUN_00555c50
 * calls 00598c00 FUN_00598c00
 * calls 00572ed0 FUN_00572ed0
 * calls 005a5540 FUN_005a5540
 * calls 00791590 FUN_00791590
 * calls 00794f80 FUN_00794f80
 * calls 0079a0b0 FUN_0079a0b0
 * calls 0079ca30 FUN_0079ca30
 * calls 005248c0 FUN_005248c0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00539510 FUN_00539510
 * calls 00522f60 FUN_00522f60
 * calls 00796d30 FUN_00796d30
 * calls 00525a70 FUN_00525a70
 * calls 00513430 FUN_00513430
 * calls 00460d20 FUN_00460d20
 * calls 00761140 FUN_00761140
 * calls 0083d940 FUN_0083d940
 * calls 0078b260 FUN_0078b260
 * calls 0078bbe0 FUN_0078bbe0
 * calls 00527df0 FUN_00527df0
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00539920 FUN_00539920
 * calls 00598970 FUN_00598970
 * calls 0078c8d0 FUN_0078c8d0
 * calls 00796e60 FUN_00796e60
 * calls 00537c80 FUN_00537c80
 * calls 00515e20 FUN_00515e20
 * calls 007953e0 FUN_007953e0
 * calls 0079f090 FUN_0079f090
 * calls 0079e230 FUN_0079e230
 * calls 00513390 FUN_00513390
 * calls 00586760 FUN_00586760
 * calls 00513520 FUN_00513520
 * calls 00516a90 FUN_00516a90
 * calls 00522870 FUN_00522870
 * calls 0054e890 FUN_0054e890
 * calls 005926b0 FUN_005926b0
 * calls 0078c2a0 FUN_0078c2a0
 * calls 00522760 FUN_00522760
 * calls 00589900 FUN_00589900
 * calls 00538230 FUN_00538230
 * calls 005985c0 FUN_005985c0
 * calls 00793910 FUN_00793910
 * calls 007353b0 FUN_007353b0
 * calls 0078c730 FUN_0078c730
 * calls 00533460 FUN_00533460
 * calls 00527db0 FUN_00527db0
 * calls 005257f0 FUN_005257f0
 * calls 007617d0 FUN_007617d0
 * calls 0079a020 FUN_0079a020
 * calls 00598a60 FUN_00598a60
 * calls 00556150 FUN_00556150
 * calls 00516be0 FUN_00516be0
 * calls 0056bc10 FUN_0056bc10
 * calls 0079d750 FUN_0079d750
 * calls 0079bac0 FUN_0079bac0
 * calls 00522fb0 FUN_00522fb0
 * calls 00735640 FUN_00735640
 * calls 005a8c50 FUN_005a8c50
 * calls 0054ad70 FUN_0054ad70
 * calls 00537900 FUN_00537900
 * calls 0079e610 FUN_0079e610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0055d360(int param_1,uint param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 local_108;
  undefined4 local_107;
  
  if (param_2 == 0xd828e52c) {
    *(undefined4 *)(param_1 + 0x116c) = 0;
    if (*DAT_0091cadc != -0xd8) {
      for (iVar3 = *(int *)(*DAT_0091cadc + 0xe4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        if (*(int *)(iVar3 + 0x20) != 0) goto LAB_0055d3b0;
      }
    }
    iVar3 = 0;
LAB_0055d3b0:
    iVar3 = FUN_00460d20(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(param_1 + 0x10));
    if (iVar3 != 0) {
      FUN_00525a70(*(undefined4 *)(param_1 + 0x10));
    }
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      iVar3 = FUN_0078c730();
      FUN_00838420(*(undefined4 *)(iVar3 + 0xf8),0,0);
      FUN_0078c730(1);
      uVar4 = FUN_0078c8d0();
      FUN_0083d940(uVar4);
    }
    *(undefined1 *)(param_1 + 0x11a6) = 1;
    FUN_00537c80();
    return;
  }
  if (((-1 < DAT_008f32bc) && (DAT_008f32bc < 6)) && (*(int *)(param_1 + 0x116c) != 0)) {
    FUN_0056c6e0(*(int *)(param_1 + 0x116c));
    *(undefined4 *)(param_1 + 0x116c) = 0;
    *(undefined1 *)(param_1 + 0x117c) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  if (*(char *)(param_1 + 0x117c) != '\0') {
    if (param_2 < 0x97c1b730) {
      if (param_2 != 0x97c1b72f) {
        if (0x53409360 < param_2) {
          if (param_2 < 0x67bfa95a) {
            if (param_2 == 0x67bfa959) goto LAB_0055d6cf;
            if (param_2 != 0x5d1a570f) {
              if (param_2 != 0x613697d7) {
                return;
              }
              goto LAB_0055d6dc;
            }
          }
          else if (param_2 != 0x8d770e25) {
            return;
          }
          if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
            *(undefined1 *)(param_1 + 0xc) = 1;
          }
LAB_0055d532:
          *(undefined1 *)(param_1 + 0x117c) = 0;
          return;
        }
        if (param_2 == 0x53409360) goto LAB_0055d532;
        if (param_2 < 0x37c873b0) {
          if (param_2 != 0x37c873af) {
            if (param_2 == 0x1cad26e2) goto LAB_0055d5a7;
            if (param_2 != 0x271f5bc6) {
              return;
            }
          }
          goto LAB_0055d6dc;
        }
        if ((param_2 != 0x39480621) && (param_2 != 0x427304a6)) {
          return;
        }
      }
LAB_0055d6cf:
      FUN_00555c50();
      goto LAB_0055d6dc;
    }
    if (0xcac72e3d < param_2) {
      if (param_2 < 0xf9e94d59) {
        if (((param_2 != 0xf9e94d58) && (param_2 != 0xd9656bec)) && (param_2 != 0xda5b8712)) {
          return;
        }
      }
      else if (param_2 != 0xfa94652c) {
        return;
      }
      goto LAB_0055d6cf;
    }
    if (param_2 == 0xcac72e3d) goto LAB_0055d6cf;
    if (param_2 < 0xc3dad748) {
      if (param_2 != 0xc3dad747) {
        if (param_2 == 0x99c73215) {
LAB_0055d5a7:
          iVar3 = FUN_00516a90();
          if (iVar3 != *(int *)(param_1 + 0x18)) {
            return;
          }
          *(undefined1 *)(param_1 + 0x117c) = 0;
          *(undefined1 *)(param_1 + 0xc) = 1;
          return;
        }
        if (param_2 != 0x9ac4d6d1) {
          return;
        }
        goto LAB_0055d576;
      }
      goto LAB_0055d6dc;
    }
    if (param_2 != 0xc98356ba) {
      if (param_2 != 0xc9d30688) {
        return;
      }
      goto LAB_0055d6cf;
    }
    if (*(char *)(param_1 + 0x117d) != '\0') {
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_00586760(0x7ab5521a);
      }
      *(undefined1 *)(param_1 + 0x117d) = 0;
    }
LAB_0055d60e:
    if (DAT_0091ca60 != 0) {
      return;
    }
    iVar3 = FUN_0078b260();
    if (iVar3 != 0) {
      return;
    }
    FUN_00522700();
    FUN_00513390();
    FUN_00513520();
    FUN_005134b0();
    FUN_00538230();
    FUN_00556150();
    FUN_00539920();
    FUN_0079ca30();
    iVar3 = FUN_0078bbe0();
    if (iVar3 == 0) {
      FUN_00527db0();
      FUN_00527db0(*(undefined4 *)(param_1 + 0x10),0x1ac94ca9);
      FUN_00527db0(*(undefined4 *)(param_1 + 0x10),0x6208c3f7);
    }
    else {
      FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
      FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0x1ac94ca9);
      FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0x6208c3f7);
    }
    iVar3 = FUN_00794f80();
    if (*(char *)(iVar3 + 0x71) == '\x01') {
      FUN_0079f090();
      iVar3 = FUN_0078c2a0();
      if (iVar3 == 0) {
        FUN_00761140(1);
        FUN_00537c80();
        uVar4 = 1;
        FUN_00794f80(1);
        FUN_0079e610(uVar4);
        *(undefined1 *)(param_1 + 0x11a7) = 1;
      }
    }
    if (*(char *)(param_1 + 0x1194) != '\0') {
      if (*(int *)(param_1 + 0x54) == 0) {
        *(undefined1 *)(param_1 + 0x1194) = 0;
      }
      else if (*(char *)(*(int *)(param_1 + 0x54) + 0x40) == '\0') goto LAB_0055e045;
      if (*(int *)(param_1 + 0x1168) != 0) {
        FUN_0056c6e0(*(int *)(param_1 + 0x1168));
      }
    }
LAB_0055e045:
    FUN_00522870();
    FUN_00796d30();
    FUN_00799130();
    if (DAT_009b0fa0 == 0) {
      return;
    }
    FUN_0054ad70();
    if (*(char *)(param_1 + 0x1184) == '\0') {
      return;
    }
    if ((float)DAT_00925b14 * _DAT_00890984 <= (float)*(int *)(param_1 + 0x1180) * _DAT_00890984) {
      return;
    }
    *(undefined1 *)(param_1 + 0x1184) = 0;
    if (*(int *)(param_1 + 0x1168) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x1168));
      *(undefined4 *)(param_1 + 0x1168) = 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    cVar2 = FUN_00735640();
    uVar10 = FUN_0056bc10((-(uint)(cVar2 != '\0') & 0xe562831f) + 0xb62e143c);
    FUN_00598970(uVar4,&DAT_00890978,1,0x417b2601,0x2c03fba3,0x2c03fba3,uVar10);
    FUN_00761140(1);
    FUN_0078c730();
    FUN_0079e230();
    return;
  }
LAB_0055d6dc:
  if (0x9ac4d6d1 < param_2) {
    if (param_2 < 0xd05fc3a4) {
      if (param_2 == 0xd05fc3a3) {
        puVar9 = &LAB_00519cf0;
        iVar3 = param_1 + 0x160;
        iVar5 = DAT_0091ca80 + 0x2a;
        iVar6 = param_1;
        FUN_00796d30(iVar5,iVar3,&LAB_00519cf0,param_1);
        FUN_00796e60(iVar5,iVar3,puVar9,iVar6);
        uVar4 = FUN_005985c0(*(undefined4 *)(param_1 + 0x10),"animating",0,0xff12b5c5);
        *(undefined4 *)(param_1 + 0x1168) = uVar4;
        return;
      }
      if (param_2 < 0xc519bfc5) {
        if (param_2 == 0xc519bfc4) {
          if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
            return;
          }
          FUN_0079ca30();
          iVar3 = FUN_0078bbe0();
          if (iVar3 == 0) {
            return;
          }
          FUN_0079bac0();
          FUN_0079a020();
          uVar10 = 0x73;
          uVar4 = FUN_0056bc10(0x53f9fd5c,0x73);
          FUN_005865e0(0x4162454c,0,&DAT_00890978,uVar4,uVar10);
          return;
        }
        if (param_2 == 0xc3dad747) {
          if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
            return;
          }
          *(undefined1 *)(param_1 + 0x1185) = 1;
          *(undefined1 *)(param_1 + 0x117d) = 1;
          *(undefined1 *)(param_1 + 0x117c) = 1;
          if (*(int *)(param_1 + 0x5c) != 0) {
            FUN_00586760(0x249db7b7);
          }
          FUN_005926b0(1);
          if (*(char *)(param_1 + 0x117c) == '\0') {
            FUN_00537970();
          }
          FUN_005865e0(0x4162454c,0,&DAT_00890978,&DAT_00890978,0x73);
          *(undefined1 *)(param_1 + 0xc) = 0;
          return;
        }
        if (param_2 == 0xc519bfc0) {
          if (*(char *)(param_1 + 0xc) == '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x117d) = 1;
          *(undefined1 *)(param_1 + 0x117c) = 1;
          return;
        }
        if (param_2 != 0xc519bfc3) {
          return;
        }
        if (*(int *)(DAT_0091cf90 + 0x13c) != 0) {
          return;
        }
        FUN_005257f0("OL_GameRoom_Edit_Race.fng",0,0,0);
        *(undefined1 *)(param_1 + 0x119c) = 1;
LAB_0055dd84:
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xfc8c5406,0x16a259,1);
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xcd3f1d2f,0x16a259,1);
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x5d974277,0x16a259,1);
        return;
      }
      if (param_2 == 0xc98356ba) goto LAB_0055d60e;
      if (param_2 != 0xc9d30688) {
        if (param_2 != 0xcac72e3d) {
          return;
        }
        FUN_005248c0(*(undefined4 *)(param_1 + 0x10),1);
        *(undefined1 *)(param_1 + 0x117c) = 0;
        FUN_00555c50();
        FUN_00516be0(0x7b3f16cd,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        *(undefined1 *)(param_1 + 0xc) = 1;
        return;
      }
      FUN_0079bac0();
      FUN_0079a0b0();
      *(byte *)(param_1 + 0xc) = ~(byte)(*(uint *)(DAT_0091cf90 + 300) >> 6) & 1;
      *(undefined1 *)(param_1 + 0x1185) = 0;
      *(undefined1 *)(param_1 + 0x117c) = 0;
      *(undefined1 *)(param_1 + 0x119d) = 0;
      *(undefined1 *)(param_1 + 0x119c) = 0;
      FUN_00555c50();
    }
    else {
      if (0xeced0b24 < param_2) {
        if (param_2 == 0xfa94652c) {
          FUN_00522760(0);
          return;
        }
        if (param_2 != 0xfdac2d2b) {
          return;
        }
        *(undefined1 *)(param_1 + 0x117d) = 1;
        *(undefined1 *)(param_1 + 0x117c) = 1;
        FUN_005110b0();
        *(undefined1 *)(param_1 + 0xc) = 0;
        FUN_005248c0(*(undefined4 *)(param_1 + 0x10),0);
        FUN_005257f0("UI_OLViewTrack.fng",0,0,0);
        return;
      }
      if (param_2 == 0xeced0b24) {
        FUN_00539510(param_1);
        return;
      }
      if (param_2 != 0xd9656bec) {
        if (param_2 == 0xd9feec59) goto LAB_0055dcad;
        if (param_2 != 0xda5b8712) {
          return;
        }
        FUN_0079bac0();
        FUN_0079a0b0();
        iVar3 = *(int *)(param_1 + 0x54);
        *(byte *)(param_1 + 0xc) = ~(byte)(*(uint *)(DAT_0091cf90 + 300) >> 6) & 1;
        *(undefined1 *)(param_1 + 0x117c) = 0;
        *(undefined1 *)(param_1 + 0x119d) = 0;
        *(undefined1 *)(param_1 + 0x119c) = 0;
        iVar6 = param_1;
        if (*(char *)(param_1 + 0x1185) == '\0') {
          uVar4 = 0;
          iVar3 = 0;
          puVar9 = (undefined1 *)FUN_00586550(0,0,param_1);
        }
        else {
          local_108 = 0;
          puVar7 = &local_107;
          for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = 0;
          *(undefined1 *)((int)puVar7 + 2) = 0;
          uVar4 = FUN_00586550();
          FUN_00515e20(&local_108,0x100,&DAT_008941f8,uVar4);
          uVar4 = 0;
          iVar3 = iVar3 + 0x2a;
          puVar9 = &local_108;
        }
        FUN_0079a9e0(puVar9,iVar3,uVar4,iVar6);
        FUN_007953e0(puVar9,iVar3,uVar4,iVar6);
        *(undefined1 *)(param_1 + 0x1185) = 0;
        FUN_00555c50();
        iVar3 = *(int *)(param_1 + 0x5c);
        goto LAB_0055e299;
      }
      *(undefined1 *)(param_1 + 0x119c) = 0;
      *(undefined1 *)(param_1 + 0x119d) = 0;
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xfc8c5406,0x1ca7c0,1);
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xcd3f1d2f,0x1ca7c0,1);
    }
    iVar3 = *(int *)(param_1 + 0x5c);
LAB_0055e299:
    if (iVar3 != 0) {
      FUN_00586760(0x249db7b7);
    }
    FUN_005926b0(1);
    if (*(char *)(param_1 + 0x117c) != '\0') {
      return;
    }
    FUN_00537970();
    return;
  }
  if (param_2 == 0x9ac4d6d1) {
LAB_0055d576:
    uVar4 = FUN_00598a60(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x271f5bc6,
                         0xd6c9aaab);
    *(undefined4 *)(param_1 + 0x1168) = uVar4;
    return;
  }
  if (param_2 < 0x406415e4) {
    if (param_2 != 0x406415e3) {
      if (0x2c03fba3 < param_2) {
        if (param_2 == 0x2c0e485a) {
          FUN_00533460(*(undefined4 *)(param_1 + 0x10));
          return;
        }
        if (param_2 == 0x35f8620b) {
          FUN_0079bac0();
          iVar3 = FUN_0078bcc0();
          if (iVar3 != 0) {
            FUN_00539510(param_1);
          }
          FUN_00572ed0();
          return;
        }
        if (param_2 != 0x37c873af) {
          return;
        }
        *DAT_0091cae0 = 1;
        FUN_005425d0();
        FUN_0079ca30();
        iVar3 = FUN_0078bbe0();
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 0x20c);
        }
        FUN_007353b0(uVar4);
        FUN_00794f80();
        FUN_0079d750();
        FUN_007617d0();
        if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x1168) != 0) {
          FUN_0056c6e0(*(int *)(param_1 + 0x1168));
          *(undefined4 *)(param_1 + 0x1168) = 0;
        }
        *(undefined4 *)(param_1 + 0x1168) = 0;
        FUN_005985c0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x9c6e60a4);
        uVar4 = 5;
        FUN_00793910(5);
        FUN_00791590(uVar4);
        FUN_0050d9f0((float)DAT_00925b14 * _DAT_00890984 + _DAT_0089ef80);
        *(undefined1 *)(param_1 + 0x1184) = 1;
        return;
      }
      if (param_2 == 0x2c03fba3) {
        FUN_00537900();
        return;
      }
      if (param_2 != 0xc407210) {
        if (param_2 == 0xf918baa) {
          FUN_00598c00(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x6a87dded,0x1a294dad,
                       0xd05fc3a3,0x1fab5998,0x1fab5998,1,0xd152ed92);
          return;
        }
        if (param_2 != 0x271f5bc6) {
          return;
        }
        uVar8 = FUN_00516a90();
        iVar3 = FUN_00460d20(*(undefined4 *)((int)uVar8 + 0xc),(int)((ulonglong)uVar8 >> 0x20));
        if (iVar3 != 0) {
          FUN_00525a70(*(undefined4 *)(param_1 + 0x10));
        }
        *(undefined1 *)(param_1 + 0x11a3) = 1;
        return;
      }
    }
    iVar6 = *(int *)(param_1 + 0x54) + 0x2a;
    iVar3 = FUN_00460d20(iVar6,&DAT_00890978);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = FUN_0056e340();
    iVar3 = FUN_00460d20(iVar6,uVar4);
    if (iVar3 == 0) {
      FUN_005257f0("OL_GameRoom_Car_Select.fng",0,0,0);
      *(undefined1 *)(param_1 + 0x119c) = 1;
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xfc8c5406,0x16a259,1);
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xcd3f1d2f,0x16a259,1);
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x5d974277,0x16a259,1);
      return;
    }
    DAT_0091ca80 = *(int *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x117c) = 1;
    *(undefined1 *)(param_1 + 0x11a8) = 1;
    iVar6 = DAT_0091ca80 + 0x2a;
    puVar9 = &LAB_00539450;
    iVar3 = param_1;
    FUN_00796d30(iVar6,&LAB_00539450,param_1);
    FUN_007994f0(iVar6,puVar9,iVar3);
    goto LAB_0055dd84;
  }
  if (param_2 < 0x911ab365) {
    if (param_2 == 0x911ab364) {
      if (*(char *)(param_1 + 0x11a8) != '\0') {
        return;
      }
      if ((-1 < DAT_008f32bc) && (DAT_008f32bc < 6)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x117c) = 1;
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
        uVar4 = 0xfe84c4d1;
      }
      else {
        uVar4 = 0xbcf16979;
      }
      uVar4 = FUN_00598c00(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x1a294dad,
                           0xd828e52c,0x8d770e25,0x8d770e25,0,uVar4);
      *(undefined4 *)(param_1 + 0x116c) = uVar4;
      return;
    }
    if (param_2 != 0x5073ef13) {
      if (param_2 == 0x72619778) {
        FUN_0054ad10(0xffffffff);
        uVar4 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x1198) = uVar4;
        return;
      }
      if (param_2 != 0x7eabca56) {
        return;
      }
      FUN_00586ca0(*(undefined4 *)(param_1 + 0x54));
      uVar8 = FUN_00513430(*(undefined4 *)(param_3 + 0x10));
      iVar6 = (int)((ulonglong)uVar8 >> 0x20);
      iVar3 = (int)uVar8;
      if (iVar6 < iVar3) {
        uVar4 = 1;
        iVar3 = iVar3 - iVar6;
      }
      else {
        if (iVar6 <= iVar3) {
          FUN_00516be0(0x406415e3,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
          return;
        }
        uVar4 = 0xffffffff;
        iVar3 = iVar6 - iVar3;
      }
      if (iVar3 < 1) {
        return;
      }
      do {
        FUN_0054ad10(uVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    goto LAB_0055dc88;
  }
  if (param_2 == 0x911c0a4b) {
    FUN_005a8c50();
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00586760(0x249db7b7);
    }
    FUN_005926b0(1);
    if (*(char *)(param_1 + 0x117c) == '\0') {
      FUN_00537970();
    }
    uVar4 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x1198) = uVar4;
    return;
  }
  if (param_2 != 0x9803f6e2) {
    return;
  }
  iVar3 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x54));
  FUN_005a5540();
  iVar6 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x54));
  if (iVar3 != iVar6) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00586760(0x249db7b7);
    }
    FUN_005926b0(1);
    if (*(char *)(param_1 + 0x117c) == '\0') {
      FUN_00537970();
    }
  }
  FUN_00589900();
  cVar2 = FUN_0054e890(*(undefined4 *)(param_1 + 0x1164));
  if (cVar2 == '\0') {
    cVar2 = FUN_0054e890(*(undefined4 *)(param_1 + 0xe4));
    if (cVar2 == '\0') {
      cVar2 = FUN_0054e890(*(undefined4 *)(param_1 + 0xe8));
      if (cVar2 != '\0') {
        FUN_00522fb0();
      }
    }
    else {
      FUN_00522f60();
    }
  }
  else {
    if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
      return;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_005865e0(0x4162454c,0,&DAT_00890978,&DAT_00890978,0x73);
  }
  iVar3 = *(int *)(param_1 + 0x144);
  if (iVar3 < 2) {
    if (iVar3 == 1) {
LAB_0055dc53:
      FUN_00522fb0();
    }
    else if ((iVar3 == -10000) || (iVar3 == -1)) {
      FUN_00522f60();
    }
  }
  else if (iVar3 == 10000) goto LAB_0055dc53;
  fVar1 = (float)DAT_00987f6c;
  if (fVar1 == _DAT_00890968) {
    return;
  }
  if (_DAT_00890968 < fVar1) {
LAB_0055dc88:
    FUN_00522f60();
    return;
  }
  if (_DAT_00890968 <= fVar1) {
    return;
  }
LAB_0055dcad:
  FUN_00522fb0();
  return;
}

