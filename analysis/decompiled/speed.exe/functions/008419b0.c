/* speed.exe 008419b0 FUN_008419b0; analysis pseudocode, not buildable source.
 * calls 0083b350 FUN_0083b350
 * calls 007d6cb0 __security_check_cookie
 * calls 008412c0 FUN_008412c0
 * calls 008519e0 FUN_008519e0
 * calls 008400d0 FUN_008400d0
 * calls 0083adc0 FUN_0083adc0
 * calls 0083a980 FUN_0083a980
 * calls 0083b210 FUN_0083b210
 * calls 00852430 GetTickCount
 * calls 00845020 FUN_00845020
 * calls 00841510 FUN_00841510
 * calls 0083abc0 FUN_0083abc0
 * calls 008522d0 FUN_008522d0
 * calls 00852390 FUN_00852390
 * calls 0083af60 FUN_0083af60
 * calls 008447d0 FUN_008447d0
 * calls 0083bbe0 FUN_0083bbe0
 * calls 008541e0 FUN_008541e0
 * calls 00840310 FUN_00840310
 * calls 0083a670 FUN_0083a670
 * calls 00845a40 FUN_00845a40
 * calls 00840650 FUN_00840650
 * calls 008521b0 FUN_008521b0
 * calls 0083b4d0 FUN_0083b4d0
 * calls 00840480 FUN_00840480
 * calls 00841580 FUN_00841580
 * calls 00840050 FUN_00840050
 * calls 008541a0 FUN_008541a0
 * calls 0083a630 FUN_0083a630
 * calls 008405d0 FUN_008405d0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008419b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *local_144;
  uint local_140;
  int local_13c;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_10c;
  undefined4 local_108;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*param_1 != 0) {
    if (param_1[2] == 0x696e6974) {
      FUN_00840480();
    }
    uVar1 = GetTickCount();
    local_138 = uVar1;
    FUN_00841510();
    if (param_1[0x750] == 0) {
      param_1[0x750] = uVar1;
    }
    uVar6 = param_1[0x751] + (uVar1 - param_1[0x750]);
    param_1[0x751] = uVar6;
    param_1[0x750] = uVar1;
    param_1[0x74f] = param_1[0x74f] + uVar6 / 1000;
    param_1[0x751] = uVar6 % 1000;
    if ((param_1[2] != 0x7465726d) && (param_1[2] != 0x6f66666c)) {
      FUN_00840310();
      iVar2 = FUN_008522d0(*param_1,&local_140,&local_13c,&local_144);
      uVar6 = local_140;
      while (local_140 = uVar6, -1 < iVar2) {
        param_1[5] = param_1[0xc] + uVar1;
        if (uVar6 == 0x7e706e67) {
          if (param_1[8] != -1) {
            FUN_0083a630(local_104,0x100,local_144);
            FUN_0083a980(local_104,0x100,&DAT_008b6d00,param_1[8]);
            local_144 = local_104;
            iVar2 = -1;
          }
          uVar3 = FUN_0083a670(local_144,&DAT_008c69cc,0);
          iVar4 = FUN_0083bbe0(uVar3);
          param_1[0x74f] = iVar4;
          param_1[0x750] = 0;
          param_1[0x751] = 0;
          local_13c = 0;
          FUN_008521b0(*param_1,local_140,0,local_144,iVar2);
        }
        else {
          FUN_008400d0(uVar6);
          uVar3 = local_11c;
          FUN_008405d0(param_1,local_11c,0,uVar6,local_13c,local_144);
          if (local_10c != (code *)0x0) {
            local_12c = local_140;
            local_128 = local_13c;
            local_124 = local_144;
            local_134 = uVar3;
            local_130 = 0;
            local_120 = 0;
            (*local_10c)(param_1,&local_134,local_108);
          }
          if ((param_1[2] == 0x72646972) &&
             (local_140 = FUN_00841580(iVar2,local_140), (int)local_140 < 0)) {
            return;
          }
          if ((local_140 == 0xffffffff) && (local_13c == -1)) {
            uVar3 = FUN_008519e0(*param_1,0x6c707274);
            local_104[0] = 0;
            FUN_0083adc0(local_104,0x100,&DAT_008c68c0,param_1[0x623]);
            FUN_0083a980(local_104,0x100,&DAT_008b6d08,uVar3);
            FUN_008521b0(*param_1,0x61646472,0,local_104,0xffffffff);
            local_104[0] = 0;
            FUN_0083b350(local_104,0x100,&DAT_008c69b8,"Public Key",10);
            FUN_008521b0(*param_1,0x736b6579,0,local_104,0xffffffff);
            param_1[0x624] = 1;
            param_1[2] = 0x736b6579;
            local_140 = 0x636f6e6e;
            local_13c = 0;
            puVar5 = (undefined4 *)FUN_00840050(0x6e657773,&LAB_008410d0,0);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00840650(param_1,0x6e657773,"NAME=7",*puVar5);
            }
          }
          if ((param_1[2] == 0x736b6579) &&
             (((local_140 == 0x736b6579 || (local_140 == 0x73656c65)) && (local_13c == 0)))) {
            if (local_140 == 0x736b6579) {
              uVar3 = FUN_0083a670(local_144,&DAT_008c69b8,param_1 + 0xe,0x10);
              FUN_0083b4d0(uVar3);
              uVar3 = FUN_0083a670(local_144,&DAT_008c69ac,param_1 + 0x152,0x40,&DAT_00890978);
              FUN_0083b210(uVar3);
            }
            param_1[2] = 0x69646c65;
            local_140 = 0x636f6e6e;
            local_13c = 0;
            param_1[7] = local_138;
          }
          else {
            if (local_140 == 0xffffffff) {
              if ((local_13c != -0x1010102) || (param_1[2] == 0x636f6e6e)) goto LAB_00841f8d;
              FUN_008412c0(param_1,0x73657276);
            }
            if (local_140 == 0x61757468) {
              if (local_13c == 0) {
                param_1[2] = 0x61757468;
                uVar3 = FUN_0083a670(local_144,&DAT_008b4cbc,param_1 + 0x563,0x14,&DAT_00890978);
                FUN_0083b210(uVar3);
                uVar3 = FUN_0083a670(local_144,&DAT_008c68c0,0);
                iVar2 = FUN_0083af60(uVar3);
                param_1[0x622] = iVar2;
                goto LAB_00841df0;
              }
LAB_00841e53:
              FUN_0083a630(param_1 + 0x52,0x200,local_144);
            }
            else {
LAB_00841df0:
              if (local_140 == 0x61636374) {
                if (local_13c == 0) {
                  param_1[2] = 0x61636374;
                }
                goto LAB_00841f8d;
              }
              if (local_140 == 0x736e6170) {
                piVar7 = param_1 + 0x626;
                *piVar7 = *piVar7 + -1;
                if ((*piVar7 != 0) || (local_13c != 0)) goto LAB_00841f8d;
                uVar3 = FUN_0083a670(local_144,&DAT_008b6e20,0);
                iVar2 = FUN_0083abc0(uVar3);
                param_1[0x625] = iVar2;
              }
              if (local_140 == 0x61757468) goto LAB_00841e53;
            }
            if ((local_140 == 0x70657273) &&
               (FUN_0083a630(param_1 + 0xd2,0x200,local_144), local_13c == 0)) {
              piVar7 = param_1 + 0x568;
              for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar7 = 0;
                piVar7 = piVar7 + 1;
              }
              uVar3 = FUN_0083a670(local_144,&DAT_008b6d40,param_1 + 0x56a,0x10,&DAT_00890978);
              FUN_0083b210(uVar3);
              FUN_00845a40(param_1 + 0x568,local_144);
              param_1[7] = local_138;
            }
            if ((local_140 == 0x73656c65) && (local_13c == 0)) {
              uVar3 = FUN_0083a670(local_144,&DAT_008c69a4,0);
              iVar2 = FUN_0083abc0(uVar3);
              param_1[0x624] = iVar2;
              uVar3 = FUN_0083a670(local_144,"SLOTS",0);
              iVar2 = FUN_0083abc0(uVar3);
              param_1[0x627] = iVar2;
              uVar3 = FUN_0083a670(local_144,"STATS",0);
              iVar2 = FUN_0083abc0(uVar3);
              if (iVar2 == 0) {
                param_1[0x827] = 0;
                param_1[0x826] = 0;
              }
              else {
                if (param_1[0x826] == 0) {
                  param_1[0x827] = 0;
                }
                param_1[0x826] = 1;
              }
            }
          }
LAB_00841f8d:
          if ((local_140 & 0xff000000) == 0x2b000000) {
            FUN_008541a0(param_1,local_144,local_140,local_13c);
          }
          if (((local_140 == 0x6d6f7665) || (local_140 == 0x726f6f6d)) && (local_13c == 0)) {
            FUN_008541e0(param_1,local_144);
          }
          if ((local_140 & 0xff000000) == 0x24000000) {
            FUN_008405d0(param_1,0,4,local_140,local_13c,local_144);
          }
        }
        FUN_00852390(*param_1,0,0,0,0);
        iVar2 = FUN_008522d0(*param_1,&local_140,&local_13c,&local_144);
        uVar1 = local_138;
        uVar6 = local_140;
      }
      FUN_00845020(param_1);
      if ((param_1[7] != 0) && ((uint)param_1[7] <= uVar1)) {
        if (param_1[1] != 0) {
          FUN_008447d0(param_1[1],param_1[0x60f],&LAB_00840410,param_1);
        }
        param_1[7] = uVar1 + 30000;
      }
      local_134 = 0;
      local_12c = 0;
      local_128 = 0;
      local_124 = (undefined1 *)0x0;
      local_120 = 0;
      local_130 = 5;
      piVar7 = param_1 + 0x629;
      iVar2 = 0x20;
      do {
        if (piVar7[-1] == 5) {
          (*(code *)*piVar7)(param_1,&local_134,piVar7[1]);
        }
        piVar7 = piVar7 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

