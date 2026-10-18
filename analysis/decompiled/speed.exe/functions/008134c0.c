/* speed.exe 008134c0 FUN_008134c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008134c0(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
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
  short sVar29;
  short sVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  
  puVar8 = (undefined8 *)((int)param_1 + param_2 * 3);
  do {
    uVar1 = *param_1;
    uVar2 = *(undefined8 *)((int)param_1 + param_2);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar18 = (ushort)(byte)((ulonglong)uVar2 >> 8);
    uVar28 = (ushort)uVar2 & 0xff;
    sVar30 = (short)((ulonglong)DAT_008c5990 >> 0x10);
    sVar29 = (short)CONCAT21(uVar17,(char)((ulonglong)uVar2 >> 0x10));
    uVar17 = uVar17 >> 8;
    sVar35 = (short)((ulonglong)DAT_008c5990 >> 0x20);
    sVar38 = (short)((ulonglong)DAT_008c5990 >> 0x30);
    uVar27 = (ushort)(byte)((ulonglong)uVar2 >> 0x20);
    uVar31 = (ushort)(byte)((ulonglong)uVar2 >> 0x28);
    uVar33 = (ushort)(byte)((ulonglong)uVar2 >> 0x30);
    uVar36 = (ushort)(byte)((ulonglong)uVar2 >> 0x38);
    uVar9 = (ushort)(byte)uVar1 * (wchar_t)u_3333_008c5960._0_8_ + uVar28 * (short)DAT_008c5990 +
            (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar11 = (ushort)(byte)((ulonglong)uVar1 >> 8) * SUB82(u_3333_008c5960._0_8_,2) +
             uVar18 * sVar30 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar13 = (short)CONCAT21(uVar10,(char)((ulonglong)uVar1 >> 0x10)) *
             SUB82(u_3333_008c5960._0_8_,4) + sVar29 * sVar35 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar15 = (uVar10 >> 8) * SUB82(u_3333_008c5960._0_8_,6) + uVar17 * sVar38 + sVar6;
    uVar19 = (ushort)(byte)((ulonglong)uVar1 >> 0x20) * (wchar_t)u_3333_008c5960._0_8_ +
             uVar27 * (short)DAT_008c5990 + (short)DAT_008c59a0;
    uVar21 = (ushort)(byte)((ulonglong)uVar1 >> 0x28) * SUB82(u_3333_008c5960._0_8_,2) +
             uVar31 * sVar30 + sVar4;
    uVar23 = (ushort)(byte)((ulonglong)uVar1 >> 0x30) * SUB82(u_3333_008c5960._0_8_,4) +
             uVar33 * sVar35 + sVar5;
    uVar25 = (ushort)(byte)((ulonglong)uVar1 >> 0x38) * SUB82(u_3333_008c5960._0_8_,6) +
             uVar36 * sVar38 + sVar6;
    uVar10 = uVar9 >> 8;
    uVar12 = uVar11 >> 8;
    uVar14 = uVar13 >> 8;
    uVar16 = uVar15 >> 8;
    uVar20 = uVar19 >> 8;
    uVar22 = uVar21 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    *(ulonglong *)((int)param_1 + param_2) =
         CONCAT17((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) - (0xff < uVar26),
                  CONCAT16((uVar24 != 0) * (uVar24 < 0x100) * (char)(uVar23 >> 8) - (0xff < uVar24),
                           CONCAT15((uVar22 != 0) * (uVar22 < 0x100) * (char)(uVar21 >> 8) -
                                    (0xff < uVar22),
                                    CONCAT14((uVar20 != 0) * (uVar20 < 0x100) * (char)(uVar19 >> 8)
                                             - (0xff < uVar20),
                                             CONCAT13((uVar16 != 0) * (uVar16 < 0x100) *
                                                      (char)(uVar15 >> 8) - (0xff < uVar16),
                                                      CONCAT12((uVar14 != 0) * (uVar14 < 0x100) *
                                                               (char)(uVar13 >> 8) - (0xff < uVar14)
                                                               ,CONCAT11((uVar12 != 0) *
                                                                         (uVar12 < 0x100) *
                                                                         (char)(uVar11 >> 8) -
                                                                         (0xff < uVar12),
                                                                         (uVar10 != 0) *
                                                                         (uVar10 < 0x100) *
                                                                         (char)(uVar9 >> 8) -
                                                                         (0xff < uVar10))))))));
    uVar1 = *(undefined8 *)((int)param_1 + param_2 * 2);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar9 = (ushort)(byte)((ulonglong)uVar1 >> 8);
    uVar19 = (ushort)(byte)((ulonglong)uVar1 >> 0x20);
    sVar35 = (short)_PTR_DAT_008c5980;
    sVar38 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x10);
    sVar30 = (short)CONCAT21(uVar10,(char)((ulonglong)uVar1 >> 0x10));
    uVar10 = uVar10 >> 8;
    sVar39 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x20);
    sVar40 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x30);
    uVar32 = (ushort)(byte)((ulonglong)uVar1 >> 0x28);
    uVar34 = (ushort)(byte)((ulonglong)uVar1 >> 0x30);
    uVar37 = (ushort)(byte)((ulonglong)uVar1 >> 0x38);
    uVar11 = uVar28 * (wchar_t)u_ffff_008c5970._0_8_ + (ushort)(byte)uVar1 * sVar35 +
             (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar18 = uVar18 * SUB82(u_ffff_008c5970._0_8_,2) + uVar9 * sVar38 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar13 = sVar29 * SUB82(u_ffff_008c5970._0_8_,4) + sVar30 * sVar39 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar15 = uVar17 * SUB82(u_ffff_008c5970._0_8_,6) + uVar10 * sVar40 + sVar6;
    uVar28 = uVar27 * (wchar_t)u_ffff_008c5970._0_8_ + uVar19 * sVar35 + (short)DAT_008c59a0;
    uVar21 = uVar31 * SUB82(u_ffff_008c5970._0_8_,2) + uVar32 * sVar38 + sVar4;
    uVar23 = uVar33 * SUB82(u_ffff_008c5970._0_8_,4) + uVar34 * sVar39 + sVar5;
    uVar25 = uVar36 * SUB82(u_ffff_008c5970._0_8_,6) + uVar37 * sVar40 + sVar6;
    uVar17 = uVar11 >> 8;
    uVar12 = uVar18 >> 8;
    uVar14 = uVar13 >> 8;
    uVar16 = uVar15 >> 8;
    uVar20 = uVar28 >> 8;
    uVar22 = uVar21 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    *(ulonglong *)((int)param_1 + param_2 * 2) =
         CONCAT17((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) - (0xff < uVar26),
                  CONCAT16((uVar24 != 0) * (uVar24 < 0x100) * (char)(uVar23 >> 8) - (0xff < uVar24),
                           CONCAT15((uVar22 != 0) * (uVar22 < 0x100) * (char)(uVar21 >> 8) -
                                    (0xff < uVar22),
                                    CONCAT14((uVar20 != 0) * (uVar20 < 0x100) * (char)(uVar28 >> 8)
                                             - (0xff < uVar20),
                                             CONCAT13((uVar16 != 0) * (uVar16 < 0x100) *
                                                      (char)(uVar15 >> 8) - (0xff < uVar16),
                                                      CONCAT12((uVar14 != 0) * (uVar14 < 0x100) *
                                                               (char)(uVar13 >> 8) - (0xff < uVar14)
                                                               ,CONCAT11((uVar12 != 0) *
                                                                         (uVar12 < 0x100) *
                                                                         (char)(uVar18 >> 8) -
                                                                         (0xff < uVar12),
                                                                         (uVar17 != 0) *
                                                                         (uVar17 < 0x100) *
                                                                         (char)(uVar11 >> 8) -
                                                                         (0xff < uVar17))))))));
    uVar2 = *puVar8;
    uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar18 = (ushort)(byte)((ulonglong)uVar2 >> 8);
    uVar28 = (ushort)uVar2 & 0xff;
    uVar27 = (ushort)(byte)((ulonglong)uVar2 >> 0x20);
    sVar29 = (short)CONCAT21(uVar17,(char)((ulonglong)uVar2 >> 0x10));
    uVar17 = uVar17 >> 8;
    uVar31 = (ushort)(byte)((ulonglong)uVar2 >> 0x28);
    uVar33 = (ushort)(byte)((ulonglong)uVar2 >> 0x30);
    uVar36 = (ushort)(byte)((ulonglong)uVar2 >> 0x38);
    uVar11 = (ushort)(byte)uVar1 * sVar35 + uVar28 * (wchar_t)u_ffff_008c5970._0_8_ +
             (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar9 = uVar9 * sVar38 + uVar18 * SUB82(u_ffff_008c5970._0_8_,2) + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar13 = sVar30 * sVar39 + sVar29 * SUB82(u_ffff_008c5970._0_8_,4) + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar15 = uVar10 * sVar40 + uVar17 * SUB82(u_ffff_008c5970._0_8_,6) + sVar6;
    uVar19 = uVar19 * sVar35 + uVar27 * (wchar_t)u_ffff_008c5970._0_8_ + (short)DAT_008c59a0;
    uVar21 = uVar32 * sVar38 + uVar31 * SUB82(u_ffff_008c5970._0_8_,2) + sVar4;
    uVar23 = uVar34 * sVar39 + uVar33 * SUB82(u_ffff_008c5970._0_8_,4) + sVar5;
    uVar25 = uVar37 * sVar40 + uVar36 * SUB82(u_ffff_008c5970._0_8_,6) + sVar6;
    uVar10 = uVar11 >> 8;
    uVar12 = uVar9 >> 8;
    uVar14 = uVar13 >> 8;
    uVar16 = uVar15 >> 8;
    uVar20 = uVar19 >> 8;
    uVar22 = uVar21 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    *puVar8 = CONCAT17((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) - (0xff < uVar26),
                       CONCAT16((uVar24 != 0) * (uVar24 < 0x100) * (char)(uVar23 >> 8) -
                                (0xff < uVar24),
                                CONCAT15((uVar22 != 0) * (uVar22 < 0x100) * (char)(uVar21 >> 8) -
                                         (0xff < uVar22),
                                         CONCAT14((uVar20 != 0) * (uVar20 < 0x100) *
                                                  (char)(uVar19 >> 8) - (0xff < uVar20),
                                                  CONCAT13((uVar16 != 0) * (uVar16 < 0x100) *
                                                           (char)(uVar15 >> 8) - (0xff < uVar16),
                                                           CONCAT12((uVar14 != 0) * (uVar14 < 0x100)
                                                                    * (char)(uVar13 >> 8) -
                                                                    (0xff < uVar14),
                                                                    CONCAT11((uVar12 != 0) *
                                                                             (uVar12 < 0x100) *
                                                                             (char)(uVar9 >> 8) -
                                                                             (0xff < uVar12),
                                                                             (uVar10 != 0) *
                                                                             (uVar10 < 0x100) *
                                                                             (char)(uVar11 >> 8) -
                                                                             (0xff < uVar10))))))));
    uVar1 = *(undefined8 *)((int)puVar8 + param_2 * 2);
    sVar30 = (short)((ulonglong)DAT_008c5990 >> 0x10);
    sVar35 = (short)((ulonglong)DAT_008c5990 >> 0x20);
    sVar38 = (short)((ulonglong)DAT_008c5990 >> 0x30);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar9 = uVar28 * (short)DAT_008c5990 + ((ushort)uVar1 & 0xff) * (wchar_t)u_3333_008c5960._0_8_ +
            (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar18 = uVar18 * sVar30 +
             (ushort)(byte)((ulonglong)uVar1 >> 8) * SUB82(u_3333_008c5960._0_8_,2) + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar11 = sVar29 * sVar35 +
             (short)CONCAT21(uVar10,(char)((ulonglong)uVar1 >> 0x10)) *
             SUB82(u_3333_008c5960._0_8_,4) + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar13 = uVar17 * sVar38 + (uVar10 >> 8) * SUB82(u_3333_008c5960._0_8_,6) + sVar6;
    uVar15 = uVar27 * (short)DAT_008c5990 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x20) * (wchar_t)u_3333_008c5960._0_8_ +
             (short)DAT_008c59a0;
    uVar28 = uVar31 * sVar30 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x28) * SUB82(u_3333_008c5960._0_8_,2) + sVar4;
    uVar20 = uVar33 * sVar35 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x30) * SUB82(u_3333_008c5960._0_8_,4) + sVar5;
    uVar22 = uVar36 * sVar38 +
             (ushort)(byte)((ulonglong)uVar1 >> 0x38) * SUB82(u_3333_008c5960._0_8_,6) + sVar6;
    uVar17 = uVar9 >> 8;
    uVar10 = uVar18 >> 8;
    uVar12 = uVar11 >> 8;
    uVar14 = uVar13 >> 8;
    uVar16 = uVar15 >> 8;
    uVar19 = uVar28 >> 8;
    uVar21 = uVar20 >> 8;
    uVar23 = uVar22 >> 8;
    *(ulonglong *)((int)puVar8 + param_2) =
         CONCAT17((uVar23 != 0) * (uVar23 < 0x100) * (char)(uVar22 >> 8) - (0xff < uVar23),
                  CONCAT16((uVar21 != 0) * (uVar21 < 0x100) * (char)(uVar20 >> 8) - (0xff < uVar21),
                           CONCAT15((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar28 >> 8) -
                                    (0xff < uVar19),
                                    CONCAT14((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8)
                                             - (0xff < uVar16),
                                             CONCAT13((uVar14 != 0) * (uVar14 < 0x100) *
                                                      (char)(uVar13 >> 8) - (0xff < uVar14),
                                                      CONCAT12((uVar12 != 0) * (uVar12 < 0x100) *
                                                               (char)(uVar11 >> 8) - (0xff < uVar12)
                                                               ,CONCAT11((uVar10 != 0) *
                                                                         (uVar10 < 0x100) *
                                                                         (char)(uVar18 >> 8) -
                                                                         (0xff < uVar10),
                                                                         (uVar17 != 0) *
                                                                         (uVar17 < 0x100) *
                                                                         (char)(uVar9 >> 8) -
                                                                         (0xff < uVar17))))))));
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
    iVar7 = param_3 + -8;
    bVar3 = 7 < param_3;
    param_3 = iVar7;
  } while (iVar7 != 0 && bVar3);
  return;
}

