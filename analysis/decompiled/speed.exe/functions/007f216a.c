/* speed.exe 007f216a FUN_007f216a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000be GetKeyState
 * calls 007f0fe0 FUN_007f0fe0
 * calls EXTERNAL:000000c0 GetKeyboardLayout
 * calls 007f3432 FUN_007f3432
 * calls 007f33d6 FUN_007f33d6
 * calls 007f3450 FUN_007f3450
 * calls 007f347a thunk_FUN_007ecd3d
 * calls 007f312b FUN_007f312b
 * calls EXTERNAL:000000bf MapVirtualKeyExA
 */

undefined4 __fastcall FUN_007f216a(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  SHORT SVar5;
  int iVar6;
  HKL dwhkl;
  UINT UVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  byte local_134 [256];
  undefined1 local_34 [4];
  int *local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  FUN_007f33d6();
  if (param_1[0x11a] == 0) {
    uVar8 = 5;
  }
  else {
    FUN_007f0fe0(local_134,0,0x100);
    iVar6 = (**(code **)(*(int *)param_1[0x11a] + 0x24))((int *)param_1[0x11a],0x100,local_134);
    if (iVar6 == 0) {
      local_10 = *(int *)(param_1[0x119] + 0xb0);
      if (local_10 != 0) {
        FUN_007f3432();
        FUN_007f0fe0(local_34,0,0x24);
        local_30 = param_1;
        local_20 = thunk_FUN_007ecd3d();
        local_c = 0;
        do {
          pbVar1 = (byte *)(local_c + 0x234 + (int)param_1);
          pbVar2 = local_134 + local_c;
          if (*pbVar2 != *pbVar1) {
            bVar3 = *pbVar2;
            *pbVar1 = bVar3;
            local_28 = 1;
            local_24 = local_c;
            local_2c = ~(uint)(bVar3 >> 7) & 1 | 2;
            local_18 = 0;
            local_8 = 0;
            dwhkl = GetKeyboardLayout(0);
            UVar7 = MapVirtualKeyExA(local_c,1,dwhkl);
            uVar9 = UVar7 & 0xff;
            local_1c = uVar9;
            if ((*(char *)((int)param_1 + 0x25e) != '\0') ||
               (*(char *)((int)param_1 + 0x26a) != '\0')) {
              local_8 = 1;
            }
            if ((*(char *)((int)param_1 + 0x251) != '\0') ||
               (*(char *)((int)param_1 + 0x2d1) != '\0')) {
              local_8 = local_8 | 2;
            }
            if (((char)param_1[0x9b] != '\0') || ((char)param_1[0xbb] != '\0')) {
              local_8 = local_8 | 4;
            }
            if ((*pbVar2 & 0x80) != 0) {
              uVar10 = 0;
              if ((int)local_c < 0xcc) {
                if (local_c == 0xcb) goto LAB_007f22f6;
                if (local_c == 0x9c) {
                  uVar10 = 0xd;
                }
                else if ((local_c == 0xb5) || ((0xc6 < (int)local_c && ((int)local_c < 0xca))))
                goto LAB_007f22f6;
              }
              else {
                if ((local_c != 0xcd) && (((int)local_c < 0xcf || (0xd3 < (int)local_c))))
                goto LAB_007f22f8;
LAB_007f22f6:
                uVar9 = local_c;
              }
LAB_007f22f8:
              if ((int)uVar9 < 0x6b) {
                if (uVar9 == 0x6a) {
                  uVar10 = 0x2a;
                  goto LAB_007f2352;
                }
                if ((7 < (int)uVar9) &&
                   (((((int)uVar9 < 10 || (uVar9 == 0xd)) || (uVar9 == 0x1b)) || (uVar9 == 0x20))))
                {
                  uVar10 = uVar9;
                }
LAB_007f233c:
                if (((0x40 < (int)uVar9) && ((int)uVar9 < 0x5b)) ||
                   ((0x2f < (int)uVar9 && ((int)uVar9 < 0x3a)))) {
                  uVar10 = uVar9;
                }
              }
              else {
                if (uVar9 == 0x6b) {
                  uVar10 = 0x2b;
                  goto LAB_007f233c;
                }
                if (uVar9 == 0x6d) {
                  uVar10 = 0x2d;
                }
                else {
                  if (uVar9 != 0xb5) goto LAB_007f233c;
                  uVar10 = 0x2f;
                }
              }
LAB_007f2352:
              uVar4 = GetKeyState(0x14);
              if ((((uVar4 & 1) == 0) && (0x40 < (int)uVar10)) && ((int)uVar10 < 0x5b)) {
                uVar10 = uVar10 + 0x20;
              }
              SVar5 = GetKeyState(0x10);
              if ((char)SVar5 < '\0') {
                if ((int)uVar9 < 0xbb) {
                  if (uVar9 == 0xba) {
                    uVar10 = 0x3a;
                  }
                  else {
                    switch(uVar9) {
                    case 0x30:
                      uVar10 = 0x29;
                      break;
                    case 0x31:
                      uVar10 = 0x21;
                      break;
                    case 0x32:
                      uVar10 = 0x40;
                      break;
                    case 0x33:
                      uVar10 = 0x23;
                      break;
                    case 0x34:
                      uVar10 = 0x24;
                      break;
                    case 0x35:
                      uVar10 = 0x25;
                      break;
                    case 0x36:
                      uVar10 = 0x5e;
                      break;
                    case 0x37:
                      uVar10 = 0x26;
                      break;
                    case 0x38:
                      uVar10 = 0x2a;
                      break;
                    case 0x39:
                      uVar10 = 0x28;
                      break;
                    default:
switchD_007f2392_default:
                      if (((int)uVar10 < 0x41) || (0x5a < (int)uVar10)) {
                        if ((0x60 < (int)uVar10) && ((int)uVar10 < 0x7b)) {
                          uVar10 = uVar10 - 0x20;
                        }
                      }
                      else {
                        uVar10 = uVar10 + 0x20;
                      }
                    }
                  }
                }
                else if ((int)uVar9 < 0xc1) {
                  if (uVar9 == 0xc0) {
                    uVar10 = 0x7e;
                  }
                  else if (uVar9 == 0xbb) {
                    uVar10 = 0x2b;
                  }
                  else if (uVar9 == 0xbc) {
                    uVar10 = 0x3c;
                  }
                  else if (uVar9 == 0xbd) {
                    uVar10 = 0x5f;
                  }
                  else if (uVar9 == 0xbe) {
                    uVar10 = 0x3e;
                  }
                  else {
                    if (uVar9 != 0xbf) goto switchD_007f2392_default;
                    uVar10 = 0x3f;
                  }
                }
                else if (uVar9 == 0xdb) {
                  uVar10 = 0x7b;
                }
                else if (uVar9 == 0xdc) {
                  uVar10 = 0x7c;
                }
                else if (uVar9 == 0xdd) {
                  uVar10 = 0x7d;
                }
                else {
                  if (uVar9 != 0xde) goto switchD_007f2392_default;
                  uVar10 = 0x22;
                }
              }
              else if ((int)uVar9 < 0xc0) {
                if (uVar9 == 0xbf) {
                  uVar10 = 0x2f;
                }
                else if (uVar9 == 0xba) {
                  uVar10 = 0x3b;
                }
                else if (uVar9 == 0xbb) {
                  uVar10 = 0x3d;
                }
                else if (uVar9 == 0xbc) {
                  uVar10 = 0x2c;
                }
                else if (uVar9 == 0xbd) {
                  uVar10 = 0x2d;
                }
                else if (uVar9 == 0xbe) {
                  uVar10 = 0x2e;
                }
              }
              else if (uVar9 == 0xc0) {
                uVar10 = 0x60;
              }
              else if (uVar9 == 0xdb) {
                uVar10 = 0x5b;
              }
              else if (uVar9 == 0xdc) {
                uVar10 = 0x5c;
              }
              else if (uVar9 == 0xdd) {
                uVar10 = 0x5d;
              }
              else if (uVar9 == 0xde) {
                uVar10 = 0x27;
              }
              uVar4 = GetKeyState(0x90);
              local_18 = uVar10;
              if ((uVar4 & 1) != 0) {
                if ((int)uVar9 < 0x26) {
                  if (uVar9 == 0x25) {
                    local_18 = 0x34;
                  }
                  else if (uVar9 == 0xc) {
                    local_18 = 0x35;
                  }
                  else if (uVar9 == 0x21) {
                    local_18 = 0x39;
                  }
                  else if (uVar9 == 0x22) {
                    local_18 = 0x33;
                  }
                  else if (uVar9 == 0x23) {
                    local_18 = 0x31;
                  }
                  else if (uVar9 == 0x24) {
                    local_18 = 0x37;
                  }
                }
                else if (uVar9 == 0x26) {
                  local_18 = 0x38;
                }
                else if (uVar9 == 0x27) {
                  local_18 = 0x36;
                }
                else if (uVar9 == 0x28) {
                  local_18 = 0x32;
                }
                else if (uVar9 == 0x2d) {
                  local_18 = 0x30;
                }
                else if (uVar9 == 0x2e) {
                  local_18 = 0x2e;
                }
              }
            }
            local_14 = local_8;
            FUN_007f312b(local_34);
          }
          local_c = local_c + 1;
        } while ((int)local_c < 0x100);
        FUN_007f3450();
      }
    }
    else {
      (**(code **)(*param_1 + 8))();
    }
    uVar8 = 0;
  }
  return uVar8;
}

