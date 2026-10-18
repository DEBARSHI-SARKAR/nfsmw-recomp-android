/* speed.exe 008138b4 FUN_008138b4; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008138b4(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  ushort uVar20;
  ushort uVar21;
  short sVar22;
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
  short sVar33;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  short sVar42;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 uVar53;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar59;
  short sVar57;
  short sVar58;
  undefined1 uVar60;
  undefined1 uVar63;
  short sVar61;
  short sVar62;
  undefined1 uVar64;
  undefined8 uVar54;
  undefined1 uVar67;
  short sVar65;
  short sVar66;
  undefined4 uVar34;
  undefined6 uVar35;
  undefined4 uVar43;
  undefined6 uVar44;
  
  puVar19 = (undefined8 *)((int)param_1 + param_2 * 3);
  uVar54 = 0;
  do {
    uVar1 = *param_1;
    uVar2 = *(undefined8 *)((int)param_1 + param_2);
    uVar59 = (undefined1)((ulonglong)uVar54 >> 0x18);
    sVar7 = CONCAT11(uVar59,(char)((ulonglong)uVar1 >> 0x18));
    uVar56 = (undefined1)((ulonglong)uVar54 >> 0x10);
    uVar55 = (undefined1)((ulonglong)uVar54 >> 8);
    uVar53 = (undefined1)uVar54;
    uVar60 = (undefined1)((ulonglong)uVar54 >> 0x20);
    sVar30 = CONCAT11(uVar60,(char)((ulonglong)uVar1 >> 0x20));
    uVar63 = (undefined1)((ulonglong)uVar54 >> 0x28);
    uVar34 = CONCAT13(uVar63,CONCAT12((char)((ulonglong)uVar1 >> 0x28),sVar30));
    uVar64 = (undefined1)((ulonglong)uVar54 >> 0x30);
    uVar35 = CONCAT15(uVar64,CONCAT14((char)((ulonglong)uVar1 >> 0x30),uVar34));
    uVar67 = (undefined1)((ulonglong)uVar54 >> 0x38);
    sVar12 = CONCAT11(uVar59,(char)((ulonglong)uVar2 >> 0x18));
    sVar13 = CONCAT11(uVar55,(char)((ulonglong)uVar2 >> 8));
    sVar29 = CONCAT11(uVar53,(char)uVar2);
    sVar49 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x10);
    sVar45 = (short)CONCAT31(CONCAT21(sVar12,uVar56),(char)((ulonglong)uVar2 >> 0x10));
    sVar50 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x20);
    sVar52 = (short)((ulonglong)_PTR_DAT_008c5980 >> 0x30);
    sVar42 = CONCAT11(uVar60,(char)((ulonglong)uVar2 >> 0x20));
    uVar43 = CONCAT13(uVar63,CONCAT12((char)((ulonglong)uVar2 >> 0x28),sVar42));
    uVar44 = CONCAT15(uVar64,CONCAT14((char)((ulonglong)uVar2 >> 0x30),uVar43));
    sVar46 = (short)((uint)uVar43 >> 0x10);
    sVar47 = (short)((uint6)uVar44 >> 0x20);
    sVar48 = (short)(CONCAT17(uVar67,CONCAT16((char)((ulonglong)uVar2 >> 0x38),uVar44)) >> 0x30);
    uVar20 = CONCAT11(uVar53,(char)uVar1) * (wchar_t)u_ffff_008c5970._0_8_ +
             sVar29 * (short)_PTR_DAT_008c5980 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar23 = CONCAT11(uVar55,(char)((ulonglong)uVar1 >> 8)) * SUB82(u_ffff_008c5970._0_8_,2) +
             sVar13 * sVar49 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar25 = (short)CONCAT31(CONCAT21(sVar7,uVar56),(char)((ulonglong)uVar1 >> 0x10)) *
             SUB82(u_ffff_008c5970._0_8_,4) + sVar45 * sVar50 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar27 = sVar7 * SUB82(u_ffff_008c5970._0_8_,6) + sVar12 * sVar52 + sVar6;
    uVar31 = sVar30 * (wchar_t)u_ffff_008c5970._0_8_ + sVar42 * (short)_PTR_DAT_008c5980 +
             (short)DAT_008c59a0;
    uVar36 = (short)((uint)uVar34 >> 0x10) * SUB82(u_ffff_008c5970._0_8_,2) + sVar46 * sVar49 +
             sVar4;
    uVar38 = (short)((uint6)uVar35 >> 0x20) * SUB82(u_ffff_008c5970._0_8_,4) + sVar47 * sVar50 +
             sVar5;
    uVar40 = (short)(CONCAT17(uVar67,CONCAT16((char)((ulonglong)uVar1 >> 0x38),uVar35)) >> 0x30) *
             SUB82(u_ffff_008c5970._0_8_,6) + sVar48 * sVar52 + sVar6;
    uVar21 = uVar20 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    uVar28 = uVar27 >> 8;
    uVar32 = uVar31 >> 8;
    uVar37 = uVar36 >> 8;
    uVar39 = uVar38 >> 8;
    uVar41 = uVar40 >> 8;
    *(ulonglong *)((int)param_1 + param_2) =
         CONCAT17((uVar41 != 0) * (uVar41 < 0x100) * (char)(uVar40 >> 8) - (0xff < uVar41),
                  CONCAT16((uVar39 != 0) * (uVar39 < 0x100) * (char)(uVar38 >> 8) - (0xff < uVar39),
                           CONCAT15((uVar37 != 0) * (uVar37 < 0x100) * (char)(uVar36 >> 8) -
                                    (0xff < uVar37),
                                    CONCAT14((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8)
                                             - (0xff < uVar32),
                                             CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                      (char)(uVar27 >> 8) - (0xff < uVar28),
                                                      CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                                               (char)(uVar25 >> 8) - (0xff < uVar26)
                                                               ,CONCAT11((uVar24 != 0) *
                                                                         (uVar24 < 0x100) *
                                                                         (char)(uVar23 >> 8) -
                                                                         (0xff < uVar24),
                                                                         (uVar21 != 0) *
                                                                         (uVar21 < 0x100) *
                                                                         (char)(uVar20 >> 8) -
                                                                         (0xff < uVar21))))))));
    uVar54 = *(undefined8 *)((int)param_1 + param_2 * 2);
    sVar4 = (short)DAT_008c5990;
    uVar15 = (ulonglong)DAT_008c5990 >> 0x10;
    uVar16 = (ulonglong)DAT_008c5990 >> 0x20;
    uVar17 = (ulonglong)DAT_008c5990 >> 0x30;
    *(undefined8 *)((int)puVar19 + param_2) = uVar54;
    sVar7 = (short)DAT_008c5990;
    sVar30 = (short)((ulonglong)DAT_008c5990 >> 0x10);
    sVar49 = (short)((ulonglong)DAT_008c5990 >> 0x20);
    sVar50 = (short)((ulonglong)DAT_008c5990 >> 0x30);
    wVar8 = (wchar_t)u_3333_008c5960._0_8_;
    wVar9 = SUB82(u_3333_008c5960._0_8_,2);
    wVar10 = SUB82(u_3333_008c5960._0_8_,4);
    wVar11 = SUB82(u_3333_008c5960._0_8_,6);
    sVar52 = CONCAT11(uVar59,(char)((ulonglong)uVar54 >> 0x18));
    sVar14 = CONCAT11(uVar55,(char)((ulonglong)uVar54 >> 8));
    sVar22 = CONCAT11(uVar53,(char)uVar54);
    sVar33 = CONCAT11(uVar60,(char)((ulonglong)uVar54 >> 0x20));
    uVar34 = CONCAT13(uVar63,CONCAT12((char)((ulonglong)uVar54 >> 0x28),sVar33));
    uVar35 = CONCAT15(uVar64,CONCAT14((char)((ulonglong)uVar54 >> 0x30),uVar34));
    sVar51 = (short)CONCAT31(CONCAT21(sVar52,uVar56),(char)((ulonglong)uVar54 >> 0x10));
    sVar57 = (short)((uint)uVar34 >> 0x10);
    sVar61 = (short)((uint6)uVar35 >> 0x20);
    sVar65 = (short)(CONCAT17(uVar67,CONCAT16((char)((ulonglong)uVar54 >> 0x38),uVar35)) >> 0x30);
    sVar58 = sVar57 * sVar30;
    sVar62 = sVar61 * sVar49;
    sVar66 = sVar65 * sVar50;
    uVar54 = CONCAT26(sVar66,CONCAT24(sVar62,CONCAT22(sVar58,sVar33 * sVar7)));
    uVar20 = sVar29 * sVar4 + sVar22 * wVar8 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar23 = sVar13 * (short)uVar15 + sVar14 * wVar9 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar25 = sVar45 * (short)uVar16 + sVar51 * wVar10 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar27 = sVar12 * (short)uVar17 + sVar52 * wVar11 + sVar6;
    uVar31 = sVar42 * sVar7 + sVar33 * wVar8 + (short)DAT_008c59a0;
    uVar36 = sVar46 * sVar30 + sVar57 * wVar9 + sVar4;
    uVar38 = sVar47 * sVar49 + sVar61 * wVar10 + sVar5;
    uVar40 = sVar48 * sVar50 + sVar65 * wVar11 + sVar6;
    uVar21 = uVar20 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    uVar28 = uVar27 >> 8;
    uVar32 = uVar31 >> 8;
    uVar37 = uVar36 >> 8;
    uVar39 = uVar38 >> 8;
    uVar41 = uVar40 >> 8;
    *(ulonglong *)((int)param_1 + param_2 * 2) =
         CONCAT17((uVar41 != 0) * (uVar41 < 0x100) * (char)(uVar40 >> 8) - (0xff < uVar41),
                  CONCAT16((uVar39 != 0) * (uVar39 < 0x100) * (char)(uVar38 >> 8) - (0xff < uVar39),
                           CONCAT15((uVar37 != 0) * (uVar37 < 0x100) * (char)(uVar36 >> 8) -
                                    (0xff < uVar37),
                                    CONCAT14((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8)
                                             - (0xff < uVar32),
                                             CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                      (char)(uVar27 >> 8) - (0xff < uVar28),
                                                      CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                                               (char)(uVar25 >> 8) - (0xff < uVar26)
                                                               ,CONCAT11((uVar24 != 0) *
                                                                         (uVar24 < 0x100) *
                                                                         (char)(uVar23 >> 8) -
                                                                         (0xff < uVar24),
                                                                         (uVar21 != 0) *
                                                                         (uVar21 < 0x100) *
                                                                         (char)(uVar20 >> 8) -
                                                                         (0xff < uVar21))))))));
    uVar20 = sVar29 * wVar8 + sVar22 * sVar7 + (short)DAT_008c59a0;
    sVar4 = (short)((ulonglong)DAT_008c59a0 >> 0x10);
    uVar23 = sVar13 * wVar9 + sVar14 * sVar30 + sVar4;
    sVar5 = (short)((ulonglong)DAT_008c59a0 >> 0x20);
    uVar25 = sVar45 * wVar10 + sVar51 * sVar49 + sVar5;
    sVar6 = (short)((ulonglong)DAT_008c59a0 >> 0x30);
    uVar27 = sVar12 * wVar11 + sVar52 * sVar50 + sVar6;
    uVar31 = sVar42 * wVar8 + sVar33 * sVar7 + (short)DAT_008c59a0;
    uVar36 = sVar46 * wVar9 + sVar58 + sVar4;
    uVar38 = sVar47 * wVar10 + sVar62 + sVar5;
    uVar40 = sVar48 * wVar11 + sVar66 + sVar6;
    uVar21 = uVar20 >> 8;
    uVar24 = uVar23 >> 8;
    uVar26 = uVar25 >> 8;
    uVar28 = uVar27 >> 8;
    uVar32 = uVar31 >> 8;
    uVar37 = uVar36 >> 8;
    uVar39 = uVar38 >> 8;
    uVar41 = uVar40 >> 8;
    *puVar19 = CONCAT17((uVar41 != 0) * (uVar41 < 0x100) * (char)(uVar40 >> 8) - (0xff < uVar41),
                        CONCAT16((uVar39 != 0) * (uVar39 < 0x100) * (char)(uVar38 >> 8) -
                                 (0xff < uVar39),
                                 CONCAT15((uVar37 != 0) * (uVar37 < 0x100) * (char)(uVar36 >> 8) -
                                          (0xff < uVar37),
                                          CONCAT14((uVar32 != 0) * (uVar32 < 0x100) *
                                                   (char)(uVar31 >> 8) - (0xff < uVar32),
                                                   CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                            (char)(uVar27 >> 8) - (0xff < uVar28),
                                                            CONCAT12((uVar26 != 0) *
                                                                     (uVar26 < 0x100) *
                                                                     (char)(uVar25 >> 8) -
                                                                     (0xff < uVar26),
                                                                     CONCAT11((uVar24 != 0) *
                                                                              (uVar24 < 0x100) *
                                                                              (char)(uVar23 >> 8) -
                                                                              (0xff < uVar24),
                                                                              (uVar21 != 0) *
                                                                              (uVar21 < 0x100) *
                                                                              (char)(uVar20 >> 8) -
                                                                              (0xff < uVar21))))))))
    ;
    puVar19 = puVar19 + 1;
    param_1 = param_1 + 1;
    iVar18 = param_3 + -8;
    bVar3 = 7 < param_3;
    param_3 = iVar18;
  } while (iVar18 != 0 && bVar3);
  return;
}

