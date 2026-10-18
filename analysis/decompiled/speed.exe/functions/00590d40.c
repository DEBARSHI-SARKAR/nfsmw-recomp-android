/* speed.exe 00590d40 FUN_00590d40; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0066b910 FUN_0066b910
 * calls 00456cb0 FUN_00456cb0
 * calls 00739e10 FUN_00739e10
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 * calls 00590a20 FUN_00590a20
 * calls 005af1c0 FUN_005af1c0
 * calls 00455bc0 FUN_00455bc0
 * calls 00452430 FUN_00452430
 * calls 00460dd0 FUN_00460dd0
 * calls 005815b0 FUN_005815b0
 * calls 00748120 FUN_00748120
 * calls 00456b00 FUN_00456b00
 * calls 00456b20 FUN_00456b20
 */

void __fastcall FUN_00590d40(int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2c;
  byte local_24;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872940;
  local_c = ExceptionList;
  iVar8 = 200;
  piVar7 = param_1;
  ExceptionList = &local_c;
  do {
    *piVar7 = -1;
    piVar7 = piVar7 + 5;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar7 = param_1 + 0x44d;
  iVar8 = 0x4b;
  do {
    *(undefined1 *)piVar7 = 0xff;
    piVar7 = piVar7 + 0x66;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar7 = param_1 + 0x21ca;
  iVar8 = 0x19;
  do {
    *(undefined1 *)piVar7 = 0xff;
    piVar7 = piVar7 + 0xe;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar2 = (undefined4 *)FUN_00590a20("M3GTRCAREERSTART");
  *puVar2 = 0x12345678;
  puVar2[3] = 0xf0020;
  iVar9 = 0;
  iVar8 = FUN_00739e10();
  if (0 < iVar8) {
    do {
      iVar8 = FUN_00748120(iVar9);
      iVar8 = iVar8 + 0x28;
      uVar3 = FUN_005af1c0(iVar8);
      if (uVar3 < 0x54655134) {
        if (uVar3 != 0x54655133) {
          if (uVar3 < 0x3d8a6d2) {
            if ((uVar3 != 0x3d8a6d1) && (uVar3 != 0x2d642b8)) {
              bVar10 = uVar3 == 0x3d3401a;
LAB_00590e00:
              if (!bVar10) goto LAB_00590e02;
            }
          }
          else if (uVar3 != 0x363a1fea) {
            bVar10 = uVar3 == 0x54653c71;
            goto LAB_00590e00;
          }
        }
LAB_00590e5e:
        iVar8 = FUN_00590a20(iVar8);
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + 0xc) = 0xf0008;
        }
      }
      else {
        if (uVar3 < 0xe1075863) {
          if ((uVar3 != 0xe1075862) && (uVar3 != 0x582f21d9)) {
            bVar10 = uVar3 == 0x634d1bd2;
            goto LAB_00590e00;
          }
          goto LAB_00590e5e;
        }
        if (uVar3 == 0xe115ead0) goto LAB_00590e5e;
LAB_00590e02:
        uVar3 = FUN_005af1c0(iVar8);
        if (uVar3 < 0x2cf370f1) {
          if (uVar3 != 0x2cf370f0) {
            if (0x136253 < uVar3) {
              bVar10 = uVar3 == 0x3a94520;
              goto LAB_00590e89;
            }
            if ((uVar3 < 0x13624e) && ((uVar3 < 0x965f || (0x9666 < uVar3)))) goto LAB_00590e8b;
          }
          goto LAB_00590e5e;
        }
        if ((uVar3 == 0x2cf385b2) || (uVar3 == 0x34498eb2)) goto LAB_00590e5e;
        bVar10 = uVar3 == 0xcb6aaf2f;
LAB_00590e89:
        if (bVar10) goto LAB_00590e5e;
LAB_00590e8b:
        iVar4 = FUN_00460dd0(iVar8,"M3GTRCAREERSTART");
        if ((iVar4 == 0) || (DAT_00926129 != '\0')) {
          FUN_00590a20(iVar8);
        }
      }
      FUN_0066b910();
      iVar9 = iVar9 + 1;
      iVar8 = FUN_00739e10();
    } while (iVar9 < iVar8);
  }
  FUN_00455bc0(0x4a97ec8f);
  iVar8 = FUN_00456b00();
  do {
    if (iVar8 == 0) {
      param_1[9000] = 0;
      *(undefined2 *)(param_1 + 0x2329) = 0;
      *(undefined2 *)((int)param_1 + 0x8ca6) = 0;
      param_1[0x232a] = 0;
      param_1[0x232b] = 0;
      param_1[0x232e] = 0;
      param_1[0x232c] = 0;
      param_1[0x232f] = 0;
      param_1[0x232d] = 0;
      param_1[0x2330] = 0;
      param_1[0x2331] = 0;
      ExceptionList = local_c;
      return;
    }
    uVar12 = 0;
    uVar11 = 0;
    uVar5 = FUN_00455fd0(0x4a97ec8f,iVar8,0,0);
    FUN_00452380(uVar5,uVar11,uVar12);
    local_4 = 0;
    if (local_2c == 0) {
      local_2c = FUN_006269b0(0x50);
    }
    local_4 = 1;
    if ((local_24 & 1) == 0) {
      iVar9 = FUN_00454810(0x85885722,0);
      if (iVar9 == 0) {
        iVar9 = FUN_006269b0(0xc);
      }
      FUN_00456cb0(iVar9,0,0);
      local_4._0_1_ = 2;
      if (local_18 == 0) {
        local_18 = FUN_006269b0(0x5c);
      }
      pcVar1 = *(char **)(local_2c + 0x1c);
      local_4 = CONCAT31(local_4._1_3_,3);
      pcVar6 = (char *)FUN_00454810(0xf099b6ac,0);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)FUN_006269b0(1);
      }
      if ((((*pcVar6 != '\0') || (DAT_00926127 != '\0')) && (pcVar1 != (char *)0x0)) &&
         ((*pcVar1 != '\0' && ((local_24 & 1) == 0)))) {
        iVar9 = 0;
        piVar7 = param_1;
        do {
          if (*piVar7 == -1) {
            piVar7 = param_1 + iVar9 * 5;
            FUN_005815b0();
            *piVar7 = iVar9;
            if (piVar7 != (int *)0x0) {
              iVar9 = FUN_00452430();
              piVar7[1] = iVar9;
              iVar9 = FUN_00452430();
              piVar7[2] = iVar9;
              FUN_005815b0();
            }
            break;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 5;
        } while (iVar9 < 200);
      }
      FUN_0066b910();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045a430();
    }
    iVar8 = FUN_00456b20(iVar8);
    local_4 = 0xffffffff;
    FUN_0045a430();
  } while( true );
}

