/* speed.exe 008180a1 FUN_008180a1; analysis pseudocode, not buildable source.
 */

void FUN_008180a1(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  
  puVar1 = param_5 + 0x10;
  do {
    uVar2 = *param_3;
    uVar3 = *param_4;
    uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar4 = *param_5;
    uVar5 = param_5[1];
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
    sVar8 = ((ushort)(((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) >> 1) + (short)uVar4;
    sVar9 = ((ushort)((ushort)(byte)((ulonglong)uVar2 >> 8) + (ushort)(byte)((ulonglong)uVar3 >> 8))
            >> 1) + (short)((ulonglong)uVar4 >> 0x10);
    sVar10 = ((ushort)((short)CONCAT21(uVar6,(char)((ulonglong)uVar2 >> 0x10)) +
                      (short)CONCAT21(uVar7,(char)((ulonglong)uVar3 >> 0x10))) >> 1) +
             (short)((ulonglong)uVar4 >> 0x20);
    sVar11 = ((ushort)((uVar6 >> 8) + (uVar7 >> 8)) >> 1) + (short)((ulonglong)uVar4 >> 0x30);
    sVar12 = ((ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x20)) >> 1) + (short)uVar5;
    sVar13 = ((ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x28)) >> 1) +
             (short)((ulonglong)uVar5 >> 0x10);
    sVar14 = ((ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x30)) >> 1) +
             (short)((ulonglong)uVar5 >> 0x20);
    sVar15 = ((ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x38)) >> 1) +
             (short)((ulonglong)uVar5 >> 0x30);
    param_5 = param_5 + 2;
    param_3 = (undefined8 *)((int)param_3 + param_6);
    param_4 = (undefined8 *)((int)param_4 + param_6);
    *param_2 = CONCAT17((0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 - (0xff < sVar15),
                        CONCAT16((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                                 CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 -
                                          (0xff < sVar13),
                                          CONCAT14((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 -
                                                   (0xff < sVar12),
                                                   CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                            (char)sVar11 - (0xff < sVar11),
                                                            CONCAT12((0 < sVar10) * (sVar10 < 0x100)
                                                                     * (char)sVar10 -
                                                                     (0xff < sVar10),
                                                                     CONCAT11((0 < sVar9) *
                                                                              (sVar9 < 0x100) *
                                                                              (char)sVar9 -
                                                                              (0xff < sVar9),
                                                                              (0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              (char)sVar8 -
                                                                              (0xff < sVar8))))))));
    param_2 = (undefined8 *)((int)param_2 + param_6);
  } while (param_5 < puVar1);
  return;
}

