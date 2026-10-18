/* speed.exe 00775be0 FUN_00775be0; analysis pseudocode, not buildable source.
 * calls 00401c10 FUN_00401c10
 * calls 00765e40 FUN_00765e40
 * calls 00775a20 FUN_00775a20
 * calls 00401b80 FUN_00401b80
 * calls 0076eed0 FUN_0076eed0
 * calls 005d59f0 FUN_005d59f0
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00401ae0 FUN_00401ae0
 * calls 00402000 FUN_00402000
 * calls 004d6150 FUN_004d6150
 * calls 00401d10 FUN_00401d10
 * calls 00402060 FUN_00402060
 * calls 0076f010 FUN_0076f010
 * calls 00765cc0 FUN_00765cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00775be0(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  byte bVar15;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar16;
  float fVar17;
  float *pfVar18;
  bool bVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float unaff_retaddr;
  int iStack_1a4;
  float *pfStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  int iStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  int iStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int iStack_148;
  float afStack_144 [2];
  float fStack_13c;
  int iStack_138;
  float fStack_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [2];
  float fStack_100;
  float afStack_fc [2];
  float fStack_f4;
  float afStack_f0 [2];
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 auStack_90 [4];
  undefined4 auStack_8c [3];
  undefined1 local_80 [120];
  float fStack_8;
  int iStack_4;
  
  if ((((param_3 != 0) && (*(int *)((int)param_1 + 0x84) != 0)) &&
      (*(int *)((int)param_1 + 0x84) != -0x4c)) &&
     (local_198 = param_1, local_12c = (float)FUN_00775a20(local_80,0x20), local_12c != 0.0)) {
    piVar11 = (int *)FUN_005d59f0(&LAB_004039f0);
    fStack_194 = (float)(**(code **)(*piVar11 + 0x20))();
    iVar12 = FUN_0076eed0(fStack_194,param_2,param_3,0);
    if (-1 < iVar12) {
      iVar12 = iVar12 * 0x40 + (int)param_2;
      fStack_110 = (float)(**(code **)(*piVar11 + 0x24))();
      (**(code **)(*piVar11 + 0x38))(&fStack_164);
      (**(code **)(*piVar11 + 0x34))(auStack_90);
      (**(code **)(*piVar11 + 0x4c))(auStack_e0);
      fVar21 = (float10)(**(code **)(*piVar11 + 0x2c))();
      fStack_164 = (float)fVar21;
      fStack_150 = *(float *)((int)param_1 + 0xbc);
      fStack_14c = *(float *)((int)param_1 + 0xc4);
      FUN_0045f3c0(&fStack_150,&fStack_150);
      iStack_160 = iStack_4;
      if ((*(int *)((int)param_1 + 0x7c) == 2) ||
         (bVar8 = false, *(int *)((int)param_1 + 0x7c) == 4)) {
        bVar8 = true;
      }
      bVar20 = *(int *)((int)param_1 + 0x78) == 1;
      cVar9 = FUN_004d6150();
      iStack_148 = 0;
      fVar17 = param_2;
      if (0 < iStack_138) {
        do {
          piVar11 = (int *)auStack_8c[iStack_148];
          (**(code **)(*piVar11 + 4))(&fStack_d8);
          local_198 = fStack_a4;
          fVar17 = fStack_a4 - *(float *)(iVar12 + 0x34);
          fStack_194 = fStack_a0;
          fStack_19c = fStack_a8;
          fVar1 = _DAT_00890db8;
          if ((_DAT_00890db8 < fVar17) && (fVar1 = fVar17, _DAT_00890da4 < fVar17)) {
            fVar1 = _DAT_00890da4;
          }
          if (fVar17 == fVar1) {
            (**(code **)(*piVar11 + 0x10))(afStack_144);
            piVar13 = (int *)FUN_005d59f0(&LAB_004040e0);
            if ((piVar13 == (int *)0x0) ||
               ((iVar14 = (**(code **)(*piVar13 + 0x58))(), iVar14 != 1 && (iVar14 != 4)))) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if ((((bVar8) && (bVar19)) &&
                (fVar21 = (float10)FUN_00401d10(fStack_d0 * *(float *)(iVar12 + 0x14) +
                                                fStack_d8 * *(float *)(iVar12 + 0x10)),
                (float10)_DAT_00891058 < fVar21)) &&
               ((piVar13 != (int *)0x0 &&
                (piVar13 = (int *)(**(code **)(*piVar13 + 0x44))(), DAT_0092c504 == *piVar13)))) {
              FUN_00401c10(&fStack_b8,0xc0c00000,&fStack_19c,&fStack_19c);
              afStack_144[0] = 1.8;
              fStack_13c = 1.8;
            }
            fVar17 = fStack_b0 * *(float *)(iVar12 + 0x14) + fStack_b8 * *(float *)(iVar12 + 0x10);
            if (fVar17 < _DAT_00890968) {
              fVar17 = -fVar17;
            }
            fVar1 = fStack_d0 * *(float *)(iVar12 + 0x14) + fStack_d8 * *(float *)(iVar12 + 0x10);
            if (fVar1 < _DAT_00890968) {
              fVar1 = -fVar1;
            }
            fVar1 = fVar17 * fStack_13c + (fVar1 + _DAT_0089096c) * afStack_144[0] + _DAT_008933d4;
            fVar3 = fStack_dc + fStack_e4 + _DAT_008933d4;
            fVar17 = (fStack_19c - *pfStack_1a0) * *(float *)(iVar12 + 0x10) +
                     (fStack_194 - pfStack_1a0[2]) * *(float *)(iVar12 + 0x14);
            fVar4 = fStack_b8 * fStack_170 + fStack_b4 * fStack_16c + fStack_b0 * fStack_168;
            if (fVar4 < _DAT_00890968) {
              fVar4 = -fVar4;
            }
            fVar5 = fStack_d8 * fStack_170 + fStack_d0 * fStack_168 + fStack_d4 * fStack_16c;
            if (fVar5 < _DAT_00890968) {
              fVar5 = -fVar5;
            }
            fVar5 = fVar5 * afStack_144[0] + fVar4 * fStack_13c + fStack_e4;
            fVar4 = fStack_16c * (local_198 - pfStack_1a0[1]) +
                    fStack_170 * (fStack_19c - *pfStack_1a0) +
                    fStack_168 * (fStack_194 - pfStack_1a0[2]);
            if (fVar4 < _DAT_00890968) {
              fVar4 = -fVar4;
            }
            uStack_190 = 0;
            if ((bVar20) || (fStack_164 < _DAT_008b5a98)) {
              bVar15 = fVar17 + fVar1 < fVar3 |
                       (byte)((ushort)((ushort)(NAN(fVar17 + fVar1) || NAN(fVar3)) << 10) >> 8);
            }
            else {
              bVar15 = fVar17 - fVar1 < fVar3 |
                       (byte)((ushort)((ushort)(fVar17 - fVar1 == fVar3) << 0xe) >> 8);
            }
            bVar19 = (POPCOUNT(bVar15) & 1U) != 0;
            if (bVar19) {
              uStack_190 = 2;
            }
            fVar2 = fVar3 + fVar1;
            if ((-fVar2 <= fVar17) && ((_DAT_00890968 <= fVar17 + fVar1 || (fVar5 <= fVar4)))) {
              (**(code **)(*piVar11 + 8))(afStack_108);
              fVar6 = fVar17 - fVar2;
              if (fVar17 - fVar2 <= _DAT_00890968) {
                fVar6 = _DAT_00890968;
              }
              fStack_130 = pfStack_1a0[1];
              fVar7 = fVar6;
              if (fVar3 < fVar6) {
                fVar7 = fVar3;
              }
              fStack_124 = local_198;
              fStack_134 = fVar7 * *(float *)(iVar12 + 0x10) + *pfStack_1a0;
              local_12c = fVar7 * *(float *)(iVar12 + 0x14) + pfStack_1a0[2];
              if (fVar1 < fVar6) {
                fVar6 = fVar1;
              }
              fStack_128 = fStack_19c - fVar6 * *(float *)(iVar12 + 0x10);
              fStack_15c = 0.0;
              fStack_120 = fStack_194 - fVar6 * *(float *)(iVar12 + 0x14);
              fVar21 = (float10)FUN_0076f010(&fStack_15c);
              fVar6 = local_198;
              fVar1 = (float)fVar21;
              if (bVar19) {
LAB_007761dc:
                if (fVar1 < _DAT_008b5a90) {
LAB_007761f1:
                  fVar3 = fStack_100 * *(float *)(iVar12 + 0x14) +
                          afStack_108[0] * *(float *)(iVar12 + 0x10);
                  fVar4 = fVar3 * fVar1 - fVar2;
                  fStack_188 = local_198;
                  fStack_18c = fVar4 * *(float *)(iVar12 + 0x10) + fStack_19c;
                  fStack_184 = fVar4 * *(float *)(iVar12 + 0x14) + fStack_194;
                  iVar14 = FUN_0076eed0(&fStack_18c,fStack_8,iStack_4,0);
                  if (-1 < iVar14) {
                    iVar16 = iVar14 * 0x40 + (int)fStack_8;
                    FUN_00401b80(&fStack_d8,afStack_144[0],afStack_f0);
                    FUN_00401b80(&fStack_b8,fStack_13c,afStack_fc);
                    fStack_110 = afStack_fc[0] - afStack_f0[0];
                    fStack_10c = fStack_f4 - fStack_e8;
                    fStack_118 = afStack_f0[0] + afStack_fc[0];
                    fStack_114 = fStack_e8 + fStack_f4;
                    fVar4 = afStack_108[0] * *(float *)(iVar16 + 0x14);
                    fVar5 = fStack_100 * *(float *)(iVar16 + 0x10);
                    if ((iVar14 < iStack_160) && (fVar2 < fVar17)) {
                      *(float *)(iStack_1a4 + 100) = fVar3;
                      iStack_160 = iVar14;
                    }
                    fVar21 = (float10)FUN_00402060(fVar1,0,0x3f800000);
                    fVar3 = (fVar4 - fVar5) * (float)fVar21;
                    fStack_178 = fVar6;
                    fStack_17c = fVar3 * *(float *)(iVar16 + 0x14) * _DAT_008b5a4c + fStack_18c;
                    fStack_174 = fStack_184 - fVar3 * *(float *)(iVar16 + 0x10) * _DAT_008b5a4c;
                    fStack_158 = fStack_17c - *(float *)(iVar16 + 0x30);
                    fStack_154 = fStack_174 - *(float *)(iVar16 + 0x38);
                    fVar22 = (float10)FUN_00401ae0((fStack_158 * *(float *)(iVar16 + 0x10) +
                                                   fStack_154 * *(float *)(iVar16 + 0x14)) -
                                                   ((*pfStack_1a0 - *(float *)(iVar16 + 0x30)) *
                                                    *(float *)(iVar16 + 0x10) +
                                                   (pfStack_1a0[2] - *(float *)(iVar16 + 0x38)) *
                                                   *(float *)(iVar16 + 0x14)),0xc0c00000,0x40c00000)
                    ;
                    fVar17 = (float)fVar22;
                    fVar1 = fStack_158 * *(float *)(iVar16 + 0x14) -
                            fStack_154 * *(float *)(iVar16 + 0x10);
                    fVar22 = (float10)FUN_00402000(ABS(fStack_110 * *(float *)(iVar16 + 0x14) -
                                                       fStack_10c * *(float *)(iVar16 + 0x10)),
                                                   ABS(fStack_118 * *(float *)(iVar16 + 0x14) -
                                                       fStack_114 * *(float *)(iVar16 + 0x10)));
                    fVar22 = (float10)fVar3 * (float10)_DAT_008b5c90 * (float10)fVar17 + fVar22;
                    fVar3 = fStack_150 * *(float *)(iVar16 + 0x14) -
                            fStack_14c * *(float *)(iVar16 + 0x10);
                    fVar4 = _DAT_0089096c;
                    if (cVar9 != '\0') {
                      fVar4 = _DAT_008b5a4c;
                    }
                    fVar23 = (float10)(fVar4 * fVar17) + (float10)*(float *)(iStack_1a4 + 0x88);
                    bVar19 = fVar23 < ((float10)fVar1 - fVar22) - (float10)*(float *)(iVar16 + 0x20)
                    ;
                    iStack_180 = CONCAT31(iStack_180._1_3_,1);
                    if (fVar1 <= fVar17 * (float)fVar21 * param_2 * _DAT_00895074 + unaff_retaddr +
                                 fVar3 + fVar3) {
                      iStack_180 = (uint)iStack_180._1_3_ << 8;
                    }
                    if (bVar19 != fVar23 < ((float10)*(float *)(iVar16 + 0x24) - (float10)fVar1) -
                                           fVar22) {
                      iStack_180 = CONCAT31(iStack_180._1_3_,bVar19);
                    }
                    if (iVar14 < iStack_4) {
                      pfVar18 = (float *)(iVar16 + 0x34);
                      iVar16 = iVar14;
                      do {
                        cVar10 = FUN_00765cc0(pfVar18 + -0xd,&fStack_17c,
                                              (float)(fVar22 + (float10)(float)fVar23),iStack_180,
                                              uStack_190);
                        if (((cVar10 == '\0') && (iVar16 == iVar14)) ||
                           (fVar2 + fVar2 +
                            (fStack_18c - pfVar18[-1]) * pfVar18[-9] +
                            (fStack_188 - *pfVar18) * pfVar18[-8] < _DAT_00890968)) break;
                        iVar16 = iVar16 + 1;
                        pfVar18 = pfVar18 + 0x10;
                      } while (iVar16 < iStack_4);
                    }
                  }
                }
              }
              else {
                if (fStack_15c < _DAT_00890968 == (fStack_15c == _DAT_00890968)) {
LAB_007761d8:
                  if (!bVar20) goto LAB_007761dc;
                  goto LAB_007761f1;
                }
                fVar7 = fVar2;
                if (bVar20) {
                  fVar7 = fStack_164 * _DAT_008933d4 + fVar3 + fVar3 + fVar2;
                }
                if (fVar17 <= fVar7) {
                  if (!bVar20) goto LAB_007761dc;
                  if (fVar4 <= fVar5 + _DAT_0089096c) goto LAB_007761d8;
                }
              }
            }
          }
          iStack_148 = iStack_148 + 1;
          fVar17 = fStack_8;
        } while (iStack_148 < iStack_138);
      }
      FUN_00765e40(fVar17,iStack_4);
    }
  }
  return;
}

