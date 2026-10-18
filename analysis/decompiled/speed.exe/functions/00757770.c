/* speed.exe 00757770 FUN_00757770; analysis pseudocode, not buildable source.
 * calls 00740240 FUN_00740240
 * calls 006bdb50 FUN_006bdb50
 * calls 0045da70 FUN_0045da70
 * calls 0045f490 FUN_0045f490
 * calls 0045dd10 FUN_0045dd10
 * calls 00727480 FUN_00727480
 * calls 0045e610 FUN_0045e610
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd940 FUN_006bd940
 * calls 004022e0 FUN_004022e0
 * calls 004668e0 FUN_004668e0
 * calls 00470020 FUN_00470020
 * calls 0074ab20 FUN_0074ab20
 * calls 00753b50 FUN_00753b50
 * calls 00445090 FUN_00445090
 * calls 00470080 FUN_00470080
 * calls 00402240 FUN_00402240
 * calls 0073ccf0 FUN_0073ccf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00757770(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  float *pfVar16;
  uint uVar17;
  byte *pbVar18;
  float10 fVar19;
  int *local_e0;
  float fStack_dc;
  int local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float *pfStack_94;
  undefined1 auStack_90 [8];
  float fStack_88;
  float afStack_80 [2];
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if ((DAT_00925e90 == 6) && (DAT_009b085c == 0)) {
    fVar5 = DAT_00925970 * _DAT_008b2f58;
    if (_DAT_0089096c < DAT_00925970 * _DAT_008b2f58) {
      fVar5 = _DAT_0089096c;
    }
    fVar5 = _DAT_0089096c - fVar5;
    iVar13 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
    piVar9 = (int *)(*(int *)(param_1 + 0x288) + 0x44);
    local_e0 = (int *)*piVar9;
    fVar5 = _DAT_0089096c - fVar5 * fVar5 * fVar5;
    if ((local_e0 == piVar9) || (local_e0 == (int *)0x0)) {
      local_e0 = (int *)0x0;
    }
    else {
      local_e0 = local_e0 + -1;
    }
    iVar10 = (**(code **)(*local_e0 + 0x10))();
    if ((local_e0[3] == 1) && (iVar10 != 0)) {
      FUN_00445090((float *)(iVar10 + 0x50));
      fStack_ac = *(float *)(iVar10 + 0x54);
      uStack_d0 = *(undefined4 *)(iVar10 + 0x20);
      fStack_a8 = *(float *)(iVar10 + 0x58);
      uStack_cc = *(undefined4 *)(iVar10 + 0x24);
      fStack_c8 = *(float *)(iVar10 + 0x28);
      fStack_b0 = *(float *)(iVar10 + 0x50);
      sVar7 = (**(code **)(*local_e0 + 0x30))();
      if (sVar7 != 0) {
        uVar11 = FUN_00470080(auStack_90,0x41200000);
        FUN_004668e0(uVar11);
      }
    }
    else {
      FUN_00444fe0(param_1 + 0x3610,iVar13);
      *(undefined4 *)(param_1 + 0x3640) = 0;
      *(undefined4 *)(param_1 + 0x3644) = 0;
      *(undefined4 *)(param_1 + 0x3648) = 0;
      *(undefined4 *)(param_1 + 0x364c) = 0x3f800000;
      fStack_ac = *(float *)(iVar13 + 0x54);
      fStack_a8 = *(float *)(iVar13 + 0x58);
      fStack_b0 = *(float *)(iVar13 + 0x50);
      uVar11 = FUN_00470080(auStack_90,DAT_00904ae0);
      puVar12 = (undefined4 *)FUN_00470020(afStack_80,uVar11);
      uStack_d0 = *puVar12;
      uStack_cc = puVar12[1];
      fStack_c8 = (float)puVar12[2];
    }
    uVar11 = *(undefined4 *)(iVar13 + 0x44);
    puVar12 = (undefined4 *)(param_1 + 0x260);
    *puVar12 = *(undefined4 *)(iVar13 + 0x40);
    *(undefined4 *)(param_1 + 0x264) = uVar11;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    fStack_dc = 9999.0;
    iVar10 = FUN_00727480(puVar12,3,0);
    if ((iVar10 != 0) && (fStack_c8 < *(float *)(iVar10 + 0x14))) {
      fStack_dc = *(float *)(iVar10 + 0x14);
      *(undefined4 *)(param_1 + 0x23c) = 1;
      *(int *)(param_1 + 0x244) = iVar10;
    }
    iVar10 = FUN_00727480(puVar12,4,0);
    if (((iVar10 != 0) && (fStack_c8 < *(float *)(iVar10 + 0x14))) &&
       (*(float *)(iVar10 + 0x14) < fStack_dc)) {
      fStack_dc = *(float *)(iVar10 + 0x14);
      *(int *)(param_1 + 0x244) = iVar10;
      *(undefined4 *)(param_1 + 0x240) = 1;
    }
    iVar10 = FUN_00727480(puVar12,5,0);
    if (((iVar10 != 0) && (fStack_c8 < *(float *)(iVar10 + 0x14))) &&
       (*(float *)(iVar10 + 0x14) < fStack_dc)) {
      fStack_dc = *(float *)(iVar10 + 0x14);
      *(int *)(param_1 + 0x244) = iVar10;
      *(undefined4 *)(param_1 + 0x240) = 1;
    }
    iVar10 = FUN_00727480(puVar12,7,0);
    if (((iVar10 != 0) && (fStack_c8 < *(float *)(iVar10 + 0x14))) &&
       (*(float *)(iVar10 + 0x14) < fStack_dc)) {
      *(int *)(param_1 + 0x244) = iVar10;
      *(undefined4 *)(param_1 + 0x240) = 1;
    }
    FUN_0045e610(param_1 + 0x3650,param_1 + 0x3610);
    FUN_00753b50(DAT_00925970);
    FUN_0073ccf0(0,DAT_00904ad8);
    if (local_e0[3] == 1) {
      iVar10 = param_1 + 0x270;
      FUN_006bd940(iVar10,param_1 + 0x3650,iVar13 + 0x200);
      FUN_004022e0(DAT_00904acc);
      *(undefined4 *)(param_1 + 0x274) = 0;
      fVar19 = (float10)FUN_00402240(iVar10);
      *(float *)(param_1 + 0x3690) = (float)fVar19;
      if ((float10)_DAT_0089096c < fVar19) {
        *(undefined4 *)(param_1 + 0x3690) = 0x3f800000;
        FUN_0045f490(iVar10,iVar10);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x270) = 0;
      *(undefined4 *)(param_1 + 0x274) = 0;
      *(undefined4 *)(param_1 + 0x278) = 0;
    }
    if (DAT_009b0a30 != 0) {
      FUN_0074ab20();
    }
    FUN_0045f490(&fStack_b0,&fStack_b0);
    iVar13 = FUN_0045dd10((fStack_a8 + fStack_ac) * _DAT_00890968 + fStack_b0);
    iVar13 = 0x4000 - iVar13;
    if (fStack_ac < _DAT_00890968) {
      iVar13 = 0xfbb4 - iVar13;
    }
    FUN_006bdb50(auStack_50,iVar13);
    uStack_20 = uStack_d0;
    fStack_18 = fStack_c8;
    uStack_1c = uStack_cc;
    uStack_14 = 0x3f800000;
    FUN_00444fe0(param_1 + 0x3610,auStack_50);
    FUN_00740240(auStack_90,&fStack_b0,param_1 + 0x3410);
    uVar17 = (uint)(*(int *)(*(int *)(param_1 + 0x288) + 4) != 1);
    uVar8 = *(short *)((int)&DAT_009b37a8 + uVar17 * 2) - (short)iVar13;
    *(short *)((int)&DAT_009b37a8 + uVar17 * 2) = (short)iVar13;
    local_e0 = (int *)(float)uVar8;
    if (_DAT_00894ac4 <= (float)uVar8) {
      local_e0 = (int *)((float)local_e0 - _DAT_00893348);
    }
    if ((float)local_e0 <= _DAT_008b2fec) {
      if ((float)local_e0 < _DAT_008b50bc) {
        local_e0 = (int *)0xc3c80000;
      }
    }
    else {
      local_e0 = (int *)0x43c80000;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x29c);
    *(float *)(param_1 + 0x34b4) = DAT_00904a60 * _DAT_008933d4 + _DAT_00904a6c;
    *(float *)(param_1 + 0x34bc) = DAT_00904a60 * _DAT_00891068 + _DAT_00904a6c;
    *(float *)(param_1 + 0x34b8) = DAT_00904a64 * _DAT_008933d4 + _DAT_009b0a34;
    fVar1 = DAT_00904a64 * _DAT_00891068 + _DAT_009b0a34;
    *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x298) = uVar11;
    *(float *)(param_1 + 0x34c0) = fVar1;
    puVar15 = (uint *)(param_1 + 0x33e4);
    iVar13 = -(*(int *)(param_1 + 0x33e8) + *(int *)(param_1 + 0x33e4));
    uVar17 = iVar13 + 0x15e;
    if (uVar17 != 0) {
      iVar10 = 0;
LAB_00757cd2:
      if (*puVar15 < uVar17) goto code_r0x00757cd6;
      iVar13 = *(int *)(param_1 + 0x33e4 + iVar10 * 4) - uVar17;
LAB_00757d10:
      *(int *)(param_1 + 0x33e4 + iVar10 * 4) = iVar13;
      goto LAB_00757d17;
    }
    iVar10 = 0;
    do {
      if (*puVar15 <= iVar13 + 700U) {
        iVar13 = *(int *)(param_1 + 0x33e4 + iVar10 * 4);
        goto LAB_00757d10;
      }
      iVar10 = iVar10 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar10 < 2);
LAB_00757d17:
    bVar6 = true;
    iVar13 = 0;
    piVar9 = (int *)(param_1 + 0x33dc);
    do {
      if (*piVar9 != piVar9[2]) {
        bVar6 = false;
        break;
      }
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 < 2);
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x260) = uStack_d0;
    *(undefined4 *)(param_1 + 0x264) = uStack_cc;
    if ((*(int *)(param_1 + 0x240) != 0) || (*(int *)(param_1 + 0x23c) != 0)) {
      *(undefined4 *)(param_1 + 0x234) = 1;
    }
    if (*(int *)(*(int *)(param_1 + 0x288) + 4) == 1) {
      _DAT_009b0a4c = *(undefined4 *)(param_1 + 0x234);
    }
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x284) = 0;
    local_d8 = 0;
    if (0 < *(int *)(param_1 + 0x33d8)) {
      pbVar18 = (byte *)(param_1 + 0x2e60);
      do {
        uVar17 = (uint)pbVar18[1];
        bVar3 = pbVar18[2];
        if (*pbVar18 == 0) {
          fVar1 = (float)local_e0 * _DAT_008b2fe8;
          *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
          iVar13 = local_d8 * 2 + 0x2a;
          iVar10 = (*(int *)(param_1 + 0x298) + iVar13) * 0x10;
          pfVar16 = (float *)(iVar10 + param_1);
          pfStack_94 = (float *)((*(int *)(param_1 + 0x29c) + iVar13) * 0x10 + param_1);
          pfVar16[1] = fVar1 * *(float *)(iVar10 + param_1) + pfVar16[1];
          fStack_5c = fVar1 * *pfStack_94 + pfStack_94[1];
          pfStack_94[1] = fStack_5c;
          fVar1 = *(float *)(param_1 + 0x33f4 + ((uint)bVar3 + uVar17 * 2) * 4);
          fStack_6c = fVar1 * *(float *)(param_1 + 0x3484);
          fStack_68 = fVar1 * *(float *)(param_1 + 0x3488);
          iVar10 = (local_d8 % 10 + uVar17 * 10) * 0x10;
          iVar13 = iVar10 + 0x36c8 + param_1;
          fVar2 = *(float *)(iVar13 + 4);
          fStack_88 = fStack_68 + *(float *)(iVar13 + 8);
          afStack_80[0] =
               (fVar1 * *(float *)(param_1 + 0x3480) + *(float *)(iVar10 + 0x36c8 + param_1)) *
               fVar5;
          fStack_78 = fStack_88 * fVar5;
          fStack_5c = fStack_5c + *(float *)(param_1 + 0x274);
          fStack_58 = *(float *)(param_1 + 0x278) + pfStack_94[2];
          fVar4 = *(float *)(param_1 + 0x270) + *pfStack_94 + afStack_80[0];
          *pfVar16 = fVar4;
          fVar1 = fStack_5c + (fStack_6c + fVar2) * fVar5;
          pfVar16[1] = fVar1;
          pfVar16[2] = fStack_58 + fStack_78;
          if (_DAT_00890968 <= fStack_58 + fStack_78) {
            if (fVar4 <= *(float *)(param_1 + 0x34b4)) {
              if (*(float *)(param_1 + 0x34bc) <= fVar4) {
                if (fVar1 <= *(float *)(param_1 + 0x34b8)) {
                  if (*(float *)(param_1 + 0x34c0) <= fVar1) goto LAB_007580a2;
                  pfVar16[1] = fVar1 + DAT_00904a64;
                  fVar1 = DAT_00904a64 + pfStack_94[1];
                }
                else {
                  pfVar16[1] = fVar1 - DAT_00904a64;
                  fVar1 = pfStack_94[1] - DAT_00904a64;
                }
                pfStack_94[1] = fVar1;
              }
              else {
                *pfVar16 = fVar4 + DAT_00904a60;
                *pfStack_94 = DAT_00904a60 + *pfStack_94;
              }
            }
            else {
              *pfVar16 = fVar4 - DAT_00904a60;
              *pfStack_94 = *pfStack_94 - DAT_00904a60;
            }
          }
          else {
            *pbVar18 = 1;
            *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + -1;
          }
        }
        else if (*pbVar18 < 3) {
          if (!bVar6) {
            uVar14 = 0;
            do {
              if ((uVar17 != uVar14) &&
                 (*(uint *)(param_1 + 0x33dc + uVar14 * 4) <
                  *(uint *)(param_1 + 0x33e4 + uVar14 * 4))) {
                piVar9 = (int *)(param_1 + 0x33dc + uVar17 * 4);
                *piVar9 = *piVar9 + -1;
                pbVar18[1] = (byte)uVar14;
                piVar9 = (int *)(param_1 + 0x33dc + uVar14 * 4);
                *piVar9 = *piVar9 + 1;
                uVar14 = 2;
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < 2);
          }
          if (pbVar18[1] == 1) {
            if (*pbVar18 == 1) {
              fVar19 = (float10)FUN_0045da70(DAT_00904a68);
              *(float *)((*(int *)(param_1 + 0x298) + local_d8 * 2) * 0x10 + 0x2a8 + param_1) =
                   (float)(fVar19 + (float10)_DAT_009b0a38);
              *pbVar18 = 2;
            }
          }
          else {
            if (*pbVar18 == 1) {
              iVar13 = (*(int *)(param_1 + 0x298) + local_d8 * 2) * 0x10;
              *(float *)(iVar13 + 0x2a8 + param_1) =
                   DAT_00904a68 + *(float *)(iVar13 + 0x2a8 + param_1);
              iVar13 = (*(int *)(param_1 + 0x29c) + local_d8 * 2) * 0x10;
              *(float *)(iVar13 + 0x2a8 + param_1) =
                   DAT_00904a68 + *(float *)(iVar13 + 0x2a8 + param_1);
            }
            *pbVar18 = 0;
            *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
          }
        }
LAB_007580a2:
        if (*(int *)(param_1 + 0x234) != 0) {
          if (*pbVar18 == 0) {
            *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + -1;
          }
          piVar9 = (int *)(param_1 + 0x33dc + (uint)pbVar18[1] * 4);
          *piVar9 = *piVar9 + -1;
          pbVar18[1] = 1;
          *(int *)(param_1 + 0x33e0) = *(int *)(param_1 + 0x33e0) + 1;
          *pbVar18 = 2;
        }
        local_d8 = local_d8 + 1;
        pbVar18 = pbVar18 + 4;
      } while (local_d8 < *(int *)(param_1 + 0x33d8));
    }
  }
  return;
code_r0x00757cd6:
  iVar10 = iVar10 + 1;
  puVar15 = puVar15 + 1;
  if (1 < iVar10) goto LAB_00757d17;
  goto LAB_00757cd2;
}

