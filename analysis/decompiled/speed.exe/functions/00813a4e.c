/* speed.exe 00813a4e FUN_00813a4e; analysis pseudocode, not buildable source.
 */

void FUN_00813a4e(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 *puVar12;
  byte bVar15;
  undefined1 uVar17;
  byte bVar19;
  undefined8 uVar13;
  byte bVar16;
  byte bVar18;
  undefined8 uVar14;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  undefined8 uVar21;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  
  uVar1 = DAT_008c59b0;
  do {
    puVar12 = param_3;
    uVar14 = *param_1;
    uVar21 = *(undefined8 *)((int)param_1 + 1);
    bVar16 = (byte)((ulonglong)uVar14 >> 0x18);
    uVar17 = (undefined1)((ulonglong)uVar14 >> 0x10);
    uVar11 = (ushort)(((uint7)bVar16 << 0x30) >> 0x28);
    bVar15 = (byte)((ulonglong)uVar14 >> 8);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar21 >> 0x18) << 0x30) >> 0x28);
    sVar24 = (short)uVar1;
    sVar25 = (short)((ulonglong)uVar1 >> 0x10);
    sVar26 = (short)((ulonglong)uVar1 >> 0x20);
    sVar27 = (short)((ulonglong)uVar1 >> 0x30);
    bVar18 = (byte)((ulonglong)uVar14 >> 0x20);
    bVar19 = (byte)((ulonglong)uVar14 >> 0x28);
    bVar20 = (byte)((ulonglong)uVar14 >> 0x30);
    bVar22 = (byte)((ulonglong)uVar14 >> 0x38);
    uVar13 = psraw(CONCAT26((uVar11 >> 8) + (uVar10 >> 8) + sVar27,
                            CONCAT24((short)CONCAT21(uVar11,uVar17) +
                                     (short)CONCAT21(uVar10,(char)((ulonglong)uVar21 >> 0x10)) +
                                     sVar26,CONCAT22((ushort)bVar15 +
                                                     (ushort)(byte)((ulonglong)uVar21 >> 8) + sVar25
                                                     ,(ushort)(byte)uVar14 + ((ushort)uVar21 & 0xff)
                                                      + sVar24))),1);
    uVar21 = psraw(CONCAT26((ushort)bVar22 + (ushort)(byte)((ulonglong)uVar21 >> 0x38) + sVar27,
                            CONCAT24((ushort)bVar20 + (ushort)(byte)((ulonglong)uVar21 >> 0x30) +
                                     sVar26,CONCAT22((ushort)bVar19 +
                                                     (ushort)(byte)((ulonglong)uVar21 >> 0x28) +
                                                     sVar25,(ushort)bVar18 +
                                                            (ushort)(byte)((ulonglong)uVar21 >> 0x20
                                                                          ) + sVar24))),1);
    sVar2 = (short)uVar13;
    sVar3 = (short)((ulonglong)uVar13 >> 0x10);
    sVar4 = (short)((ulonglong)uVar13 >> 0x20);
    sVar5 = (short)((ulonglong)uVar13 >> 0x30);
    sVar6 = (short)uVar21;
    sVar7 = (short)((ulonglong)uVar21 >> 0x10);
    sVar8 = (short)((ulonglong)uVar21 >> 0x20);
    sVar9 = (short)((ulonglong)uVar21 >> 0x30);
    *puVar12 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar13 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     bVar16),
                                                            (0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)((ulonglong)uVar13 >> 0x20) -
                                                            (0xff < sVar4)),uVar17),
                                          (0 < sVar3) * (sVar3 < 0x100) *
                                          (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3)),bVar15
                                ),
                        CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 - (0xff < sVar2),
                                 (byte)uVar14));
    puVar12[1] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                          (0xff < sVar9),
                          CONCAT16(bVar22,CONCAT15((0 < sVar8) * (sVar8 < 0x100) *
                                                   (char)((ulonglong)uVar21 >> 0x20) -
                                                   (0xff < sVar8),
                                                   CONCAT14(bVar20,CONCAT13((0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            (char)((ulonglong)uVar21
                                                                                  >> 0x10) -
                                                                            (0xff < sVar7),
                                                                            CONCAT12(bVar19,CONCAT11
                                                  ((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21 -
                                                   (0xff < sVar6),bVar18)))))));
    param_1 = param_1 + 1;
    param_2 = param_2 + -8;
    param_3 = puVar12 + 2;
  } while (8 < param_2);
  uVar1 = *param_1;
  bVar15 = (byte)((ulonglong)uVar1 >> 0x38);
  bVar19 = (byte)((ulonglong)uVar1 >> 0x18);
  uVar10 = (ushort)(((uint7)bVar19 << 0x30) >> 0x28);
  bVar18 = (byte)((ulonglong)uVar1 >> 0x10);
  bVar16 = (byte)((ulonglong)uVar1 >> 8);
  bVar20 = (byte)((ulonglong)uVar1 >> 0x20);
  uVar11 = (ushort)(((uint7)bVar20 << 0x30) >> 0x28);
  bVar22 = (byte)((ulonglong)uVar1 >> 0x28);
  bVar23 = (byte)((ulonglong)uVar1 >> 0x30);
  uVar14 = psraw(CONCAT26((uVar10 >> 8) + (uVar11 >> 8) + sVar27,
                          CONCAT24((short)CONCAT21(uVar10,bVar18) + (short)CONCAT21(uVar11,bVar19) +
                                   sVar26,CONCAT22((ushort)bVar16 + (ushort)bVar18 + sVar25,
                                                   (ushort)(byte)uVar1 +
                                                   ((ushort)((ulonglong)uVar1 >> 8) & 0xff) + sVar24
                                                  ))),1);
  uVar21 = psraw(CONCAT26((ushort)bVar15 + (ushort)bVar15 + sVar27,
                          CONCAT24((ushort)bVar23 + (ushort)bVar15 + sVar26,
                                   CONCAT22((ushort)bVar22 + (ushort)bVar23 + sVar25,
                                            (ushort)bVar20 + (ushort)bVar22 + sVar24))),1);
  sVar2 = (short)uVar14;
  sVar3 = (short)((ulonglong)uVar14 >> 0x10);
  sVar4 = (short)((ulonglong)uVar14 >> 0x20);
  sVar5 = (short)((ulonglong)uVar14 >> 0x30);
  sVar6 = (short)uVar21;
  sVar7 = (short)((ulonglong)uVar21 >> 0x10);
  sVar8 = (short)((ulonglong)uVar21 >> 0x20);
  sVar9 = (short)((ulonglong)uVar21 >> 0x30);
  puVar12[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar14 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     bVar19),
                                                            (0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)((ulonglong)uVar14 >> 0x20) -
                                                            (0xff < sVar4)),bVar18),
                                          (0 < sVar3) * (sVar3 < 0x100) *
                                          (char)((ulonglong)uVar14 >> 0x10) - (0xff < sVar3)),bVar16
                                ),
                        CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)uVar14 - (0xff < sVar2),
                                 (byte)uVar1));
  puVar12[3] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16(bVar15,CONCAT15((0 < sVar8) * (sVar8 < 0x100) *
                                                 (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                                 CONCAT14(bVar23,CONCAT13((0 < sVar7) *
                                                                          (sVar7 < 0x100) *
                                                                          (char)((ulonglong)uVar21
                                                                                >> 0x10) -
                                                                          (0xff < sVar7),
                                                                          CONCAT12(bVar22,CONCAT11((
                                                  0 < sVar6) * (sVar6 < 0x100) * (char)uVar21 -
                                                  (0xff < sVar6),bVar20)))))));
  return;
}

