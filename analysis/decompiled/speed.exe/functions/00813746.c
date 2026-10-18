/* speed.exe 00813746 FUN_00813746; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00813746(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  short sVar10;
  wchar_t wVar11;
  int iVar12;
  undefined8 *puVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  ushort uVar39;
  short sVar40;
  ushort uVar41;
  ushort uVar42;
  short sVar43;
  ushort uVar44;
  short sVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  
  puVar13 = (undefined8 *)((int)param_1 + param_2 * 3);
  do {
    uVar1 = *param_1;
    uVar2 = *(undefined8 *)((int)param_1 + param_2);
    uVar33 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar36 = (ushort)(byte)uVar2;
    uVar34 = (ushort)(byte)((ulonglong)uVar2 >> 8);
    sVar38 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x10);
    sVar35 = (short)CONCAT21(uVar33,(char)((ulonglong)uVar2 >> 0x10));
    uVar33 = uVar33 >> 8;
    sVar40 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x20);
    sVar43 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x30);
    uVar42 = (ushort)(byte)((ulonglong)uVar2 >> 0x20);
    uVar37 = (ushort)(byte)((ulonglong)uVar2 >> 0x28);
    uVar39 = (ushort)(byte)((ulonglong)uVar2 >> 0x30);
    uVar41 = (ushort)(byte)((ulonglong)uVar2 >> 0x38);
    uVar14 = (ushort)(byte)uVar1 * (wchar_t)u_ffff_008c5970._0_8_ +
             uVar36 * (short)_PTR_DAT_008c5980 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar16 = (ushort)(byte)((ulonglong)uVar1 >> 8) * SUB82(u_ffff_008c5970._0_8_,2) +
             uVar34 * sVar38 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar18 = (ushort)(byte)((ulonglong)uVar1 >> 0x10) * SUB82(u_ffff_008c5970._0_8_,4) +
             sVar35 * sVar40 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar20 = (ushort)(byte)((ulonglong)uVar1 >> 0x18) * SUB82(u_ffff_008c5970._0_8_,6) +
             uVar33 * sVar43 + sVar6;
    uVar22 = (ushort)(byte)((ulonglong)uVar1 >> 0x20) * (wchar_t)u_ffff_008c5970._0_8_ +
             uVar42 * (short)_PTR_DAT_008c5980 + (short)DAT_008c59a0;
    uVar24 = (ushort)(byte)((ulonglong)uVar1 >> 0x28) * SUB82(u_ffff_008c5970._0_8_,2) +
             uVar37 * sVar38 + sVar4;
    uVar26 = (ushort)(byte)((ulonglong)uVar1 >> 0x30) * SUB82(u_ffff_008c5970._0_8_,4) +
             uVar39 * sVar40 + sVar5;
    uVar28 = (ushort)(byte)((ulonglong)uVar1 >> 0x38) * SUB82(u_ffff_008c5970._0_8_,6) +
             uVar41 * sVar43 + sVar6;
    uVar15 = uVar14 >> 8;
    uVar17 = uVar16 >> 8;
    uVar19 = uVar18 >> 8;
    uVar21 = uVar20 >> 8;
    uVar23 = uVar22 >> 8;
    uVar25 = uVar24 >> 8;
    uVar27 = uVar26 >> 8;
    uVar29 = uVar28 >> 8;
    *(ulonglong *)((int)param_1 + param_2) =
         CONCAT17((uVar29 != 0) * (uVar29 < 0x100) * (char)(uVar28 >> 8) - (0xff < uVar29),
                  CONCAT16((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) - (0xff < uVar27),
                           CONCAT15((uVar25 != 0) * (uVar25 < 0x100) * (char)(uVar24 >> 8) -
                                    (0xff < uVar25),
                                    CONCAT14((uVar23 != 0) * (uVar23 < 0x100) * (char)(uVar22 >> 8)
                                             - (0xff < uVar23),
                                             CONCAT13((uVar21 != 0) * (uVar21 < 0x100) *
                                                      (char)(uVar20 >> 8) - (0xff < uVar21),
                                                      CONCAT12((uVar19 != 0) * (uVar19 < 0x100) *
                                                               (char)(uVar18 >> 8) - (0xff < uVar19)
                                                               ,CONCAT11((uVar17 != 0) *
                                                                         (uVar17 < 0x100) *
                                                                         (char)(uVar16 >> 8) -
                                                                         (0xff < uVar17),
                                                                         (uVar15 != 0) *
                                                                         (uVar15 < 0x100) *
                                                                         (char)(uVar14 >> 8) -
                                                                         (0xff < uVar15))))))));
    uVar1 = *(undefined8 *)((int)param_1 + param_2 * 2);
    sVar38 = (short)DAT_008c5990;
    sVar40 = (short)((ulonglong)DAT_008c5990 >> 0x10);
    sVar43 = (short)((ulonglong)DAT_008c5990 >> 0x20);
    sVar10 = (short)((ulonglong)DAT_008c5990 >> 0x30);
    wVar7 = (wchar_t)u_3333_008c5960._0_8_;
    wVar8 = SUB82(u_3333_008c5960._0_8_,2);
    wVar9 = SUB82(u_3333_008c5960._0_8_,4);
    wVar11 = SUB82(u_3333_008c5960._0_8_,6);
    uVar14 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar15 = (ushort)(byte)uVar1;
    uVar24 = (ushort)(byte)((ulonglong)uVar1 >> 0x20);
    uVar44 = (ushort)(byte)((ulonglong)uVar1 >> 8);
    sVar45 = (short)CONCAT21(uVar14,(char)((ulonglong)uVar1 >> 0x10));
    uVar14 = uVar14 >> 8;
    uVar46 = (ushort)(byte)((ulonglong)uVar1 >> 0x28);
    uVar47 = (ushort)(byte)((ulonglong)uVar1 >> 0x30);
    uVar48 = (ushort)(byte)((ulonglong)uVar1 >> 0x38);
    uVar16 = uVar36 * sVar38 + uVar15 * wVar7 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar18 = uVar34 * sVar40 + uVar44 * wVar8 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar20 = sVar35 * sVar43 + sVar45 * wVar9 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar22 = uVar33 * sVar10 + uVar14 * wVar11 + sVar6;
    uVar25 = uVar42 * sVar38 + uVar24 * wVar7 + (short)DAT_008c59a0;
    uVar27 = uVar37 * sVar40 + uVar46 * wVar8 + sVar4;
    uVar29 = uVar39 * sVar43 + uVar47 * wVar9 + sVar5;
    uVar31 = uVar41 * sVar10 + uVar48 * wVar11 + sVar6;
    uVar17 = uVar16 >> 8;
    uVar19 = uVar18 >> 8;
    uVar21 = uVar20 >> 8;
    uVar23 = uVar22 >> 8;
    uVar26 = uVar25 >> 8;
    uVar28 = uVar27 >> 8;
    uVar30 = uVar29 >> 8;
    uVar32 = uVar31 >> 8;
    *(ulonglong *)((int)param_1 + param_2 * 2) =
         CONCAT17((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) - (0xff < uVar32),
                  CONCAT16((uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar29 >> 8) - (0xff < uVar30),
                           CONCAT15((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                    (0xff < uVar28),
                                    CONCAT14((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8)
                                             - (0xff < uVar26),
                                             CONCAT13((uVar23 != 0) * (uVar23 < 0x100) *
                                                      (char)(uVar22 >> 8) - (0xff < uVar23),
                                                      CONCAT12((uVar21 != 0) * (uVar21 < 0x100) *
                                                               (char)(uVar20 >> 8) - (0xff < uVar21)
                                                               ,CONCAT11((uVar19 != 0) *
                                                                         (uVar19 < 0x100) *
                                                                         (char)(uVar18 >> 8) -
                                                                         (0xff < uVar19),
                                                                         (uVar17 != 0) *
                                                                         (uVar17 < 0x100) *
                                                                         (char)(uVar16 >> 8) -
                                                                         (0xff < uVar17))))))));
    uVar16 = uVar36 * wVar7 + uVar15 * sVar38 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar17 = uVar34 * wVar8 + uVar44 * sVar40 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar19 = sVar35 * wVar9 + sVar45 * sVar43 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar21 = uVar33 * wVar11 + uVar14 * sVar10 + sVar6;
    uVar22 = uVar42 * wVar7 + uVar24 * sVar38 + (short)DAT_008c59a0;
    uVar25 = uVar37 * wVar8 + uVar46 * sVar40 + sVar4;
    uVar27 = uVar39 * wVar9 + uVar47 * sVar43 + sVar5;
    uVar29 = uVar41 * wVar11 + uVar48 * sVar10 + sVar6;
    uVar33 = uVar16 >> 8;
    uVar18 = uVar17 >> 8;
    uVar20 = uVar19 >> 8;
    uVar36 = uVar21 >> 8;
    uVar23 = uVar22 >> 8;
    uVar26 = uVar25 >> 8;
    uVar28 = uVar27 >> 8;
    uVar42 = uVar29 >> 8;
    *puVar13 = CONCAT17((uVar42 != 0) * (uVar42 < 0x100) * (char)(uVar29 >> 8) - (0xff < uVar42),
                        CONCAT16((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                 (0xff < uVar28),
                                 CONCAT15((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) -
                                          (0xff < uVar26),
                                          CONCAT14((uVar23 != 0) * (uVar23 < 0x100) *
                                                   (char)(uVar22 >> 8) - (0xff < uVar23),
                                                   CONCAT13((uVar36 != 0) * (uVar36 < 0x100) *
                                                            (char)(uVar21 >> 8) - (0xff < uVar36),
                                                            CONCAT12((uVar20 != 0) *
                                                                     (uVar20 < 0x100) *
                                                                     (char)(uVar19 >> 8) -
                                                                     (0xff < uVar20),
                                                                     CONCAT11((uVar18 != 0) *
                                                                              (uVar18 < 0x100) *
                                                                              (char)(uVar17 >> 8) -
                                                                              (0xff < uVar18),
                                                                              (uVar33 != 0) *
                                                                              (uVar33 < 0x100) *
                                                                              (char)(uVar16 >> 8) -
                                                                              (0xff < uVar33))))))))
    ;
    uVar1 = *(undefined8 *)((int)puVar13 + param_2 * 2);
    sVar38 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x10);
    sVar40 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x20);
    sVar43 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x30);
    uVar33 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar15 = uVar15 * (short)_PTR_DAT_008c5980 +
             (ushort)(byte)uVar1 * (wchar_t)u_ffff_008c5970._0_8_ + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar16 = uVar44 * sVar38 +
             (ushort)(byte)((ulonglong)uVar1 >> 8) * SUB82(u_ffff_008c5970._0_8_,2) + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar17 = sVar45 * sVar40 +
             (short)CONCAT21(uVar33,(char)((ulonglong)uVar1 >> 0x10)) *
             SUB82(u_ffff_008c5970._0_8_,4) + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar19 = uVar14 * sVar43 + (uVar33 >> 8) * SUB82(u_ffff_008c5970._0_8_,6) + sVar6;
    uVar21 = uVar24 * (short)_PTR_DAT_008c5980 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x20) * (wchar_t)u_ffff_008c5970._0_8_ +
             (short)DAT_008c59a0;
    uVar22 = uVar46 * sVar38 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x28) * SUB82(u_ffff_008c5970._0_8_,2) + sVar4;
    uVar24 = uVar47 * sVar40 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x30) * SUB82(u_ffff_008c5970._0_8_,4) + sVar5;
    uVar26 = uVar48 * sVar43 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x38) * SUB82(u_ffff_008c5970._0_8_,6) + sVar6;
    uVar33 = uVar15 >> 8;
    uVar14 = uVar16 >> 8;
    uVar18 = uVar17 >> 8;
    uVar20 = uVar19 >> 8;
    uVar36 = uVar21 >> 8;
    uVar23 = uVar22 >> 8;
    uVar25 = uVar24 >> 8;
    uVar27 = uVar26 >> 8;
    *(ulonglong *)((int)puVar13 + param_2) =
         CONCAT17((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) - (0xff < uVar27),
                  CONCAT16((uVar25 != 0) * (uVar25 < 0x100) * (char)(uVar24 >> 8) - (0xff < uVar25),
                           CONCAT15((uVar23 != 0) * (uVar23 < 0x100) * (char)(uVar22 >> 8) -
                                    (0xff < uVar23),
                                    CONCAT14((uVar36 != 0) * (uVar36 < 0x100) * (char)(uVar21 >> 8)
                                             - (0xff < uVar36),
                                             CONCAT13((uVar20 != 0) * (uVar20 < 0x100) *
                                                      (char)(uVar19 >> 8) - (0xff < uVar20),
                                                      CONCAT12((uVar18 != 0) * (uVar18 < 0x100) *
                                                               (char)(uVar17 >> 8) - (0xff < uVar18)
                                                               ,CONCAT11((uVar14 != 0) *
                                                                         (uVar14 < 0x100) *
                                                                         (char)(uVar16 >> 8) -
                                                                         (0xff < uVar14),
                                                                         (uVar33 != 0) *
                                                                         (uVar33 < 0x100) *
                                                                         (char)(uVar15 >> 8) -
                                                                         (0xff < uVar33))))))));
    puVar13 = puVar13 + 1;
    param_1 = param_1 + 1;
    iVar12 = param_3 + -8;
    bVar3 = 7 < param_3;
    param_3 = iVar12;
  } while (iVar12 != 0 && bVar3);
  return;
}

