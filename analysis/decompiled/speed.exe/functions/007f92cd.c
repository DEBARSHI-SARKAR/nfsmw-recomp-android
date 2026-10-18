/* speed.exe 007f92cd FUN_007f92cd; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007f92cd(byte *param_1,byte *param_2,byte *param_3,uint *param_4,uint *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  short sVar11;
  short sVar14;
  short sVar15;
  short sVar16;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar17;
  ulonglong uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  
  uVar9 = DAT_009bee08;
  uVar8 = DAT_009bee00;
  uVar7 = DAT_009bdde8;
  uVar6 = DAT_009bdde0;
  do {
    bVar4 = *param_2;
    param_2 = param_2 + 1;
    bVar5 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *(undefined8 *)(&DAT_00908e48 + (uint)bVar4 * 4);
    uVar3 = *(undefined8 *)(&DAT_00909648 + (uint)bVar5 * 4);
    bVar4 = *param_1;
    sVar19 = (short)uVar2 + (short)uVar3;
    sVar20 = (short)((ulonglong)uVar2 >> 0x10) + (short)((ulonglong)uVar3 >> 0x10);
    sVar21 = (short)((ulonglong)uVar2 >> 0x20) + (short)((ulonglong)uVar3 >> 0x20);
    sVar22 = (short)((ulonglong)uVar2 >> 0x30) + (short)((ulonglong)uVar3 >> 0x30);
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar2 = *(undefined8 *)(&DAT_00908648 + (uint)bVar4 * 4);
    uVar3 = *(undefined8 *)(&DAT_00908648 + (uint)*pbVar1 * 4);
    sVar11 = (short)uVar2 + sVar19;
    sVar14 = (short)((ulonglong)uVar2 >> 0x10) + sVar20;
    sVar15 = (short)((ulonglong)uVar2 >> 0x20) + sVar21;
    sVar16 = (short)((ulonglong)uVar2 >> 0x30) + sVar22;
    sVar19 = (short)uVar3 + sVar19;
    sVar20 = (short)((ulonglong)uVar3 >> 0x10) + sVar20;
    sVar21 = (short)((ulonglong)uVar3 >> 0x20) + sVar21;
    sVar22 = (short)((ulonglong)uVar3 >> 0x30) + sVar22;
    puVar10 = param_4 + 2;
    uVar12 = paddusb(CONCAT17((0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16),
                              CONCAT16((0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 -
                                       (0xff < sVar15),
                                       CONCAT15((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 -
                                                (0xff < sVar14),
                                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                         (char)sVar11 - (0xff < sVar11),
                                                         CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                  (char)sVar16 - (0xff < sVar16),
                                                                  CONCAT12((0 < sVar15) *
                                                                           (sVar15 < 0x100) *
                                                                           (char)sVar15 -
                                                                           (0xff < sVar15),
                                                                           CONCAT11((0 < sVar14) *
                                                                                    (sVar14 < 0x100)
                                                                                    * (char)sVar14 -
                                                                                    (0xff < sVar14),
                                                                                    (0 < sVar11) *
                                                                                    (sVar11 < 0x100)
                                                                                    * (char)sVar11 -
                                                                                    (0xff < sVar11))
                                                                          )))))),uVar9);
    uVar17 = paddusb(CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                              CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 -
                                       (0xff < sVar21),
                                       CONCAT15((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 -
                                                (0xff < sVar20),
                                                CONCAT14((0 < sVar19) * (sVar19 < 0x100) *
                                                         (char)sVar19 - (0xff < sVar19),
                                                         CONCAT13((0 < sVar22) * (sVar22 < 0x100) *
                                                                  (char)sVar22 - (0xff < sVar22),
                                                                  CONCAT12((0 < sVar21) *
                                                                           (sVar21 < 0x100) *
                                                                           (char)sVar21 -
                                                                           (0xff < sVar21),
                                                                           CONCAT11((0 < sVar20) *
                                                                                    (sVar20 < 0x100)
                                                                                    * (char)sVar20 -
                                                                                    (0xff < sVar20),
                                                                                    (0 < sVar19) *
                                                                                    (sVar19 < 0x100)
                                                                                    * (char)sVar19 -
                                                                                    (0xff < sVar19))
                                                                          )))))),uVar9);
    uVar13 = pmaddwd(uVar12 & uVar6,uVar7);
    uVar18 = pmaddwd(uVar17 & uVar6,uVar7);
    uVar12 = uVar12 & uVar8;
    uVar17 = uVar17 & uVar8;
    uVar13 = uVar13 | CONCAT44((uint)(uVar12 >> 0x2b),(uint)uVar12 >> 0xb);
    uVar18 = uVar18 | CONCAT44((uint)(uVar17 >> 0x2b),(uint)uVar17 >> 0xb);
    *param_4 = (uint)(uVar13 >> 0x10) | (uint)uVar13;
    param_4[1] = (uint)(uVar18 >> 0x10) | (uint)uVar18;
    param_4 = puVar10;
  } while (puVar10 != param_5);
  return 0;
}

