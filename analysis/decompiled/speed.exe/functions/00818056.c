/* speed.exe 00818056 FUN_00818056; analysis pseudocode, not buildable source.
 */

void FUN_00818056(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = param_4 + 0x10;
  do {
    uVar11 = *param_3;
    uVar10 = paddsw((ulonglong)
                    CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar11 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar11 >> 0x10)) << 0x20) >>
                                                  0x18),
                                             CONCAT12((char)((ulonglong)uVar11 >> 8),(short)uVar11))
                                   >> 0x10),(short)uVar11) & 0xffff00ff00ff00ff,*param_4);
    uVar11 = paddsw((ulonglong)
                    CONCAT16((char)((ulonglong)uVar11 >> 0x38),
                             (uint6)CONCAT14((char)((ulonglong)uVar11 >> 0x30),
                                             (uint)CONCAT12((char)((ulonglong)uVar11 >> 0x28),
                                                            (ushort)(byte)((ulonglong)uVar11 >> 0x20
                                                                          )))),param_4[1]);
    param_3 = (undefined8 *)((int)param_3 + param_5);
    sVar2 = (short)uVar10;
    sVar3 = (short)((ulonglong)uVar10 >> 0x10);
    sVar4 = (short)((ulonglong)uVar10 >> 0x20);
    sVar5 = (short)((ulonglong)uVar10 >> 0x30);
    sVar6 = (short)uVar11;
    sVar7 = (short)((ulonglong)uVar11 >> 0x10);
    sVar8 = (short)((ulonglong)uVar11 >> 0x20);
    sVar9 = (short)((ulonglong)uVar11 >> 0x30);
    param_4 = param_4 + 2;
    *param_2 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar11 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar11 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar11 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar11 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar10 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar10 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar10 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar10 -
                                                                              (0xff < sVar2))))))));
    param_2 = (undefined8 *)((int)param_2 + param_5);
  } while (param_4 < puVar1);
  return;
}

