/* speed.exe 008495f0 FUN_008495f0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 007d6cb0 __security_check_cookie
 * calls 008464a0 FUN_008464a0
 * calls 00847020 FUN_00847020
 * calls 00849530 FUN_00849530
 * calls 00846a70 FUN_00846a70
 * calls 0083e480 FUN_0083e480
 * calls 008521b0 FUN_008521b0
 * calls 0083e360 FUN_0083e360
 * calls 00848c80 FUN_00848c80
 * calls 007c97c0 FUN_007c97c0
 * calls 00852da0 FUN_00852da0
 * calls 00852eb0 FUN_00852eb0
 * calls 00851aa0 FUN_00851aa0
 * calls 00846110 FUN_00846110
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00851c50 FUN_00851c50
 * calls 00847580 FUN_00847580
 * calls 00852440 FUN_00852440
 * calls 00846d00 FUN_00846d00
 * calls 0083a630 FUN_0083a630
 * calls 00849200 FUN_00849200
 * calls 0083e460 FUN_0083e460
 * calls 00848d60 FUN_00848d60
 * calls 00851bd0 FUN_00851bd0
 * calls 008522d0 FUN_008522d0
 * calls 00852390 FUN_00852390
 * calls 00848f80 FUN_00848f80
 * calls 00852430 GetTickCount
 * calls 0083b210 FUN_0083b210
 * calls 00846dc0 FUN_00846dc0
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_008495f0(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  char *local_158;
  DWORD local_154;
  char *pcStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *pcStack_138;
  int local_134;
  undefined4 uStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  char *pcStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  char *pcStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  char *pcStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  char acStack_88 [32];
  undefined1 auStack_68 [100];
  undefined4 local_4;
  
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  local_4 = DAT_00906980;
  local_134 = *(int *)(param_1 + 0xd04);
  local_154 = GetTickCount();
  FUN_00851c50(*(undefined4 *)(param_1 + 0xc),uVar7);
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = (char *)0x0;
  if (((*(int *)(param_1 + 0x8e8) != 0) && (iVar5 = *(int *)(param_1 + 8), iVar5 != 0)) &&
     (iVar5 = (**(code **)(iVar5 + 8))(iVar5), iVar5 != 0)) {
    if (0 < iVar5) {
      iVar12 = param_1 + 0x25;
      if (*(char *)(param_1 + 0x24) != '*') {
        iVar12 = param_1 + 0x24;
      }
      FUN_00852440(*(undefined4 *)(param_1 + 0xc),iVar12,*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                   *(undefined4 *)(param_1 + 0x18));
      if (iVar12 != param_1 + 0x24) {
        FUN_00851bd0(*(undefined4 *)(param_1 + 0xc),1);
      }
      FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x41555448,0,param_1 + 0x5b4,0xffffffff);
    }
    if ((iVar5 < 0) && (FUN_00846d00(), *(int *)(param_1 + 0x1a8) == 0)) {
      *(undefined4 *)(param_1 + 0x8e8) = 0;
    }
    (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) < local_154)) {
    if (*(int *)(param_1 + 0x10) == 7) {
      FUN_00849530(param_1,1);
    }
    else {
      if (*(int *)(param_1 + 0x10) != 3) {
        *(undefined4 *)(param_1 + 0x10) = 3;
        if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
          uStack_14c = 0x636f6e6e;
          iStack_148 = 3;
          iStack_144 = 0;
          pcStack_138 = (char *)0x0;
          (**(code **)(param_1 + 0x8e8))(param_1,&uStack_14c,*(undefined4 *)(param_1 + 0x8e4));
        }
      }
      if (*(int *)(param_1 + 0x1a8) == 0) {
        *(undefined4 *)(param_1 + 0x8e8) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x10) == 5) {
    if ((*(uint *)(param_1 + 0x4e0) != 0) && (*(uint *)(param_1 + 0x4e0) <= local_154)) {
      FUN_00846a70();
    }
    if (*(int *)(param_1 + 0x10) == 5) {
      iVar5 = 0;
      puVar11 = (uint *)(param_1 + 0x918);
      do {
        if (((puVar11[2] != 0) && (*puVar11 != 0)) && (*puVar11 < local_154)) {
          *(undefined4 *)(param_1 + 0x918 + iVar5 * 0x14) = 0;
          FUN_00851aa0(*(undefined4 *)(param_1 + 0xc));
          if (*(int *)(param_1 + 0x10) != 3) {
            *(undefined4 *)(param_1 + 0x10) = 3;
            if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
              uStack_14c = 0x636f6e6e;
              iStack_148 = 3;
              iStack_144 = 0;
              pcStack_138 = (char *)0x0;
              (**(code **)(param_1 + 0x8e8))(param_1,&uStack_14c,*(undefined4 *)(param_1 + 0x8e4));
            }
          }
          break;
        }
        iVar5 = iVar5 + 1;
        puVar11 = puVar11 + 5;
      } while (iVar5 < 9);
    }
  }
  if ((*(int *)(param_1 + 0x10) == 6) || (*(int *)(param_1 + 0x10) == 3)) {
    puVar13 = (undefined4 *)(param_1 + 0x920);
    iVar5 = 9;
    do {
      if ((code *)*puVar13 != (code *)0x0) {
        local_16c = puVar13[-4];
        local_164 = -4;
        (*(code *)*puVar13)(param_1,&local_16c,puVar13[-1]);
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((*(int *)(param_1 + 0x10) == 3) && (*(int *)(param_1 + 0x1a8) != 0)) {
      uVar3 = *(uint *)(param_1 + 0x1ac);
      *(uint *)(param_1 + 0x1ac) = uVar3 * 0x19660d + 0x3c6ef35f;
      FUN_00849200(param_1,param_1 + 0x24,*(undefined4 *)(param_1 + 0x18),
                   *(int *)(param_1 + 0xa4) / 2 + (uVar3 & 0xffff) % 0x55 + 0xf,param_1 + 0xa8,
                   param_1 + 0x128,*(undefined4 *)(param_1 + 0x8e8),*(undefined4 *)(param_1 + 0x8e4)
                  );
    }
  }
  iVar5 = FUN_008522d0(*(undefined4 *)(param_1 + 0xc),&local_168,&local_164,&pcStack_150);
  pcVar8 = local_158;
  local_158 = pcStack_150;
  do {
    if (iVar5 < 0) {
      local_158 = pcVar8;
      if (((*(int *)(param_1 + 0xd04) != 0) && (local_134 == 0)) && (*(int *)(param_1 + 0x8cc) != 0)
         ) {
        FUN_0083e460(*(int *)(param_1 + 0x8cc),1);
      }
      if ((*(int *)(param_1 + 0x8dc) != 0) &&
         (iVar5 = FUN_0083e480(*(undefined4 *)(param_1 + 0x8cc)), 0 < iVar5)) {
        local_158 = *(char **)(param_1 + 0x8cc);
        local_16c = 0x726f7374;
        local_168 = 0;
        local_164 = 0;
        (**(code **)(param_1 + 0x8dc))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x8d8));
      }
      return local_154;
    }
    pcStack_150 = local_158;
    if (local_168 == 0x52454356) {
      if (*(int *)(param_1 + 0x8d4) != 0) {
        FUN_008464a0(param_1);
        goto LAB_0084992d;
      }
    }
    else {
LAB_0084992d:
      if (local_168 == 0x53454e44) {
        if (*(code **)(param_1 + 0x948) == (code *)0x0) goto LAB_0084a639;
        local_16c = 0x73656e64;
        (**(code **)(param_1 + 0x948))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x944));
        *(undefined4 *)(param_1 + 0x948) = 0;
      }
      if (local_168 == 0x42524443) {
        if (*(code **)(param_1 + 0x970) == (code *)0x0) goto LAB_0084a639;
        local_16c = 0x62726463;
        (**(code **)(param_1 + 0x970))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x96c));
        *(undefined4 *)(param_1 + 0x970) = 0;
      }
      if (local_168 == -1) {
        if (local_164 != -1) goto LAB_00849a38;
        if (*(int *)(param_1 + 0x10) != 5) {
          *(undefined4 *)(param_1 + 0x10) = 5;
          if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
            uStack_cc = 5;
            uStack_d0 = 0x636f6e6e;
            uStack_c8 = 0;
            uStack_bc = 0;
            (**(code **)(param_1 + 0x8e8))(param_1,&uStack_d0,*(undefined4 *)(param_1 + 0x8e4));
            goto LAB_00849a08;
          }
        }
      }
      else {
LAB_00849a08:
        if (local_168 == 0x50494e47) {
          FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x50494e47,local_164,local_158,0xffffffff);
        }
        if (local_168 == -1) {
LAB_00849a38:
          if (local_164 != -0x1010102) goto LAB_0084a639;
          iVar5 = *(int *)(param_1 + 0x10);
          if (iVar5 != 6) {
            *(undefined4 *)(param_1 + 0x10) = 6;
            if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
              uStack_a0 = 0x636f6e6e;
              uStack_9c = 6;
              uStack_98 = 0;
              uStack_8c = 0;
              (**(code **)(param_1 + 0x8e8))(param_1,&uStack_a0,*(undefined4 *)(param_1 + 0x8e4));
            }
          }
          if ((iVar5 == 5) && (*(int *)(param_1 + 0x1a8) != 0)) {
            uVar3 = *(uint *)(param_1 + 0x1ac);
            *(uint *)(param_1 + 0x1ac) = uVar3 * 0x19660d + 0x3c6ef35f;
            DVar6 = GetTickCount();
            *(DWORD *)(param_1 + 0x14) = DVar6 + ((uVar3 & 0xffff) % 0x55 + 0xf) * 1000;
            if (*(int *)(param_1 + 0x10) != 7) {
              *(undefined4 *)(param_1 + 0x10) = 7;
            }
          }
        }
        if (local_168 == 0x41555448) {
          *(undefined4 *)(param_1 + 0x14) = 0;
          if (local_164 == 0) {
            uVar7 = FUN_0083a670(local_158,&DAT_008c6eb0,param_1 + 0xd08,100,&DAT_00890978);
            FUN_0083b210(uVar7);
            local_16c = 0x61757468;
            (**(code **)(param_1 + 0x8e8))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x8e4));
          }
          else {
            local_16c = 0x61757468;
            (**(code **)(param_1 + 0x8e8))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x8e4));
            if (((local_164 == 0x6e657477) || (local_164 == 0x62736f64)) &&
               (FUN_00848c80(param_1), *(int *)(param_1 + 0x1a8) != 0)) {
              uVar3 = *(uint *)(param_1 + 0x1ac);
              *(uint *)(param_1 + 0x1ac) = uVar3 * 0x19660d + 0x3c6ef35f;
              DVar6 = GetTickCount();
              *(DWORD *)(param_1 + 0x14) = DVar6 + ((uVar3 & 0xffff) % 0x55 + 0xf) * 1000;
              if (*(int *)(param_1 + 0x10) != 7) {
                *(undefined4 *)(param_1 + 0x10) = 7;
              }
            }
          }
        }
        if (local_168 == 0x41444d4e) {
          uVar7 = FUN_0083a670(local_158,&DAT_008b6f04,acStack_88,0x1f,&DAT_00890978);
          FUN_0083b210(uVar7);
          iVar5 = FUN_00846110(acStack_88,&DAT_008c6f20);
          if ((iVar5 == 0) && (*(int *)(param_1 + 0x10) != 6)) {
            *(undefined4 *)(param_1 + 0x10) = 6;
            if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
              uStack_b4 = 6;
              uStack_b8 = 0x636f6e6e;
              uStack_b0 = 0;
              uStack_a4 = 0;
              (**(code **)(param_1 + 0x8e8))(param_1,&uStack_b8,*(undefined4 *)(param_1 + 0x8e4));
            }
          }
          if (*(code **)(param_1 + 0x8d4) != (code *)0x0) {
            local_16c = 0x61646d6e;
            (**(code **)(param_1 + 0x8d4))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x8d0));
          }
        }
        if (local_168 == 0x52474554) {
          uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
          iVar5 = FUN_0083abc0(uVar7);
          if (iVar5 == 2) {
            uVar7 = FUN_0083a670(local_158,&DAT_008aeb6c,0);
            iVar5 = FUN_0083abc0(uVar7);
            *(int *)(param_1 + 0x8e0) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(param_1 + 0xd04) = 1;
            }
          }
        }
        if (local_168 == 0x524f5354) {
          if (*(int *)(param_1 + 0x8cc) == 0) goto LAB_0084a639;
          iVar5 = FUN_00846dc0(param_1,local_16c,0x524f5354,local_164,local_160,local_15c,local_158)
          ;
          if (iVar5 == 2) {
            piVar1 = (int *)(param_1 + 0x8e0);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined4 *)(param_1 + 0xd04) = 1;
            }
          }
        }
        if (local_168 == 0x524e4f54) {
          if (*(int *)(param_1 + 0x8cc) == 0) goto LAB_0084a639;
          iVar5 = FUN_00848f80(param_1,local_16c,0x524e4f54,local_164,local_160,local_15c,local_158)
          ;
          if (iVar5 == 0) {
            FUN_0083e460(*(undefined4 *)(param_1 + 0x8cc),1);
          }
        }
        if (local_168 == 0x50474554) {
          if (*(int *)(param_1 + 0x8cc) == 0) goto LAB_0084a639;
          FUN_00847020(param_1,local_16c,0x50474554,local_164,local_160,local_15c,local_158);
        }
        if (((local_168 == 0x52414444) || (local_168 == 0x5241444d)) &&
           (*(int *)(param_1 + 0x8cc) != 0)) {
          iVar12 = 0;
          local_16c = 0x61646475;
          uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
          iVar5 = FUN_0083abc0(uVar7);
          *(undefined4 *)(param_1 + 0x918) = 0;
          pcVar8 = (char *)FUN_0083e3b0(*(undefined4 *)(param_1 + 0x8cc),0);
          if (pcVar8 != (char *)0x0) {
LAB_00849e80:
            if (((*(uint *)(pcVar8 + 0xf8) & 0x10000) == 0) || (*(int *)(pcVar8 + 0xfc) != iVar5))
            break;
            *(uint *)(pcVar8 + 0xf8) = *(uint *)(pcVar8 + 0xf8) & 0xfffeffff;
            if (local_164 == 0) {
              uVar7 = FUN_0083a670(local_158,&DAT_008c6f18,acStack_88,0x20,&DAT_00890978);
              FUN_0083b210(uVar7);
              puVar9 = (undefined1 *)FUN_007c97c0(acStack_88,0x40);
              if (puVar9 != (undefined1 *)0x0) {
                *puVar9 = 0;
              }
              puVar9 = (undefined1 *)FUN_007c97c0(acStack_88,0x2f);
              if (puVar9 != (undefined1 *)0x0) {
                *puVar9 = 0;
              }
              puVar9 = (undefined1 *)FUN_007c97c0(acStack_88,0x2e);
              if (puVar9 != (undefined1 *)0x0) {
                *puVar9 = 0;
              }
              if (acStack_88[0] != '\0') {
                pcVar10 = acStack_88;
                do {
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                if ((uint)((int)pcVar10 - (int)(acStack_88 + 1)) < 0x21) {
                  uVar7 = FUN_00852eb0(*(undefined4 *)(param_1 + 0x8c8),pcVar8);
                  FUN_0083a630(pcVar8,0x21,acStack_88);
                  FUN_00852da0(*(undefined4 *)(param_1 + 0x8c8),pcVar8,uVar7);
                }
              }
              if (*(code **)(param_1 + 0x920) != (code *)0x0) {
                local_164 = 0;
                local_158 = pcVar8;
                (**(code **)(param_1 + 0x920))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x91c));
              }
              pcVar8[0xfc] = '\0';
              pcVar8[0xfd] = '\0';
              pcVar8[0xfe] = '\0';
              pcVar8[0xff] = '\0';
              *(uint *)(pcVar8 + 0xf8) = *(uint *)(pcVar8 + 0xf8) & 0xfffeffff;
            }
            else {
              bVar4 = true;
              if (local_164 == 0x626c636b) {
                local_164 = 0;
              }
              else {
                local_164 = ((local_164 != 0x66756c6c) - 1 & 0xfffffffd) - 2;
              }
              if (local_168 == 0x52414444) {
                uVar3 = *(uint *)(pcVar8 + 0xf8);
                if (((((uVar3 & 4) != 0) || ((uVar3 & 0x80000) != 0)) || ((uVar3 & 0x800000) != 0))
                   || ((uVar3 & 0x40000) != 0)) {
                  bVar4 = false;
                  *(uint *)(pcVar8 + 0xf8) = uVar3 & 0xfffffdff;
                  goto LAB_00849f27;
                }
              }
              else {
LAB_00849f27:
                if ((local_168 == 0x5241444d) &&
                   (((uVar3 = *(uint *)(pcVar8 + 0xf8), (uVar3 & 0x200) != 0 ||
                     ((uVar3 & 0x40000) != 0)) || ((uVar3 & 0x800000) != 0)))) {
                  bVar4 = false;
                  *(uint *)(pcVar8 + 0xf8) = uVar3 & 0xfff7ffff;
                }
              }
              if (*(code **)(param_1 + 0x920) != (code *)0x0) {
                local_158 = pcVar8;
                (**(code **)(param_1 + 0x920))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x91c));
              }
              if (bVar4) {
                uVar7 = FUN_00852eb0(*(undefined4 *)(param_1 + 0x8c8),pcVar8);
                FUN_0083e360(*(undefined4 *)(param_1 + 0x8cc),uVar7);
                if (*(code **)(param_1 + 0x8ec) != (code *)0x0) {
                  (**(code **)(param_1 + 0x8ec))(param_1,pcVar8,*(undefined4 *)(param_1 + 0x8f0));
                }
                (**(code **)(param_1 + 4))(pcVar8);
              }
            }
          }
LAB_0084a0c9:
          FUN_0083e460(*(undefined4 *)(param_1 + 0x8cc),1);
        }
        if (local_168 == 0x50414444) {
          if ((*(int *)(param_1 + 0x920) != 0) &&
             ((local_158 == (char *)0x0 || (*local_158 == '\0')))) {
            *(undefined4 *)(param_1 + 0x918) = 0;
          }
        }
        else if (local_168 == 0x5044454c) {
          if ((*(int *)(param_1 + 0x934) != 0) &&
             ((local_158 == (char *)0x0 || (*local_158 == '\0')))) {
            *(undefined4 *)(param_1 + 0x92c) = 0;
          }
        }
        else {
          if ((local_168 == 0x5244454c) || (local_168 == 0x5244454d)) {
            iStack_fc = local_168;
            local_16c = 0x64656c75;
            uStack_100 = 0x64656c75;
            iStack_f8 = local_164;
            uStack_f0 = local_15c;
            uStack_f4 = local_160;
            pcStack_ec = local_158;
            if (*(int *)(param_1 + 0x934) != 0) {
              uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
              iVar5 = FUN_0083abc0(uVar7);
              if (iVar5 == *(int *)(param_1 + 0x928)) {
                (**(code **)(param_1 + 0x934))(param_1,&uStack_100,*(undefined4 *)(param_1 + 0x930))
                ;
                *(undefined4 *)(param_1 + 0x934) = 0;
                *(undefined4 *)(param_1 + 0x92c) = 0;
              }
            }
          }
          if (local_168 == 0x52525350) {
            iStack_e4 = local_168;
            local_16c = 0x696e7674;
            uStack_e8 = 0x696e7674;
            uStack_dc = local_160;
            iStack_e0 = local_164;
            uStack_d8 = local_15c;
            pcStack_d4 = local_158;
            if (*(int *)(param_1 + 0x998) == 0) goto LAB_0084a639;
            uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
            iVar5 = FUN_0083abc0(uVar7);
            if (iVar5 == *(int *)(param_1 + 0x98c)) {
              (**(code **)(param_1 + 0x998))(param_1,&uStack_e8,*(undefined4 *)(param_1 + 0x994));
              *(undefined4 *)(param_1 + 0x998) = 0;
              *(undefined4 *)(param_1 + 0x990) = 0;
            }
          }
          if ((local_168 == 0x47525350) || (local_168 == 0x4752564b)) {
            iStack_12c = local_168;
            local_16c = 0x67696e76;
            uStack_130 = 0x67696e76;
            uStack_120 = local_15c;
            uStack_124 = local_160;
            iStack_128 = local_164;
            pcStack_11c = local_158;
            if (*(int *)(param_1 + 0x9ac) != 0) {
              uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
              iVar5 = FUN_0083abc0(uVar7);
              if (iVar5 == *(int *)(param_1 + 0x9a0)) {
                (**(code **)(param_1 + 0x9ac))(param_1,&uStack_130,*(undefined4 *)(param_1 + 0x9a8))
                ;
                *(undefined4 *)(param_1 + 0x9ac) = 0;
                *(undefined4 *)(param_1 + 0x9a4) = 0;
              }
            }
          }
          if (local_168 == 0x47494e56) {
            iStack_114 = local_168;
            local_16c = 0x67696e76;
            uStack_118 = 0x67696e76;
            iStack_110 = local_164;
            uStack_108 = local_15c;
            uStack_10c = local_160;
            pcStack_104 = local_158;
            if (*(int *)(param_1 + 0x9c0) == 0) goto LAB_0084a639;
            uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
            iVar5 = FUN_0083abc0(uVar7);
            if (iVar5 == *(int *)(param_1 + 0x9b4)) {
              (**(code **)(param_1 + 0x9c0))(param_1,&uStack_118,*(undefined4 *)(param_1 + 0x9bc));
              *(undefined4 *)(param_1 + 0x9c0) = 0;
              *(undefined4 *)(param_1 + 0x9b8) = 0;
            }
          }
          if (((local_168 == 0x474e4f54) &&
              (iVar5 = FUN_00848d60(param_1,local_16c,0x474e4f54,local_164,local_160,local_15c,
                                    local_158), iVar5 == 0)) && (*(int *)(param_1 + 0x8cc) != 0)) {
            FUN_0083e460(*(int *)(param_1 + 0x8cc),1);
          }
          if (local_168 == 0x45505354) {
            iStack_148 = local_168;
            local_16c = 0x65707374;
            uStack_14c = 0x65707374;
            uStack_140 = local_160;
            iStack_144 = local_164;
            uStack_13c = local_15c;
            pcStack_138 = local_158;
            if (*(int *)(param_1 + 0x984) == 0) goto LAB_0084a639;
            uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
            iVar5 = FUN_0083abc0(uVar7);
            if (iVar5 == *(int *)(param_1 + 0x978)) {
              (**(code **)(param_1 + 0x984))(param_1,&uStack_14c,*(undefined4 *)(param_1 + 0x980));
              *(undefined4 *)(param_1 + 0x984) = 0;
              *(undefined4 *)(param_1 + 0x97c) = 0;
            }
          }
          if (local_168 == 0x45504754) {
            uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
            iVar5 = FUN_0083abc0(uVar7);
            if ((iVar5 == 4) && (local_164 == 0)) {
              *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) & 0xfffffeff;
              uVar7 = FUN_0083a670(local_158,&DAT_008c68c0,param_1 + 0x6c4,0xff,&DAT_00890978);
              FUN_0083b210(uVar7);
              uVar7 = FUN_0083a670(local_158,&DAT_008c6f0c,auStack_68,100,&DAT_00890978);
              FUN_0083b210(uVar7);
              iVar5 = FUN_00846110(auStack_68,&DAT_008b7108);
              if (iVar5 == 0) {
                *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) | 1;
              }
            }
          }
          if (local_168 == 0x55534348) {
            uVar7 = FUN_0083a670(local_158,&DAT_008c6cf4,0);
            iVar5 = FUN_0083abc0(uVar7);
            if (iVar5 == 3) {
              if (local_164 == 0) {
                uVar7 = FUN_0083a670(local_158,&DAT_008aeb6c,0);
                uVar7 = FUN_0083abc0(uVar7);
                *(undefined4 *)(param_1 + 0x9cc) = uVar7;
              }
              else if (local_164 == 0x73757372) {
                *(undefined4 *)(param_1 + 0x9cc) = 0;
              }
              else {
                local_16c = 0x75736572;
                if (*(code **)(param_1 + 0x95c) != (code *)0x0) {
                  (**(code **)(param_1 + 0x95c))
                            (param_1,&local_16c,*(undefined4 *)(param_1 + 0x958));
                }
                *(undefined4 *)(param_1 + 0x95c) = 0;
              }
            }
          }
          if ((local_168 == 0x55534552) &&
             (iVar5 = FUN_00847580(param_1,local_16c,0x55534552,local_164,local_160,local_15c,
                                   local_158), iVar5 == 0)) {
            *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + -1;
          }
        }
      }
    }
LAB_0084a639:
    if ((*(int *)(param_1 + 0x9cc) == 0) && (*(code **)(param_1 + 0x95c) != (code *)0x0)) {
      local_16c = 0x75736572;
      local_168 = 0;
      local_164 = 0;
      local_158 = (char *)0x0;
      (**(code **)(param_1 + 0x95c))(param_1,&local_16c,*(undefined4 *)(param_1 + 0x958));
      *(undefined4 *)(param_1 + 0x95c) = 0;
    }
    FUN_00852390(*(undefined4 *)(param_1 + 0xc),0,0,0,0);
    iVar5 = FUN_008522d0(*(undefined4 *)(param_1 + 0xc),&local_168,&local_164,&pcStack_150);
    pcVar8 = local_158;
    local_158 = pcStack_150;
  } while( true );
  iVar12 = iVar12 + 1;
  pcVar8 = (char *)FUN_0083e3b0(*(undefined4 *)(param_1 + 0x8cc),iVar12);
  if (pcVar8 == (char *)0x0) goto LAB_0084a0c9;
  goto LAB_00849e80;
}

