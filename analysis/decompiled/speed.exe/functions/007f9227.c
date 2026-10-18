/* speed.exe 007f9227 FUN_007f9227; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007f9227(byte *param_1,byte *param_2,byte *param_3,uint *param_4,uint *param_5)

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
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  
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
    sVar17 = (short)uVar2 + (short)uVar3;
    sVar18 = (short)((ulonglong)uVar2 >> 0x10) + (short)((ulonglong)uVar3 >> 0x10);
    sVar19 = (short)((ulonglong)uVar2 >> 0x20) + (short)((ulonglong)uVar3 >> 0x20);
    sVar20 = (short)((ulonglong)uVar2 >> 0x30) + (short)((ulonglong)uVar3 >> 0x30);
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar2 = *(undefined8 *)(&DAT_00908648 + (uint)bVar4 * 4);
    uVar3 = *(undefined8 *)(&DAT_00908648 + (uint)*pbVar1 * 4);
    sVar11 = (short)uVar2 + sVar17;
    sVar14 = (short)((ulonglong)uVar2 >> 0x10) + sVar18;
    sVar15 = (short)((ulonglong)uVar2 >> 0x20) + sVar19;
    sVar16 = (short)((ulonglong)uVar2 >> 0x30) + sVar20;
    sVar17 = (short)uVar3 + sVar17;
    sVar18 = (short)((ulonglong)uVar3 >> 0x10) + sVar18;
    sVar19 = (short)((ulonglong)uVar3 >> 0x20) + sVar19;
    sVar20 = (short)((ulonglong)uVar3 >> 0x30) + sVar20;
    puVar10 = param_4 + 1;
    uVar12 = paddusb(CONCAT17((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                              CONCAT16((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                       (0xff < sVar19),
                                       CONCAT15((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                (0xff < sVar18),
                                                CONCAT14((0 < sVar17) * (sVar17 < 0x100) *
                                                         (char)sVar17 - (0xff < sVar17),
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
    uVar13 = pmaddwd(uVar12 & uVar6,uVar7);
    uVar13 = uVar13 | CONCAT44((uint)((uVar12 & uVar8) >> 0x2b),(uint)(uVar12 & uVar8) >> 0xb);
    *param_4 = (uint)(uVar13 >> 0x10) | (uint)uVar13;
    param_4 = puVar10;
  } while (puVar10 != param_5);
  return 0;
}

