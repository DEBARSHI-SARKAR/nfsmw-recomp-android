/* speed.exe 00742950 FUN_00742950; analysis pseudocode, not buildable source.
 * calls 00738300 FUN_00738300
 * calls 00738180 FUN_00738180
 * calls 006bf530 FUN_006bf530
 * calls 0045dbd0 FUN_0045dbd0
 * calls 00444fe0 FUN_00444fe0
 * calls 00505380 FUN_00505380
 * calls 007c4b80 FUN_007c4b80
 * calls 006e8de0 FUN_006e8de0
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 004fc940 FUN_004fc940
 * calls 004fc990 FUN_004fc990
 * calls 004fcac0 FUN_004fcac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00742950(int param_1,int param_2,float *param_3,undefined4 param_4,uint param_5,int param_6,
            uint param_7)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  undefined4 local_48;
  int local_44;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar13 = (float10)FUN_006e8de0();
  iVar4 = DAT_00915f84;
  uVar1 = DAT_00915f84 + 0x40;
  fVar2 = (float)(fVar13 + (float10)*(float *)(param_1 + 0x10c));
  if (DAT_00915f88 <= uVar1) {
    DAT_00915f94 = 1;
    DAT_00915f98 = DAT_00915f98 + 0x40;
    return;
  }
  bVar12 = DAT_00915f84 != 0;
  DAT_00915f84 = uVar1;
  if (bVar12) {
    FUN_00444fe0(iVar4,param_4);
    *(float *)(iVar4 + 0x30) = *param_3;
    *(float *)(iVar4 + 0x34) = param_3[1];
    *(float *)(iVar4 + 0x38) = param_3[2];
    *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
    if (param_6 != 0) {
      FUN_00738180(param_2,iVar4,0);
    }
    if (((*(int *)(param_1 + 0x88) != 0) && (*(int *)(*(int *)(param_1 + 0x88) + 0x94) == 1)) &&
       ((*(uint *)(param_1 + 0x1620) & 0x1000) != 0)) {
      *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + 1;
    }
    iVar7 = FUN_004fcac0(param_3,*(undefined4 *)(param_1 + 0x17a8));
    iVar8 = FUN_006bf530();
    if (iVar8 == 3) {
      iVar7 = FUN_007c4b80();
    }
    if ((*(int *)(param_2 + 0x24) <= iVar7) &&
       (iVar7 = thunk_FUN_006cf2b0(param_1 + 0x90,param_1 + 0xa0,iVar4), iVar7 != 0)) {
      iVar7 = *(int *)(**(int **)(param_1 + 0x84) * 0xd0 + 0x94 + DAT_009b09d8);
      if (DAT_009885c8 == 0) {
        local_70 = 1.0;
        local_6c = 1.0;
      }
      else {
        local_70 = 0.0;
        local_6c = 0.0;
      }
      local_60 = 0.5;
      local_58 = 0.0;
      local_5c = 0.5;
      local_68 = 0.0;
      local_64 = 0.0;
      local_78 = 0.0;
      local_74 = 0.0;
      local_50 = 0.0;
      if (DAT_009b092c != 0) {
        param_5 = param_5 | 1;
      }
      if (DAT_009b0930 != 0) {
        param_5 = param_5 | 2;
      }
      if ((param_5 & 1) == 0) {
        if ((param_5 & 8) != 0) {
          local_70 = 0.0;
          local_6c = 0.0;
        }
      }
      else {
        local_70 = local_70 + _DAT_0089096c;
        local_6c = local_6c + _DAT_0089096c;
      }
      if ((param_5 & 2) != 0) {
        local_60 = 1.5;
        local_58 = 1.0;
        local_5c = 1.5;
      }
      uVar1 = *(uint *)(param_1 + 0x1620);
      if ((uVar1 & 1) != 0) {
        local_70 = 1.0;
      }
      uVar3 = *(uint *)(param_1 + 0x1624);
      if ((uVar3 & 1) != 0) {
        local_70 = 0.0;
      }
      if ((uVar1 & 2) != 0) {
        local_6c = 1.0;
      }
      if ((uVar3 & 2) != 0) {
        local_6c = 0.0;
      }
      uVar10 = uVar1 & 0x40;
      if (uVar10 != 0) {
        local_68 = 1.0;
      }
      uVar9 = uVar3 & 0x40;
      if (uVar9 != 0) {
        local_68 = 0.0;
      }
      if (uVar10 != 0) {
        local_64 = 1.0;
      }
      if (uVar9 != 0) {
        local_64 = 0.0;
      }
      if ((uVar1 & 8) != 0) {
        local_60 = local_60 + _DAT_008b2e8c;
      }
      if ((uVar3 & 8) != 0) {
        local_60 = 0.0;
      }
      if ((uVar1 & 0x10) != 0) {
        local_5c = local_5c + _DAT_008b2e8c;
      }
      if ((uVar3 & 0x10) != 0) {
        local_5c = 0.0;
      }
      if ((uVar1 & 0x20) != 0) {
        local_58 = 16.5;
      }
      if ((uVar3 & 0x20) != 0) {
        local_58 = 0.0;
      }
      if (uVar10 != 0) {
        local_68 = local_68 + _DAT_008b2e8c;
      }
      if (uVar9 != 0) {
        local_68 = 0.0;
      }
      if ((char)uVar1 < '\0') {
        local_64 = local_64 + _DAT_008b2e8c;
      }
      if ((char)uVar3 < '\0') {
        local_64 = 0.0;
      }
      if ((uVar1 & 0x1000) != 0) {
        local_78 = DAT_00903528;
      }
      if ((uVar1 & 0x2000) != 0) {
        local_74 = DAT_0090352c;
      }
      bVar12 = (uVar1 & 0x4000) != 0;
      if (bVar12) {
        local_50 = DAT_00903530;
      }
      if ((uVar3 & 0x1000) != 0) {
        local_78 = 0.0;
      }
      if ((uVar3 & 0x2000) != 0) {
        local_74 = 0.0;
      }
      if ((uVar3 & 0x4000) != 0) {
        local_50 = 0.0;
      }
      local_44 = 0;
      fVar13 = (float10)FUN_00738300(fVar2,0);
      piVar11 = *(int **)(param_1 + 0x104);
      if (piVar11 != (int *)(param_1 + 0x104)) {
        do {
          uVar1 = piVar11[2];
          local_48 = 0x3f800000;
          if ((iVar7 == 2) && ((char)piVar11[0xb] == '\x01')) {
            *(undefined1 *)(piVar11 + 0xb) = 2;
          }
          fVar6 = DAT_009b27e0;
          fVar5 = DAT_009b0974;
          if (((param_7 & 2) == 0) || ((char)piVar11[0xb] == '\x01')) {
            if ((param_7 & 1) != 0) {
              if (((char)piVar11[0xb] < '\x05') || ('\f' < (char)piVar11[0xb])) goto LAB_00743241;
              local_48 = 0x41200000;
            }
            if (uVar1 < 0x7adf7ef9) {
              local_80 = local_64;
              if (uVar1 == 0x7adf7ef8) {
LAB_007431bb:
                if (local_80 <= _DAT_00890968) goto LAB_0074323d;
                if (_DAT_0089096c < local_80) goto LAB_007431dd;
              }
              else {
                if (0x41489594 < uVar1) {
                  if (uVar1 == 0x6a52a241) {
                    DAT_009b3718 = (DAT_009b3718 + 1) % DAT_0090353c;
                    fVar14 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b3504) * fVar2 +
                                                   _DAT_00891654);
                    fVar15 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b0bd0) * fVar2 + fVar6 +
                                                   _DAT_00891654);
                    if (fVar15 <= (float10)_DAT_00895074) {
                      local_80 = _DAT_00890968 * local_74;
                    }
                    else {
                      local_80 = (float)fVar14 * (float)fVar14 * local_74;
                    }
                  }
                  else {
                    if (uVar1 != 0x7a5b2f25) goto LAB_0074323d;
                    local_80 = local_68;
                  }
                  goto LAB_007431bb;
                }
                if (uVar1 == 0x41489594) {
                  DAT_009b3718 = (DAT_009b3718 + 1) % DAT_0090353c;
                  fVar14 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b3504) * fVar2 +
                                                 _DAT_00891654);
                  fVar15 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b0bd0) * fVar2 + fVar5 +
                                                 _DAT_00891654);
                  if (fVar15 <= (float10)_DAT_00895074) {
                    local_80 = _DAT_00890968 * local_78;
                  }
                  else {
                    local_80 = (float)fVar14 * (float)fVar14 * local_78;
                  }
                  goto LAB_007431bb;
                }
                if (uVar1 == 0x1e4150b4) {
                  DAT_009b3718 = (DAT_009b3718 + 1) % DAT_0090353c;
                  fVar14 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b3504) * fVar2 +
                                                 _DAT_00891654);
                  fVar15 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b0bd0) * fVar2 + fVar5 +
                                                 _DAT_00891654);
                  if (fVar15 <= (float10)_DAT_00895074) {
                    local_80 = _DAT_00890968 * local_78;
                    local_78 = local_80;
                  }
                  else {
                    local_80 = (float)fVar14 * (float)fVar14 * local_78;
                    local_78 = local_80;
                  }
                  goto LAB_007431bb;
                }
                if (uVar1 != 0x28cd78f5) {
                  local_80 = local_60;
                  if (uVar1 != 0x31a66786) goto LAB_0074323d;
                  goto LAB_007431bb;
                }
LAB_007431dd:
                local_80 = 1.0;
              }
              if (param_6 == 0) {
                uVar18 = 0;
                if ((param_7 & 1) == 0) {
                  uVar17 = 0;
                  uVar16 = 0;
                }
                else {
                  uVar17 = 1;
                  uVar16 = 0;
                }
              }
              else {
                uVar18 = *(undefined4 *)(param_1 + 0x1178);
                local_48 = 0x3f800000;
                uVar17 = 2;
                uVar16 = 1;
              }
              FUN_00505380(param_2,piVar11,iVar4,local_80,uVar16,uVar17,uVar18,0,local_48);
            }
            else {
              if (uVar1 < 0xbf700a7a) {
                local_80 = local_5c;
                if (uVar1 != 0xbf700a79) {
                  if (uVar1 == 0x9db90133) {
                    if (bVar12) {
                      local_80 = (float)fVar13 * local_70;
                    }
                    else {
                      local_80 = local_70;
                    }
                  }
                  else if (uVar1 == 0xa2a2fc7c) {
                    local_80 = local_58;
                  }
                  else {
                    if (uVar1 != 0xb4348dba) goto LAB_0074323d;
                    DAT_009b3718 = (DAT_009b3718 + 1) % DAT_0090353c;
                    fVar14 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b3504) * fVar2 +
                                                   _DAT_00891654);
                    DAT_009b3714 = (DAT_009b3714 + 1) % DAT_0090353c;
                    fVar15 = (float10)FUN_0045dbd0(((float)local_44 * _DAT_00903538 + fVar2) *
                                                   _DAT_00903534 + _DAT_00891654);
                    fVar14 = (float10)FUN_0045dbd0((float)((float10)(float)fVar14 *
                                                           (float10)(float)fVar14 * fVar15 *
                                                           (float10)local_50 *
                                                          (float10)_DAT_00903540));
                    local_80 = (float)fVar14;
                  }
                }
                goto LAB_007431bb;
              }
              if (uVar1 == 0xd09091c6) {
                local_80 = local_6c;
                if (bVar12) {
                  local_80 = (_DAT_0089096c - (float)fVar13) * local_6c;
                }
                goto LAB_007431bb;
              }
              if (uVar1 == 0xe662c161) {
                DAT_009b3718 = (DAT_009b3718 + 1) % DAT_0090353c;
                fVar14 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b3504) * fVar2 +
                                               _DAT_00891654);
                fVar15 = (float10)FUN_0045dbd0((_DAT_008b2b8c / _DAT_009b0bd0) * fVar2 + fVar6 +
                                               _DAT_00891654);
                if (fVar15 <= (float10)_DAT_00895074) {
                  local_80 = _DAT_00890968 * local_74;
                  local_74 = local_80;
                }
                else {
                  local_80 = (float)fVar14 * (float)fVar14 * local_74;
                  local_74 = local_80;
                }
                goto LAB_007431bb;
              }
            }
LAB_0074323d:
            local_44 = local_44 + 1;
          }
LAB_00743241:
          piVar11 = (int *)*piVar11;
        } while (piVar11 != (int *)(param_1 + 0x104));
      }
      if ((*(int *)(param_2 + 4) == 1) && (param_6 == 0)) {
        local_20 = _DAT_009b097c + *param_3;
        local_1c = _DAT_009b0980 + param_3[1];
        local_18 = _DAT_009b0984 + param_3[2];
        fVar2 = _DAT_0089096c;
        if (DAT_009b0978 != '\0') {
          param_3 = &local_20;
          fVar2 = _DAT_00903548;
        }
        if ((local_78 <= _DAT_00890968) && (local_74 <= _DAT_00890968)) {
          FUN_004fc940(&DAT_008f2f10,DAT_0090354c,&DAT_008f2fb0);
          return;
        }
        if (_DAT_00890968 < local_78) {
          FUN_004fc990(&DAT_008f2f10,DAT_0090354c,0x3f4ccccd,0x3e4ccccd,0,fVar2 * local_78,param_3);
          return;
        }
        if (_DAT_00890968 < local_74) {
          FUN_004fc990(&DAT_008f2f10,DAT_0090354c,0x3e4ccccd,0x3e4ccccd,0x3f4ccccd,fVar2 * local_74,
                       param_3);
          return;
        }
      }
    }
  }
  return;
}

