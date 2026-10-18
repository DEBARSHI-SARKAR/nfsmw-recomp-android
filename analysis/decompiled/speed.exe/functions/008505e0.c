/* speed.exe 008505e0 FUN_008505e0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084fda0 FUN_0084fda0
 * calls 007d6cb0 __security_check_cookie
 * calls 00850500 FUN_00850500
 * calls 00850270 FUN_00850270
 * calls 00850310 FUN_00850310
 * calls 0084b110 FUN_0084b110
 * calls 0084fd30 FUN_0084fd30
 * calls 0083f840 FUN_0083f840
 * calls 0084b1e0 FUN_0084b1e0
 * calls 0084fe10 FUN_0084fe10
 * calls 0084fef0 FUN_0084fef0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008505e0(void)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_47c;
  uint local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  undefined4 local_464;
  undefined4 local_460;
  uint local_45c;
  undefined4 local_458;
  undefined4 local_454;
  uint local_44c;
  undefined4 local_448;
  undefined4 local_22c;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_4;
  
  local_464 = 0;
  uVar7 = 0;
  local_45c = 0;
  iVar8 = 0;
  local_458 = 0;
  local_47c = 0;
  local_470 = 0;
  local_460 = 0;
  DAT_009c3ab0 = 0xffffffff;
  local_4 = DAT_00906980;
  iVar1 = DAT_009c3cfc;
  for (iVar3 = DAT_009c3cfc; local_474 = iVar8, iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x7c)) {
    local_474 = *(int *)(iVar3 + 0x80);
    if ((local_474 != 0) && (local_474 != iVar8)) {
      local_46c = 0x10;
      local_46c = FUN_0084b1e0(local_474,&DAT_009c3ab8,0x220,0,&local_464,&local_46c);
      iVar1 = DAT_009c3cfc;
      uVar7 = local_460;
      iVar8 = local_474;
      if (0 < local_46c) {
        DAT_009c3ab0 = local_46c - 8;
        DAT_009c3ab4 = (((local_45c & 0xff) << 8 | local_45c >> 8 & 0xff) << 8 |
                       local_45c >> 0x10 & 0xff) << 8 | local_45c >> 0x18;
        local_47c = 1;
        break;
      }
    }
  }
  uVar6 = local_460;
  iVar3 = 0;
  for (; local_460 = uVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x7c)) {
    DVar2 = GetTickCount();
    if ((((local_470 == 0) && (local_474 == *(int *)(iVar1 + 0x80))) &&
        (*(int *)(iVar1 + 0x94) == 3)) && (DAT_009c3ab0 == 0)) {
      if ((DAT_009c3ab8 == 1) && (*(int *)(iVar1 + 0x98) == DAT_009c3abc)) {
        local_470 = iVar1;
      }
LAB_00850735:
      if (((*(int *)(iVar1 + 0x94) != 3) && (*(int *)(iVar1 + 0x94) != 5)) &&
         ((local_474 == *(int *)(iVar1 + 0x80) &&
          (iVar3 = FUN_0083f840(iVar1 + 0x84,&local_464), iVar3 == 0)))) {
        *(uint *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + DAT_009c3ab0;
        *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + 1;
        if (((DAT_009c3ab8 == 1) || (DAT_009c3ab8 == 2)) || (DAT_009c3ab8 == 3)) {
          FUN_0084fe10();
        }
        else if (*(int *)(iVar1 + 0x94) == 4) {
          if (DAT_009c3ab8 == 4) {
            *(uint *)(iVar1 + 0xe8) = DAT_009c3ab4;
            FUN_00850270();
          }
          else if (DAT_009c3ab8 < 0x10000001) {
            *(uint *)(iVar1 + 0xe8) = DAT_009c3ab4;
            FUN_00850270();
            FUN_00850310(&DAT_009c3ab0);
          }
          else {
            local_468 = *(int *)(iVar1 + 0xb0);
            local_478 = DAT_009c3ab8 >> 0x1c;
            DAT_009c3890 = (DAT_009c3ab8 & 0xfffffff) - local_478;
            _DAT_009c388c = DAT_009c3ab4;
            _DAT_009c3894 = DAT_009c3abc;
            *(uint *)(iVar1 + 0xe8) = DAT_009c3ab4;
            do {
              uVar7 = DAT_009c3ab0;
              if (0 < (int)local_478) {
                iVar3 = DAT_009c3ab0 + 3;
                DAT_009c3ab0 = DAT_009c3ab0 - 1;
                uVar7 = (uint)*(byte *)((int)&DAT_009c3abc + iVar3);
              }
              DAT_009c3ab0 = DAT_009c3ab0 - uVar7;
              puVar9 = (undefined4 *)((int)&DAT_009c3ac0 + DAT_009c3ab0);
              puVar10 = &DAT_009c3898;
              _DAT_009c3888 = uVar7;
              for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              FUN_00850270();
              iVar3 = FUN_00850310(&DAT_009c3888);
              if (iVar3 < 0) {
                local_478 = 0;
              }
              else if ((0 < (int)local_478) && (local_468 != *(int *)(iVar1 + 0xb0))) {
                local_468 = *(int *)(iVar1 + 0xb0);
              }
              DAT_009c3890 = DAT_009c3890 + 1;
              local_478 = local_478 - 1;
            } while (-1 < (int)local_478);
          }
        }
        DAT_009c3ab0 = 0xffffffff;
      }
    }
    else if (-1 < (int)DAT_009c3ab0) goto LAB_00850735;
    if ((*(int *)(iVar1 + 0x94) == 2) && (1000 < DVar2 - *(int *)(iVar1 + 0xe4))) {
      local_448 = *(undefined4 *)(iVar1 + 0x98);
      local_454 = 0;
      local_44c = 1;
      iVar3 = FUN_0084b110(*(undefined4 *)(iVar1 + 0x80),&local_44c,8,0,iVar1 + 0x84,0x10);
      if (iVar3 == 8) {
        DVar4 = GetTickCount();
        *(DWORD *)(iVar1 + 0xe4) = DVar4;
        *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 8;
        *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 1;
        if (0xff < local_44c) {
          *(undefined4 *)(iVar1 + 0xbc) = 0;
        }
      }
      else {
        *(int *)(iVar1 + 0xe0) = iVar3;
      }
    }
    if ((*(int *)(iVar1 + 0x94) == 4) && (*(int *)(iVar1 + 0xd0) != *(int *)(iVar1 + 200))) {
      FUN_0084fef0();
    }
    if (((*(int *)(iVar1 + 0x94) == 4) && (120000 < DVar2 - *(int *)(iVar1 + 0xe8))) &&
       (DVar2 - *(int *)(iVar1 + 0xe4) < 2000)) {
      FUN_0084fda0();
    }
    if (((*(int *)(iVar1 + 0x94) == 3) && (*(short *)(iVar1 + 0x84) == 2)) &&
       (*(int *)(iVar1 + 0xe4) + 1000U < DVar2)) {
      local_220 = *(undefined4 *)(iVar1 + 0x98);
      local_22c = 0;
      local_224 = 5;
      FUN_0084fd30();
    }
    if ((*(int *)(iVar1 + 0xf4) == 0) && (*(int *)(iVar1 + 0xec) + 0xfaU < DVar2)) {
      *(DWORD *)(iVar1 + 0xec) = DVar2;
      *(undefined4 *)(iVar1 + 0xf4) = 4;
    }
    if ((*(int *)(iVar1 + 0xf0) == 0) && (*(int *)(iVar1 + 0xf4) != 0)) {
      *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + 1;
      if (*(code **)(iVar1 + 0xf8) != (code *)0x0) {
        (**(code **)(iVar1 + 0xf8))(iVar1,*(int *)(iVar1 + 0xf4));
      }
      *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + -1;
      *(undefined4 *)(iVar1 + 0xf4) = 0;
      DVar2 = GetTickCount();
    }
    if (((*(int *)(iVar1 + 0x94) == 4) && (*(int *)(iVar1 + 0xd0) == *(int *)(iVar1 + 200))) &&
       ((((uVar7 = DVar2 - *(int *)(iVar1 + 0xe4), 100 < uVar7 &&
          ((*(int *)(iVar1 + 0xb8) != *(int *)(iVar1 + 0xb0) ||
           (*(int *)(iVar1 + 200) != *(int *)(iVar1 + 0xcc))))) || (0x9c4 < uVar7)) ||
        (0x7ff < *(int *)(iVar1 + 0xbc))))) {
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      FUN_00850500();
    }
    uVar7 = local_460;
    uVar6 = local_460;
    iVar3 = DAT_009c3cfc;
  }
  local_460._2_1_ = (byte)(uVar6 >> 0x10);
  local_460._3_1_ = (byte)(uVar6 >> 0x18);
  if (((-1 < (int)DAT_009c3ab0) && (DAT_009c3ab8 == 5)) && ((short)local_464 == 2)) {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x7c)) {
      if (((*(int *)(iVar3 + 0x94) == 2) && (*(short *)(iVar3 + 0x84) == 2)) &&
         ((*(int *)(iVar3 + 0x98) == DAT_009c3abc &&
          ((local_474 == *(int *)(iVar3 + 0x80) &&
           (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x88),*(undefined1 *)(iVar3 + 0x89)),
                              *(undefined1 *)(iVar3 + 0x8a)),*(undefined1 *)(iVar3 + 0x8b)) ==
            ((((uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 | (uint)local_460._2_1_) << 8 |
            (uint)local_460._3_1_))))))) {
        *(undefined4 *)(iVar3 + 0x84) = local_464;
        *(uint *)(iVar3 + 0x88) = uVar6;
        *(uint *)(iVar3 + 0x8c) = local_45c;
        *(undefined4 *)(iVar3 + 0x90) = local_458;
        uVar7 = uVar6;
        break;
      }
    }
  }
  if ((((local_470 != 0) && (DAT_009c3ab0 == 0)) &&
      (uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_470 + 0x88),
                                          *(undefined1 *)(local_470 + 0x89)),
                                 *(undefined1 *)(local_470 + 0x8a)),
                        *(undefined1 *)(local_470 + 0x8b)),
      *(int *)(local_470 + 0x98) == DAT_009c3abc)) &&
     ((uVar5 == 0 ||
      (uVar5 == ((((uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 | (uint)local_460._2_1_) << 8 |
                (uint)local_460._3_1_))))) {
    *(undefined4 *)(local_470 + 0x84) = local_464;
    *(uint *)(local_470 + 0x88) = uVar6;
    *(uint *)(local_470 + 0x8c) = local_45c;
    *(undefined4 *)(local_470 + 0x90) = local_458;
    *(undefined4 *)(local_470 + 0x94) = 4;
    FUN_0084fe10();
  }
  return local_47c;
}

