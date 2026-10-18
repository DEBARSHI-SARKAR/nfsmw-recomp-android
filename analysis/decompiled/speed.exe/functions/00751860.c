/* speed.exe 00751860 FUN_00751860; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 * calls 00460bf0 FUN_00460bf0
 * calls 004647c0 FUN_004647c0
 * calls 0074d0d0 FUN_0074d0d0
 * calls 00739e90 FUN_00739e90
 * calls 00460c20 FUN_00460c20
 * calls 00753320 FUN_00753320
 */

void FUN_00751860(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  short *psVar19;
  short *psVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  char *pcVar25;
  int *local_68;
  int local_60;
  int local_5c;
  int local_58;
  undefined1 local_40 [64];
  
  puVar4 = param_1;
  iVar22 = *param_2 * 0xd0 + 0x10 + DAT_009b09d8;
  iVar23 = 0;
  puVar24 = param_1;
  for (iVar21 = 0xe0; iVar21 != 0; iVar21 = iVar21 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  FUN_004647c0(local_40,"%s_SKIN1",iVar22);
  uVar5 = FUN_00460bf0(local_40);
  param_1[0xb0] = uVar5;
  FUN_004647c0(local_40,"%s_SKIN1B",iVar22);
  uVar5 = FUN_00460bf0(local_40);
  param_1[0xb1] = uVar5;
  uVar5 = FUN_00460bf0("GLOBAL_SKIN1");
  param_1[0xb2] = uVar5;
  if (param_2[0x54] == 0) {
    uVar5 = 0;
    param_1[0xb3] = 0;
  }
  else {
    uVar5 = FUN_0074d0d0();
    uVar5 = FUN_00460c20("_WHEEL",uVar5);
    param_1[0xb3] = uVar5;
    uVar5 = FUN_00460bf0("SPINNER_TEXTURE");
    iVar21 = FUN_00739730(uVar5,0);
    if (iVar21 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar21 + 4);
    }
  }
  param_1[0xb4] = uVar5;
  uVar5 = FUN_00460bf0("SPOILER_SKIN1");
  param_1[0xb6] = uVar5;
  uVar5 = FUN_00460bf0("ROOF_SKIN");
  param_1[0xb7] = uVar5;
  if (param_2[0xf] == 0) {
    iVar21 = param_1[0xb0];
    param_1[200] = iVar21;
    param_1[0xcd] = iVar21;
    param_1[0xcb] = 0;
    param_1[0xcc] = 0;
  }
  else {
    param_1[200] = param_2[0xf];
    param_1[0xcb] = param_2[0x10];
    param_1[0xcc] = param_2[0x11];
    iVar21 = param_2[0xf];
    if (iVar21 == 0) {
      if (param_2[0x5e] == 0) {
        iVar21 = 0;
      }
      else {
        iVar21 = FUN_0074d0d0();
      }
    }
    param_1[0xcd] = iVar21;
    iVar21 = param_2[0xf];
    if (iVar21 == 0) {
      if (param_2[0x5e] == 0) {
        iVar21 = 0;
      }
      else {
        iVar21 = FUN_0074d0d0();
      }
    }
  }
  param_1[0xce] = iVar21;
  iVar21 = param_1[200];
  param_1[0xc9] = 0;
  param_1[0xca] = iVar21;
  if (param_2[0xf] == 0) {
    if (iVar21 != 0) {
      iVar23 = FUN_00739e90(param_1,0,0x57,iVar21);
    }
    if (param_1[0xc9] != 0) {
      iVar21 = FUN_00739e90(param_1,iVar23,0x57,param_1[0xc9]);
      iVar23 = iVar23 + iVar21;
    }
  }
  else {
    iVar23 = FUN_00739e90(param_1,0,0x57,param_2[0xf]);
  }
  iVar21 = param_2[0x10];
  if ((iVar21 != 0) || (iVar21 = param_1[0xcb], iVar21 != 0)) {
    iVar21 = FUN_00739e90(param_1,iVar23,0x57,iVar21);
    iVar23 = iVar23 + iVar21;
  }
  iVar21 = param_2[0x11];
  if ((iVar21 != 0) || (iVar21 = param_1[0xcc], iVar21 != 0)) {
    iVar21 = FUN_00739e90(param_1,iVar23,0x57,iVar21);
    iVar23 = iVar23 + iVar21;
  }
  uVar5 = FUN_00753320(param_1 + 0x57,0,0x57,param_2);
  FUN_004647c0(local_40,"%s_SKIN2",iVar22);
  iVar6 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_SKIN3",iVar22);
  iVar7 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_SKIN4",iVar22);
  iVar8 = FUN_00460bf0(local_40);
  iVar21 = 0;
  if (iVar6 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar6) {
          iVar21 = 0;
          goto LAB_00751b1f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar6;
      iVar21 = 1;
    }
  }
LAB_00751b1f:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar7 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar7) {
          iVar21 = 0;
          goto LAB_00751b51;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar7;
      iVar21 = 1;
    }
  }
LAB_00751b51:
  iVar23 = iVar23 + iVar21;
  if (iVar8 == 0) {
LAB_00751b57:
    iVar21 = 0;
  }
  else {
    iVar21 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar8) goto LAB_00751b57;
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar8;
      iVar21 = 1;
    }
  }
  iVar23 = iVar23 + iVar21;
  iVar21 = param_2[0x52];
  iVar6 = param_2[0x53];
  FUN_004647c0(local_40,"%s_KIT00_HEADLIGHT",iVar22);
  uVar9 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_KIT00_BRAKELIGHT",iVar22);
  uVar10 = FUN_00460bf0(local_40);
  if ((iVar21 != 0) && (iVar21 = FUN_0074d0d0(), iVar21 != 0)) {
    uVar9 = FUN_0074d0d0();
  }
  if ((iVar6 != 0) && (iVar21 = FUN_0074d0d0(), iVar21 != 0)) {
    uVar10 = FUN_0074d0d0();
  }
  uVar11 = FUN_00460bf0("HEADLIGHT_LEFT");
  param_1[0xb9] = uVar11;
  uVar11 = FUN_00460bf0("HEADLIGHT_RIGHT");
  param_1[0xba] = uVar11;
  uVar11 = FUN_00460bf0("HEADLIGHT_GLASS_LEFT");
  param_1[0xbe] = uVar11;
  uVar11 = FUN_00460bf0("HEADLIGHT_GLASS_RIGHT");
  param_1[0xbf] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_LEFT");
  param_1[0xbb] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_RIGHT");
  param_1[0xbc] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_CENTRE");
  param_1[0xbd] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_GLASS_LEFT");
  param_1[0xc0] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_GLASS_RIGHT");
  param_1[0xc1] = uVar11;
  uVar11 = FUN_00460bf0("BRAKELIGHT_GLASS_CENTRE");
  param_1[0xc2] = uVar11;
  param_1[0xc3] = 0;
  uVar11 = FUN_00460c20(&DAT_008b4ee4,uVar9);
  param_1[0xd0] = uVar11;
  uVar11 = FUN_00460c20(&DAT_008b4ee0,uVar9);
  param_1[0xd1] = uVar11;
  uVar11 = FUN_00460c20("_DAMAGE0",uVar9);
  param_1[0xd2] = uVar11;
  uVar11 = FUN_00460c20("_GLASS_OFF",uVar9);
  param_1[0xd3] = uVar11;
  uVar11 = FUN_00460c20("_GLASS_ON",uVar9);
  param_1[0xd4] = uVar11;
  uVar9 = FUN_00460c20("_GLASS_DAMAGE0",uVar9);
  param_1[0xd5] = uVar9;
  uVar9 = FUN_00460c20(&DAT_008b4ee4,uVar10);
  param_1[0xd6] = uVar9;
  uVar9 = FUN_00460c20(&DAT_008b4ee0,uVar10);
  param_1[0xd7] = uVar9;
  uVar9 = FUN_00460c20("_DAMAGE0",uVar10);
  param_1[0xd8] = uVar9;
  uVar9 = FUN_00460c20("_GLASS_OFF",uVar10);
  param_1[0xd9] = uVar9;
  uVar9 = FUN_00460c20("_GLASS_ON",uVar10);
  param_1[0xda] = uVar9;
  uVar9 = FUN_00460c20("_GLASS_DAMAGE0",uVar10);
  param_1[0xdb] = uVar9;
  iVar21 = param_1[0xd0];
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  if (iVar21 == 0) {
LAB_00751dba:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_00751dba;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar21 = param_1[0xd1];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751e10;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751e10:
  iVar21 = param_1[0xd3];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751e41;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751e41:
  iVar21 = param_1[0xd4];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751e72;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751e72:
  iVar21 = param_1[0xd6];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751ea3;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751ea3:
  iVar21 = param_1[0xd7];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751ed4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751ed4:
  iVar21 = param_1[0xd9];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751f05;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751f05:
  iVar21 = param_1[0xda];
  iVar23 = iVar23 + iVar6;
  iVar6 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) {
          iVar6 = 0;
          goto LAB_00751f36;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
LAB_00751f36:
  iVar23 = iVar23 + iVar6;
  FUN_004647c0(local_40,"%s_MISC",iVar22);
  iVar6 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_MISC_N",iVar22);
  iVar7 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_INTERIOR",iVar22);
  iVar8 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_INTERIOR_N",iVar22);
  iVar12 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_BADGING",iVar22);
  iVar13 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_BADGING_N",iVar22);
  iVar14 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_DRIVER",iVar22);
  iVar15 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_ENGINE",iVar22);
  iVar16 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_BADGING_EU",iVar22);
  iVar17 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_LICENSE_PLATE",iVar22);
  uVar9 = FUN_00460bf0(local_40);
  param_1[199] = uVar9;
  iVar21 = 0;
  param_1[0xb5] = iVar13;
  if (iVar6 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar6) {
          iVar21 = 0;
          goto LAB_007520af;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar6;
      iVar21 = 1;
    }
  }
LAB_007520af:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar7 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar7) {
          iVar21 = 0;
          goto LAB_007520df;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar7;
      iVar21 = 1;
    }
  }
LAB_007520df:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar8 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar8) {
          iVar21 = 0;
          goto LAB_0075210f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar8;
      iVar21 = 1;
    }
  }
LAB_0075210f:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar12 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar12) {
          iVar21 = 0;
          goto LAB_0075213f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar12;
      iVar21 = 1;
    }
  }
LAB_0075213f:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar15 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar15) {
          iVar21 = 0;
          goto LAB_0075216f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar15;
      iVar21 = 1;
    }
  }
LAB_0075216f:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar16 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar16) {
          iVar21 = 0;
          goto LAB_0075219f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar16;
      iVar21 = 1;
    }
  }
LAB_0075219f:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar13 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar13) {
          iVar21 = 0;
          goto LAB_007521d1;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar13;
      iVar21 = 1;
    }
  }
LAB_007521d1:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar14 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar14) {
          iVar21 = 0;
          goto LAB_00752200;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar14;
      iVar21 = 1;
    }
  }
LAB_00752200:
  iVar23 = iVar23 + iVar21;
  iVar21 = 0;
  if (iVar17 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar21] == iVar17) {
          iVar21 = 0;
          goto LAB_0075222f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar23);
    }
    iVar21 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar17;
      iVar21 = 1;
    }
  }
LAB_0075222f:
  iVar23 = iVar23 + iVar21;
  FUN_004647c0(local_40,"%s_SIDELIGHT",iVar22);
  iVar21 = FUN_00460bf0(local_40);
  if (iVar21 == 0) {
LAB_00752252:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_00752252;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar23 = iVar23 + iVar6;
  FUN_004647c0(local_40,"%s_DOOR_HANDLE",iVar22);
  iVar21 = FUN_00460bf0(local_40);
  if (iVar21 == 0) {
LAB_0075229e:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_0075229e;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar23 = iVar23 + iVar6;
  FUN_004647c0(local_40,"%s_LOGO",iVar22);
  iVar21 = FUN_00460bf0(local_40);
  if (iVar21 == 0) {
LAB_007522e6:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_007522e6;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar23 = iVar23 + iVar6;
  if (DAT_00925e90 != 6) {
    uVar9 = FUN_00460bf0("AUDIO_SKIN");
    iVar21 = FUN_00739e90(param_1,iVar23,0x57,uVar9);
    iVar23 = iVar23 + iVar21;
  }
  puVar18 = &DAT_008a2ad8;
  if (param_3 == (int *)0x0) {
    puVar18 = &DAT_008a2ad4;
  }
  FUN_004647c0(local_40,"%s_SHADOW%s",iVar22,puVar18);
  iVar21 = FUN_00460bf0(local_40);
  param_1[0xdf] = iVar21;
  if (iVar21 == 0) {
LAB_0075236c:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_0075236c;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar23 = iVar23 + iVar6;
  FUN_004647c0(local_40,"%s_NEON",iVar22);
  iVar21 = FUN_00460bf0(local_40);
  if (iVar21 == 0) {
LAB_007523b4:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar6] == iVar21) goto LAB_007523b4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar23);
    }
    iVar6 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar6 = 1;
    }
  }
  iVar23 = iVar23 + iVar6;
  FUN_004647c0(local_40,"%s_TIRE",iVar22);
  uVar9 = FUN_00460bf0(local_40);
  param_1[0xc4] = uVar9;
  FUN_004647c0(local_40,"%s_TIRE_N",iVar22);
  iVar21 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_RIM",iVar22);
  uVar9 = FUN_00460bf0(local_40);
  param_1[0xc5] = uVar9;
  FUN_004647c0(local_40,"%s_RIM_BLUR",iVar22);
  uVar9 = FUN_00460bf0(local_40);
  param_1[0xc6] = uVar9;
  FUN_004647c0(local_40,"%s_TREAD",iVar22);
  iVar6 = FUN_00460bf0(local_40);
  FUN_004647c0(local_40,"%s_TREAD_N",iVar22);
  iVar7 = FUN_00460bf0(local_40);
  iVar22 = param_1[0xc4];
  if (iVar22 == 0) {
LAB_007524a4:
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar8] == iVar22) goto LAB_007524a4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar23);
    }
    iVar8 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar22;
      iVar8 = 1;
    }
  }
  iVar22 = param_1[0xc5];
  iVar23 = iVar23 + iVar8;
  iVar8 = 0;
  if (iVar22 != 0) {
    if (0 < iVar23) {
      iVar8 = 0;
      do {
        if (param_1[iVar8] == iVar22) {
          iVar8 = 0;
          goto LAB_007524ff;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar23);
    }
    iVar8 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar22;
      iVar8 = 1;
    }
  }
LAB_007524ff:
  iVar22 = param_1[0xc6];
  iVar23 = iVar23 + iVar8;
  iVar8 = 0;
  if (iVar22 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar8] == iVar22) {
          iVar8 = 0;
          goto LAB_00752530;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar23);
    }
    iVar8 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar22;
      iVar8 = 1;
    }
  }
LAB_00752530:
  iVar23 = iVar23 + iVar8;
  iVar22 = 0;
  if (iVar21 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar22] == iVar21) {
          iVar22 = 0;
          goto LAB_0075255f;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar23);
    }
    iVar22 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar21;
      iVar22 = 1;
    }
  }
LAB_0075255f:
  iVar23 = iVar23 + iVar22;
  iVar22 = 0;
  if (iVar6 != 0) {
    if (0 < iVar23) {
      do {
        if (param_1[iVar22] == iVar6) {
          iVar22 = 0;
          goto LAB_00752591;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar23);
    }
    iVar22 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar6;
      iVar22 = 1;
    }
  }
LAB_00752591:
  iVar23 = iVar23 + iVar22;
  if (iVar7 == 0) {
LAB_00752597:
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    if (0 < iVar23) {
      do {
        if (param_1[iVar22] == iVar7) goto LAB_00752597;
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar23);
    }
    iVar22 = iVar23;
    if (iVar23 < 0x57) {
      param_1[iVar23] = iVar7;
      iVar22 = 1;
    }
  }
  iVar23 = iVar23 + iVar22;
  iVar22 = FUN_00460bf0(&DAT_008aeb6c);
  iVar21 = FUN_00460bf0("SHAPE");
  FUN_00460bf0("SMALL");
  FUN_00460bf0("MEDIUM");
  FUN_00460bf0("LARGE");
  iVar6 = FUN_00460bf0("SQUARE");
  iVar7 = FUN_00460bf0(&DAT_008b4ccc);
  iVar8 = FUN_00460bf0(&DAT_008b4cc4);
  param_1 = param_2 + 0x58;
  local_68 = param_2 + 0x65;
  local_58 = 6;
LAB_00752650:
  if ((*param_1 != 0) && (uVar2 = *(ushort *)(*param_1 + 10), uVar2 != 0xffff)) {
    iVar12 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    psVar20 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    iVar13 = 0;
    if (0 < iVar12) {
      psVar19 = psVar20;
      do {
        psVar19 = psVar19 + 1;
        piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar19 * 8);
        if ((iVar22 == 0) || (*piVar1 == iVar22)) {
          if (piVar1 != (int *)0x0) {
            sVar3 = *psVar20;
            iVar12 = 0;
            if (0 < sVar3) goto LAB_00752703;
          }
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
    }
  }
  goto LAB_0075287e;
  while (iVar12 = iVar12 + 1, iVar12 < sVar3) {
LAB_00752703:
    psVar20 = psVar20 + 1;
    piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar20 * 8);
    if ((iVar21 == 0) || (*piVar1 == iVar21)) {
      if (piVar1 != (int *)0x0) {
        iVar12 = FUN_00739730(iVar21,0);
        if (iVar12 == 0) {
          local_60 = 0;
        }
        else {
          local_60 = *(int *)(iVar12 + 4);
        }
        param_3 = local_68;
        local_5c = 8;
        goto LAB_00752770;
      }
      break;
    }
  }
  goto LAB_0075287e;
LAB_00752770:
  do {
    iVar12 = *param_3;
    if (iVar12 != 0) {
      iVar13 = FUN_00460bf0(&DAT_008b4cbc);
      uVar2 = *(ushort *)(iVar12 + 10);
      if (uVar2 != 0xffff) {
        iVar12 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
        psVar20 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
        iVar14 = 0;
        if (0 < iVar12) {
          do {
            psVar20 = psVar20 + 1;
            piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar20 * 8);
            if ((iVar13 == 0) || (*piVar1 == iVar13)) {
              if (piVar1 != (int *)0x0) {
                iVar12 = piVar1[1];
                goto LAB_007527f4;
              }
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar12);
        }
      }
      iVar12 = 0;
LAB_007527f4:
      if (local_60 == iVar6) {
        pcVar25 = "_SQUARE";
LAB_0075282b:
        iVar12 = FUN_00460c20(pcVar25,iVar12);
      }
      else {
        if (local_60 == iVar7) {
          pcVar25 = "_RECT";
          goto LAB_0075282b;
        }
        if (local_60 == iVar8) {
          pcVar25 = "_WIDE";
          goto LAB_0075282b;
        }
      }
      if (iVar12 == 0) {
LAB_00752837:
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        if (0 < iVar23) {
          do {
            if (puVar4[iVar13] == iVar12) goto LAB_00752837;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar23);
        }
        iVar13 = iVar23;
        if (iVar23 < 0x57) {
          puVar4[iVar23] = iVar12;
          iVar13 = 1;
        }
      }
      iVar23 = iVar23 + iVar13;
    }
    param_3 = param_3 + 1;
    local_5c = local_5c + -1;
  } while (local_5c != 0);
LAB_0075287e:
  param_1 = param_1 + 1;
  local_68 = local_68 + 8;
  local_58 = local_58 + -1;
  if (local_58 == 0) {
    puVar4[0xae] = iVar23;
    puVar4[0xaf] = uVar5;
    return;
  }
  goto LAB_00752650;
}

