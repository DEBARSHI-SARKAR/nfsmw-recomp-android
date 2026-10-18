/* speed.exe 007f91bd FUN_007f91bd; analysis pseudocode, not buildable source.
 */

undefined4
FUN_007f91bd(byte *param_1,byte *param_2,byte *param_3,undefined8 *param_4,undefined8 *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  
  do {
    bVar4 = *param_2;
    param_2 = param_2 + 1;
    bVar5 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *(undefined8 *)(&DAT_00908e48 + (uint)bVar4 * 4);
    uVar3 = *(undefined8 *)(&DAT_00909648 + (uint)bVar5 * 4);
    bVar4 = *param_1;
    sVar11 = (short)uVar2 + (short)uVar3;
    sVar12 = (short)((ulonglong)uVar2 >> 0x10) + (short)((ulonglong)uVar3 >> 0x10);
    sVar13 = (short)((ulonglong)uVar2 >> 0x20) + (short)((ulonglong)uVar3 >> 0x20);
    sVar14 = (short)((ulonglong)uVar2 >> 0x30) + (short)((ulonglong)uVar3 >> 0x30);
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar2 = *(undefined8 *)(&DAT_00908648 + (uint)bVar4 * 4);
    uVar3 = *(undefined8 *)(&DAT_00908648 + (uint)*pbVar1 * 4);
    sVar7 = (short)uVar2 + sVar11;
    sVar8 = (short)((ulonglong)uVar2 >> 0x10) + sVar12;
    sVar9 = (short)((ulonglong)uVar2 >> 0x20) + sVar13;
    sVar10 = (short)((ulonglong)uVar2 >> 0x30) + sVar14;
    sVar11 = (short)uVar3 + sVar11;
    sVar12 = (short)((ulonglong)uVar3 >> 0x10) + sVar12;
    sVar13 = (short)((ulonglong)uVar3 >> 0x20) + sVar13;
    sVar14 = (short)((ulonglong)uVar3 >> 0x30) + sVar14;
    puVar6 = param_4 + 1;
    *param_4 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 -
                                          (0xff < sVar12),
                                          CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                                   (0xff < sVar11),
                                                   CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                            (char)sVar10 - (0xff < sVar10),
                                                            CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                     (char)sVar9 - (0xff < sVar9),
                                                                     CONCAT11((0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              (char)sVar8 -
                                                                              (0xff < sVar8),
                                                                              (0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)sVar7 -
                                                                              (0xff < sVar7))))))));
    param_4 = puVar6;
  } while (puVar6 != param_5);
  return 0;
}

