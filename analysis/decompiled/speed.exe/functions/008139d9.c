/* speed.exe 008139d9 FUN_008139d9; analysis pseudocode, not buildable source.
 */

void FUN_008139d9(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  
  do {
    uVar12 = *param_1;
    uVar1 = *(undefined8 *)((int)param_1 + param_2 * 2);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar12 >> 0x18) << 0x30) >> 0x28);
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    sVar13 = (short)((ulonglong)DAT_008c59b0 >> 0x10);
    sVar14 = (short)((ulonglong)DAT_008c59b0 >> 0x20);
    sVar15 = (short)((ulonglong)DAT_008c59b0 >> 0x30);
    uVar11 = psraw(CONCAT26((uVar9 >> 8) + (uVar8 >> 8) + sVar15,
                            CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar12 >> 0x10)) +
                                     (short)CONCAT21(uVar8,(char)((ulonglong)uVar1 >> 0x10)) +
                                     sVar14,CONCAT22((ushort)(byte)((ulonglong)uVar12 >> 8) +
                                                     (ushort)(byte)((ulonglong)uVar1 >> 8) + sVar13,
                                                     (ushort)(byte)uVar12 + ((ushort)uVar1 & 0xff) +
                                                     (short)DAT_008c59b0))),1);
    uVar12 = psraw(CONCAT26((ushort)(byte)((ulonglong)uVar12 >> 0x38) +
                            (ushort)(byte)((ulonglong)uVar1 >> 0x38) + sVar15,
                            CONCAT24((ushort)(byte)((ulonglong)uVar12 >> 0x30) +
                                     (ushort)(byte)((ulonglong)uVar1 >> 0x30) + sVar14,
                                     CONCAT22((ushort)(byte)((ulonglong)uVar12 >> 0x28) +
                                              (ushort)(byte)((ulonglong)uVar1 >> 0x28) + sVar13,
                                              (ushort)(byte)((ulonglong)uVar12 >> 0x20) +
                                              (ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                                              (short)DAT_008c59b0))),1);
    sVar13 = (short)uVar11;
    sVar14 = (short)((ulonglong)uVar11 >> 0x10);
    sVar15 = (short)((ulonglong)uVar11 >> 0x20);
    sVar3 = (short)((ulonglong)uVar11 >> 0x30);
    sVar4 = (short)uVar12;
    sVar5 = (short)((ulonglong)uVar12 >> 0x10);
    sVar6 = (short)((ulonglong)uVar12 >> 0x20);
    sVar7 = (short)((ulonglong)uVar12 >> 0x30);
    *(ulonglong *)((int)param_1 + param_2) =
         CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar7)
                  ,CONCAT16((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar12 >> 0x20) -
                            (0xff < sVar6),
                            CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                     (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar5),
                                     CONCAT14((0 < sVar4) * (sVar4 < 0x100) * (char)uVar12 -
                                              (0xff < sVar4),
                                              CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar3),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar13) *
                                                                         (sVar13 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar13))))))));
    param_1 = param_1 + 1;
    iVar10 = param_3 + -8;
    bVar2 = 7 < param_3;
    param_3 = iVar10;
  } while (iVar10 != 0 && bVar2);
  return;
}

