/* speed.exe 007ce719 FUN_007ce719; analysis pseudocode, not buildable source.
 * calls 007d7cb0 ___libm_error_support
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007ce719(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar17 [16];
  ulonglong uVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  ulonglong in_XMM2_Qb;
  undefined1 auVar23 [16];
  longlong lVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong in_XMM3_Qb;
  undefined1 auVar27 [16];
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_c [4];
  
  dVar13 = (double)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar34 = (double)((ulonglong)DAT_008bcad0 & (ulonglong)param_1 | (ulonglong)DAT_008bcae0) *
           *(double *)(&DAT_008b9240 + uVar3 * 4);
  dVar31 = *(double *)(&DAT_008b9240 + uVar3 * 4);
  dVar14 = *(double *)(&DAT_008b9650 + uVar3 * 8);
  dVar33 = *(double *)(&UNK_008b9658 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if ((uVar11 - 0x10 | uVar7) < 0x80000000) {
    uVar7 = 0;
    uVar8 = 0x3fe7f;
LAB_007ce796:
    uVar4 = ((ushort)((ulonglong)dVar34 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar29 = (double)((ulonglong)dVar32 & (ulonglong)DAT_008bcad0 | (ulonglong)DAT_008bcae0);
    dVar15 = (double)(DAT_008bcb28 & (ulonglong)dVar29);
    in_XMM3_Qb = in_XMM3_Qb >> 0x1f;
    dVar29 = dVar29 - dVar15;
    uVar5 = ((ushort)((ulonglong)(dVar34 * *(double *)(&DAT_008b9e60 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar30 = dVar31 * *(double *)(&DAT_008b9e60 + uVar4 * 4) *
             *(double *)(&DAT_008baa80 + uVar5 * 4);
    dVar34 = dVar34 * *(double *)(&DAT_008b9e60 + uVar4 * 4) *
             *(double *)(&DAT_008baa80 + uVar5 * 4);
    dVar32 = dVar14 + *(double *)(&DAT_008ba270 + uVar4 * 8) +
             (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_008bb290 + uVar5 * 8);
    dVar13 = dVar33 + *(double *)(&DAT_008ba278 + uVar4 * 8) +
             *(double *)(&DAT_008bb298 + uVar5 * 8);
    dVar14 = (double)(DAT_008bcb28 & (ulonglong)dVar30);
    dVar30 = dVar30 - dVar14;
    dVar35 = DAT_008bcb30 + dVar34;
    dVar33 = dVar32 + dVar35;
    dVar31 = (double)CONCAT44(param_3,param_2);
    uVar2 = (ushort)(param_3 >> 0x10);
    dVar32 = dVar32 - dVar33;
    uVar4 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
    dVar14 = (((dVar34 - dVar14 * dVar15) - dVar15 * dVar30) - dVar14 * dVar29) - dVar29 * dVar30;
    dVar15 = dVar35 - dVar14;
    dVar34 = dVar33 - dVar14;
    uVar8 = uVar2 & 0x7ff0;
    if (uVar8 < 0x7ff0) {
      iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_007ce8e8:
        dVar29 = (double)(DAT_008bcb28 & (ulonglong)dVar31);
        dVar30 = (double)(DAT_008bcb28 & (ulonglong)dVar34);
        dVar14 = (dVar32 + dVar35) - (dVar14 - (dVar33 - dVar34));
        dVar33 = dVar29 * dVar30 * 128.0;
        uVar3 = (uint)ROUND(dVar33);
        dVar31 = dVar29 * (dVar34 - dVar30) + dVar30 * (dVar31 - dVar29) +
                 (dVar34 - dVar30) * (dVar31 - dVar29);
        if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
          iVar6 = (uVar3 & 0x7f) * 0x10;
          auVar17._0_8_ = (double)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar17._8_4_ = 0;
          auVar17._12_4_ = (int)((ulonglong)auVar17._0_8_ >> 0x20);
          dVar32 = *(double *)(&DAT_008bc2c0 + iVar6) * auVar17._0_8_;
          dVar31 = (dVar33 - ((dVar33 + _DAT_008bcac0) - _DAT_008bcac0)) * 0.0078125 +
                   dVar31 + ((_DAT_008bc2a0 * dVar15 + _DAT_008bc2b0 * dVar15 * dVar15) *
                             dVar15 * dVar15 +
                             _UNK_008bc2a8 * dVar15 + _UNK_008bc2b8 * dVar15 * dVar15 +
                            dVar13 + dVar14) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar31 * dVar31 * dVar32 *
                           (_DAT_008bcb10 + _DAT_008bcb00 * dVar31) * dVar31 * dVar31 +
                           *(double *)(&UNK_008bc2c8 + iVar6) * auVar17._8_8_ +
                           (_UNK_008bcb18 + _UNK_008bcb08 * dVar31) * dVar31 * dVar31 * dVar32 +
                           DAT_008bcb20 * dVar31 * dVar32 + dVar32);
        }
        if ((int)uVar3 < 1) {
          if ((int)uVar3 < -0x3fdff) {
LAB_007cf17a:
            _local_c = (double)((ulonglong)(DAT_008bcb58 * DAT_008bcb58) | (ulonglong)uVar7 << 0x2d)
            ;
            uVar10 = 0x19;
            goto LAB_007cef21;
          }
          uVar7 = uVar7 + 0x80;
          uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
          uVar11 = 0;
        }
        else {
          if (0x3ffff < uVar3) goto LAB_007cf19d;
          uVar7 = uVar7 + 0x3ff00;
          uVar9 = uVar3 - 0x80 & 0xffffff80;
          uVar11 = 0x3ff0;
        }
        iVar6 = (uVar3 & 0x7f) * 0x10;
        uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
        auVar21._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
        auVar21._8_4_ = 0;
        auVar21._12_4_ = (int)((ulonglong)auVar21._0_8_ >> 0x20);
        dVar32 = *(double *)(&DAT_008bc2c0 + iVar6) * auVar21._0_8_;
        dVar31 = (dVar33 - ((dVar33 + _DAT_008bcac0) - _DAT_008bcac0)) * 0.0078125 +
                 dVar31 + ((_DAT_008bc2a0 * dVar15 + _DAT_008bc2b0 * dVar15 * dVar15) *
                           dVar15 * dVar15 +
                           _UNK_008bc2a8 * dVar15 + _UNK_008bc2b8 * dVar15 * dVar15 +
                          dVar13 + dVar14) * (double)CONCAT44(param_3,param_2);
        _local_c = (double)((ulonglong)uVar7 << 0x2d);
        uVar28 = (ulonglong)(uVar3 + (uVar3 & 0x20));
        dVar14 = (double)(-1L << uVar28 & (ulonglong)dVar32);
        dVar31 = dVar31 * dVar31 * dVar32 *
                 (_DAT_008bcb10 + _DAT_008bcb00 * dVar31) * dVar31 * dVar31 +
                 *(double *)(&UNK_008bc2c8 + iVar6) * auVar21._8_8_ +
                 (_UNK_008bcb18 + _UNK_008bcb08 * dVar31) * dVar31 * dVar31 * dVar32 +
                 DAT_008bcb20 * dVar31 * dVar32;
        dVar33 = (double)((ulonglong)(dVar14 + dVar31) & -1L << uVar28);
        dVar31 = dVar31 + (dVar14 - dVar33) + (dVar32 - dVar14);
        if ((int)(uVar9 - 0x1ff80) < 1) {
          _local_c = dVar31 * _local_c + dVar33 * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
        else {
          _local_c = (dVar31 + dVar33) * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
      }
      else {
        dVar33 = dVar31 * dVar34;
        uVar3 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
        uVar9 = uVar3 - 0x3c70;
        if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_007ce8e8;
        if (0x7fffffff < uVar9) {
          return (float10)(double)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
        }
        if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_007cf17a;
LAB_007cf19d:
        uVar10 = 0x18;
        _local_c = DAT_008bcb40;
        if (uVar7 != 0) {
          _local_c = DAT_008bcb48;
        }
      }
      goto LAB_007cef21;
    }
    _local_c = (double)CONCAT44(param_3,param_2);
    auVar23._8_8_ = in_XMM2_Qb;
    auVar23._0_8_ = _local_c;
    bVar12 = uVar3 != 0;
    uVar3 = uVar4;
    if (bVar12) goto LAB_007cee2c;
    if (uVar9 == 0x3ff00000) goto LAB_007cef0a;
    uVar3 = uVar9;
    if (uVar9 != 0xbff00000) goto LAB_007cee2c;
    auVar19._0_4_ = -(uint)((int)((ulonglong)DAT_008bcad0 & (ulonglong)_local_c) == 0);
    auVar19._4_4_ = -(uint)((int)(((ulonglong)DAT_008bcad0 & (ulonglong)_local_c) >> 0x20) == 0);
    auVar19._8_4_ = -(uint)((int)(in_XMM3_Qb & in_XMM2_Qb) == 0);
    auVar19._12_4_ = -(uint)((int)((in_XMM3_Qb & in_XMM2_Qb) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar19._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar19._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar19._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf) == 0xff) {
      return (float10)1;
    }
  }
  else {
    auVar23._4_4_ = param_3;
    auVar23._0_4_ = param_2;
    auVar23._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & DAT_008bcaf0._4_4_;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        uVar10 = 0x1a;
        _local_c = DAT_008bcae0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)DAT_008bcae0;
          }
        }
        goto LAB_007cef21;
      }
      if ((int)uVar7 < 0) {
        auVar27._0_8_ = CONCAT44(DAT_008bcaf0._4_4_,(undefined4)DAT_008bcaf0) << 0x34;
        auVar27._8_8_ = in_XMM3_Qb << 0x34;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3_Qb = 0;
        uVar28 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar22 = SUB168(auVar23 | auVar27,0) << uVar28;
        lVar26 = SUB168(auVar23 | auVar27,8) << uVar28;
        auVar24._0_4_ = -(uint)((int)lVar22 == 0);
        auVar24._4_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0);
        auVar24._8_4_ = -(uint)((int)lVar26 == 0);
        auVar24._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
        bVar1 = SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar28 = auVar24._8_8_;
        if (0x7fef < uVar8) {
          auVar18._0_4_ = -(uint)((int)((ulonglong)DAT_008bcad0 & (ulonglong)param_1) == 0);
          auVar18._4_4_ =
               -(uint)((int)(((ulonglong)DAT_008bcad0 & (ulonglong)param_1) >> 0x20) == 0);
          auVar18._8_4_ = 0xffffffff;
          auVar18._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar16 = (ulonglong)(((param_3 & DAT_008bcaf0._4_4_) >> 0x14) - 0x3f4),
                 lVar22 = CONCAT44(param_3,param_2) << uVar16, lVar26 = uVar28 << uVar16,
                 auVar25._0_4_ = -(uint)((int)lVar22 == 0),
                 auVar25._4_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0),
                 auVar25._8_4_ = -(uint)((int)lVar26 == 0),
                 auVar25._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0),
                 (byte)(SUB161(auVar25 >> 7,0) & 1 | (SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar25 >> 0x17,0) & 1) << 2 | (SUB161(auVar25 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar25 >> 0x2f,0) & 1) << 5 | (SUB161(auVar25 >> 0x37,0) & 1) << 6
                       | SUB161(auVar25 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_007cee9e;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)DAT_008bcb48;
              }
              goto LAB_007ced39;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_007cee9e;
          }
          goto LAB_007ced7f;
        }
        if (bVar1 == 0xff) {
          uVar16 = (ulonglong)(((param_3 & DAT_008bcaf0._4_4_) >> 0x14) - 0x3f4);
          in_XMM3_Qb = 0;
          lVar22 = CONCAT44(param_3,param_2) << uVar16;
          lVar26 = uVar28 << uVar16;
          auVar23._0_4_ = -(uint)((int)lVar22 == SUB84(DAT_008bcb50,0));
          auVar23._4_4_ =
               -(uint)((int)((ulonglong)lVar22 >> 0x20) == (int)((ulonglong)DAT_008bcb50 >> 0x20));
          auVar23._8_4_ = -(uint)((int)lVar26 == 0);
          auVar23._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3_Qb = 0;
            in_XMM2_Qb = auVar23._8_8_;
            goto LAB_007ce796;
          }
          goto LAB_007cebb4;
        }
        dVar31 = (double)((ulonglong)param_1 >> 0x20);
        in_XMM2_Qb = uVar28 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1c;
          _local_c = DAT_008bcb60;
          goto LAB_007cef21;
        }
LAB_007cec3a:
        dVar32 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_007ced39:
            return (float10)DAT_008bcb50;
          }
          _local_c = (double)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_007cef21;
        }
      }
      else {
        uVar7 = 0;
LAB_007cebb4:
        in_XMM2_Qb = auVar23._8_8_;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar32 = dVar13;
        dVar34 = DAT_008bcad0;
        dVar31 = DAT_008bcae0;
        if (uVar3 == 0) goto LAB_007cec3a;
      }
      dVar13 = (double)(((ulonglong)dVar32 & CONCAT44(DAT_008bcaf0._4_4_,(undefined4)DAT_008bcaf0))
                       >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar34 = (double)((ulonglong)dVar34 & (ulonglong)dVar32 | (ulonglong)dVar31) *
               *(double *)(&DAT_008b9240 + uVar8 * 4);
      dVar31 = *(double *)(&DAT_008b9240 + uVar8 * 4);
      dVar14 = *(double *)(&DAT_008b9650 + uVar8 * 8);
      dVar33 = *(double *)(&UNK_008b9658 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_007ce796;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_007ced7f:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_007cef21;
    }
LAB_007cee2c:
    _local_c = auVar23._0_8_;
    uVar28 = in_XMM3_Qb & auVar23._8_8_;
    auVar20._0_4_ = -(uint)((int)((ulonglong)DAT_008bcad0 & (ulonglong)_local_c) == 0);
    auVar20._4_4_ = -(uint)((int)(((ulonglong)DAT_008bcad0 & (ulonglong)_local_c) >> 0x20) == 0);
    auVar20._8_4_ = -(uint)((int)uVar28 == 0);
    auVar20._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
    if ((byte)(SUB161(auVar20 >> 7,0) & 1 | (SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar20 >> 0x17,0) & 1) << 2 | (SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar20 >> 0x27,0) & 1) << 4 | (SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar20 >> 0x37,0) & 1) << 6 | SUB161(auVar20 >> 0x3f,0) << 7) == 0xff) {
      if (uVar3 != 0 || uVar7 != 0xbff00000) {
        if ((auVar23._6_2_ & 0x8000) == 0) {
          if ((uVar11 & 0x7ff0) < 0x3ff0) {
            return (float10)0;
          }
        }
        else if (0x3fef < (uVar11 & 0x7ff0)) {
          return (float10)0;
        }
LAB_007cee9e:
        return (float10)DAT_008bcb40;
      }
LAB_007cef0a:
      _local_c = (double)CONCAT44(param_3,param_2) + DAT_008bcb60;
      uVar10 = 0x1c;
      goto LAB_007cef21;
    }
  }
  _local_c = _local_c + _local_c;
  uVar10 = 0x3ee;
LAB_007cef21:
  ___libm_error_support(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}

