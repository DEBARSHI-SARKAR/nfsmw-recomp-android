/* speed.exe 00817f21 FUN_00817f21; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817f21(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ushort uVar36;
  
  puVar1 = param_2 + 8;
  uVar34 = *param_4;
  uVar33 = param_4[2];
  uVar35 = *param_1;
  uVar16 = (ushort)(((uint7)(byte)((ulonglong)uVar35 >> 0x18) << 0x30) >> 0x28);
  sVar25 = (short)uVar34;
  sVar26 = (short)((ulonglong)uVar34 >> 0x10);
  sVar27 = (short)((ulonglong)uVar34 >> 0x20);
  sVar28 = (short)((ulonglong)uVar34 >> 0x30);
  uVar34 = *(undefined8 *)((int)param_1 + 1);
  uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar34 >> 0x18) << 0x30) >> 0x28);
  sVar29 = (short)uVar33;
  sVar30 = (short)((ulonglong)uVar33 >> 0x10);
  sVar31 = (short)((ulonglong)uVar33 >> 0x20);
  sVar32 = (short)((ulonglong)uVar33 >> 0x30);
  sVar4 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x10);
  sVar5 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x20);
  sVar6 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x30);
  uVar33 = psraw(CONCAT26((uVar16 >> 8) * sVar28 + (uVar17 >> 8) * sVar32 + sVar6,
                          CONCAT24((short)CONCAT21(uVar16,(char)((ulonglong)uVar35 >> 0x10)) *
                                   sVar27 + (short)CONCAT21(uVar17,(char)((ulonglong)uVar34 >> 0x10)
                                                           ) * sVar31 + sVar5,
                                   CONCAT22((ushort)(byte)((ulonglong)uVar35 >> 8) * sVar26 +
                                            (ushort)(byte)((ulonglong)uVar34 >> 8) * sVar30 + sVar4,
                                            ((ushort)uVar35 & 0xff) * sVar25 +
                                            ((ushort)uVar34 & 0xff) * sVar29 +
                                            (short)
                                            _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))),
                 7);
  uVar34 = psraw(CONCAT26((ushort)(byte)((ulonglong)uVar35 >> 0x38) * sVar28 +
                          (ushort)(byte)((ulonglong)uVar34 >> 0x38) * sVar32 + sVar6,
                          CONCAT24((ushort)(byte)((ulonglong)uVar35 >> 0x30) * sVar27 +
                                   (ushort)(byte)((ulonglong)uVar34 >> 0x30) * sVar31 + sVar5,
                                   CONCAT22((ushort)(byte)((ulonglong)uVar35 >> 0x28) * sVar26 +
                                            (ushort)(byte)((ulonglong)uVar34 >> 0x28) * sVar30 +
                                            sVar4,(ushort)(byte)((ulonglong)uVar35 >> 0x20) * sVar25
                                                  + (ushort)(byte)((ulonglong)uVar34 >> 0x20) *
                                                    sVar29 +
                                                  (short)
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                           ))),7);
  sVar4 = (short)uVar33;
  sVar5 = (short)((ulonglong)uVar33 >> 0x10);
  sVar6 = (short)((ulonglong)uVar33 >> 0x20);
  sVar7 = (short)((ulonglong)uVar33 >> 0x30);
  sVar8 = (short)uVar34;
  sVar9 = (short)((ulonglong)uVar34 >> 0x10);
  sVar10 = (short)((ulonglong)uVar34 >> 0x20);
  sVar11 = (short)((ulonglong)uVar34 >> 0x30);
  uVar34 = CONCAT17((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar34 >> 0x30) -
                    (0xff < sVar11),
                    CONCAT16((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar34 >> 0x20) -
                             (0xff < sVar10),
                             CONCAT15((0 < sVar9) * (sVar9 < 0x100) *
                                      (char)((ulonglong)uVar34 >> 0x10) - (0xff < sVar9),
                                      CONCAT14((0 < sVar8) * (sVar8 < 0x100) * (char)uVar34 -
                                               (0xff < sVar8),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                        (char)((ulonglong)uVar33 >> 0x30) -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                 (char)((ulonglong)uVar33 >> 0x20) -
                                                                 (0xff < sVar6),
                                                                 CONCAT11((0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          (char)((ulonglong)uVar33
                                                                                >> 0x10) -
                                                                          (0xff < sVar5),
                                                                          (0 < sVar4) *
                                                                          (sVar4 < 0x100) *
                                                                          (char)uVar33 -
                                                                          (0xff < sVar4))))))));
  do {
    param_1 = (undefined8 *)((int)param_1 + param_3);
    uVar33 = *param_1;
    uVar16 = (ushort)(((uint7)(byte)((ulonglong)uVar33 >> 0x18) << 0x30) >> 0x28);
    uVar35 = *(undefined8 *)((int)param_1 + 1);
    uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar35 >> 0x18) << 0x30) >> 0x28);
    uVar18 = (ushort)(((uint7)(byte)((ulonglong)uVar34 >> 0x18) << 0x30) >> 0x28);
    uVar20 = (ulonglong)uVar34 >> 0x10;
    uVar19 = (ulonglong)uVar34 >> 8;
    uVar36 = (ushort)uVar34;
    uVar21 = (ulonglong)uVar34 >> 0x20;
    uVar22 = (ulonglong)uVar34 >> 0x28;
    uVar23 = (ulonglong)uVar34 >> 0x30;
    uVar24 = (ulonglong)uVar34 >> 0x38;
    uVar2 = *param_5;
    uVar3 = *param_5;
    sVar12 = (short)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430;
    sVar13 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x10);
    sVar14 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x20);
    sVar15 = (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >> 0x30);
    uVar34 = psraw(CONCAT26((uVar16 >> 8) * sVar28 + (uVar17 >> 8) * sVar32 + sVar15,
                            CONCAT24((short)CONCAT21(uVar16,(char)((ulonglong)uVar33 >> 0x10)) *
                                     sVar27 + (short)CONCAT21(uVar17,(char)((ulonglong)uVar35 >>
                                                                           0x10)) * sVar31 + sVar14,
                                     CONCAT22((ushort)(byte)((ulonglong)uVar33 >> 8) * sVar26 +
                                              (ushort)(byte)((ulonglong)uVar35 >> 8) * sVar30 +
                                              sVar13,((ushort)uVar33 & 0xff) * sVar25 +
                                                     ((ushort)uVar35 & 0xff) * sVar29 + sVar12))),7)
    ;
    uVar33 = psraw(CONCAT26((ushort)(byte)((ulonglong)uVar33 >> 0x38) * sVar28 +
                            (ushort)(byte)((ulonglong)uVar35 >> 0x38) * sVar32 + sVar15,
                            CONCAT24((ushort)(byte)((ulonglong)uVar33 >> 0x30) * sVar27 +
                                     (ushort)(byte)((ulonglong)uVar35 >> 0x30) * sVar31 + sVar14,
                                     CONCAT22((ushort)(byte)((ulonglong)uVar33 >> 0x28) * sVar26 +
                                              (ushort)(byte)((ulonglong)uVar35 >> 0x28) * sVar30 +
                                              sVar13,(ushort)(byte)((ulonglong)uVar33 >> 0x20) *
                                                     sVar25 + (ushort)(byte)((ulonglong)uVar35 >>
                                                                            0x20) * sVar29 + sVar12)
                                    )),7);
    sVar4 = (short)uVar34;
    sVar5 = (short)((ulonglong)uVar34 >> 0x10);
    sVar6 = (short)((ulonglong)uVar34 >> 0x20);
    sVar7 = (short)((ulonglong)uVar34 >> 0x30);
    sVar8 = (short)uVar33;
    sVar9 = (short)((ulonglong)uVar33 >> 0x10);
    sVar10 = (short)((ulonglong)uVar33 >> 0x20);
    sVar11 = (short)((ulonglong)uVar33 >> 0x30);
    uVar34 = CONCAT17((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar33 >> 0x30) -
                      (0xff < sVar11),
                      CONCAT16((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar33 >> 0x20) -
                               (0xff < sVar10),
                               CONCAT15((0 < sVar9) * (sVar9 < 0x100) *
                                        (char)((ulonglong)uVar33 >> 0x10) - (0xff < sVar9),
                                        CONCAT14((0 < sVar8) * (sVar8 < 0x100) * (char)uVar33 -
                                                 (0xff < sVar8),
                                                 CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                          (char)((ulonglong)uVar34 >> 0x30) -
                                                          (0xff < sVar7),
                                                          CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                   (char)((ulonglong)uVar34 >> 0x20)
                                                                   - (0xff < sVar6),
                                                                   CONCAT11((0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            (char)((ulonglong)uVar34
                                                                                  >> 0x10) -
                                                                            (0xff < sVar5),
                                                                            (0 < sVar4) *
                                                                            (sVar4 < 0x100) *
                                                                            (char)uVar34 -
                                                                            (0xff < sVar4))))))));
    uVar33 = param_5[2];
    uVar35 = param_5[2];
    uVar33 = psraw(CONCAT26(sVar7 * (short)((ulonglong)uVar33 >> 0x30) +
                            (uVar18 >> 8) * (short)((ulonglong)uVar2 >> 0x30) + sVar15,
                            CONCAT24(sVar6 * (short)((ulonglong)uVar33 >> 0x20) +
                                     (short)CONCAT21(uVar18,(char)uVar20) *
                                     (short)((ulonglong)uVar2 >> 0x20) + sVar14,
                                     CONCAT22(sVar5 * (short)((ulonglong)uVar33 >> 0x10) +
                                              (ushort)(byte)uVar19 *
                                              (short)((ulonglong)uVar2 >> 0x10) + sVar13,
                                              sVar4 * (short)uVar33 + (uVar36 & 0xff) * (short)uVar2
                                              + sVar12))),7);
    uVar35 = psraw(CONCAT26(sVar11 * (short)((ulonglong)uVar35 >> 0x30) +
                            (ushort)(byte)uVar24 * (short)((ulonglong)uVar3 >> 0x30) + sVar15,
                            CONCAT24(sVar10 * (short)((ulonglong)uVar35 >> 0x20) +
                                     (ushort)(byte)uVar23 * (short)((ulonglong)uVar3 >> 0x20) +
                                     sVar14,CONCAT22(sVar9 * (short)((ulonglong)uVar35 >> 0x10) +
                                                     (ushort)(byte)uVar22 *
                                                     (short)((ulonglong)uVar3 >> 0x10) + sVar13,
                                                     sVar8 * (short)uVar35 +
                                                     (ushort)(byte)uVar21 * (short)uVar3 + sVar12)))
                   ,7);
    sVar4 = (short)uVar33;
    sVar5 = (short)((ulonglong)uVar33 >> 0x10);
    sVar6 = (short)((ulonglong)uVar33 >> 0x20);
    sVar7 = (short)((ulonglong)uVar33 >> 0x30);
    sVar8 = (short)uVar35;
    sVar9 = (short)((ulonglong)uVar35 >> 0x10);
    sVar10 = (short)((ulonglong)uVar35 >> 0x20);
    sVar11 = (short)((ulonglong)uVar35 >> 0x30);
    *param_2 = CONCAT17((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar35 >> 0x30) -
                        (0xff < sVar11),
                        CONCAT16((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar35 >> 0x20)
                                 - (0xff < sVar10),
                                 CONCAT15((0 < sVar9) * (sVar9 < 0x100) *
                                          (char)((ulonglong)uVar35 >> 0x10) - (0xff < sVar9),
                                          CONCAT14((0 < sVar8) * (sVar8 < 0x100) * (char)uVar35 -
                                                   (0xff < sVar8),
                                                   CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                            (char)((ulonglong)uVar33 >> 0x30) -
                                                            (0xff < sVar7),
                                                            CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                     (char)((ulonglong)uVar33 >>
                                                                           0x20) - (0xff < sVar6),
                                                                     CONCAT11((0 < sVar5) *
                                                                              (sVar5 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar33 >> 0x10)
                                                                              - (0xff < sVar5),
                                                                              (0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)uVar33 -
                                                                              (0xff < sVar4))))))));
    param_2 = param_2 + 1;
  } while (param_2 != puVar1);
  return;
}

