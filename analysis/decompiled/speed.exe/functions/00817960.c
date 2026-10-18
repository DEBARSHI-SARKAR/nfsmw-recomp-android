/* speed.exe 00817960 FUN_00817960; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817960(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  undefined8 *puVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  
  uVar1 = *param_7;
  uVar2 = param_7[2];
  uVar3 = param_7[4];
  uVar4 = param_7[6];
  puVar11 = (undefined8 *)(param_1 - param_3);
  do {
    uVar19 = *puVar11;
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    sVar12 = (short)((ulonglong)uVar1 >> 0x10);
    sVar13 = (short)((ulonglong)uVar1 >> 0x20);
    sVar14 = (short)((ulonglong)uVar1 >> 0x30);
    puVar11 = (undefined8 *)((int)puVar11 + param_3);
    uVar18 = *(undefined8 *)((int)puVar11 + param_3 * 2);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar18 >> 0x18) << 0x30) >> 0x28);
    sVar23 = (short)((ulonglong)uVar4 >> 0x10);
    sVar24 = (short)((ulonglong)uVar4 >> 0x20);
    sVar25 = (short)((ulonglong)uVar4 >> 0x30);
    uVar18 = paddsw(CONCAT26((uVar9 >> 8) * sVar14,
                             CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)) *
                                      sVar13,CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar12,((ushort)uVar19 & 0xff) * (short)uVar1)
                                     )),
                    CONCAT26((uVar10 >> 8) * sVar25,
                             CONCAT24((short)CONCAT21(uVar10,(char)((ulonglong)uVar18 >> 0x10)) *
                                      sVar24,CONCAT22((ushort)(byte)((ulonglong)uVar18 >> 8) *
                                                      sVar23,((ushort)uVar18 & 0xff) * (short)uVar4)
                                     )));
    uVar19 = *puVar11;
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    sVar15 = (short)((ulonglong)uVar2 >> 0x10);
    sVar16 = (short)((ulonglong)uVar2 >> 0x20);
    sVar17 = (short)((ulonglong)uVar2 >> 0x30);
    uVar18 = paddsw(uVar18,CONCAT26((uVar9 >> 8) * sVar17,
                                    CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)
                                                            ) * sVar16,
                                             CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar15,((ushort)uVar19 & 0xff) * (short)uVar2)
                                            )));
    uVar19 = *(undefined8 *)((int)puVar11 + param_3);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    sVar20 = (short)((ulonglong)uVar3 >> 0x10);
    sVar21 = (short)((ulonglong)uVar3 >> 0x20);
    sVar22 = (short)((ulonglong)uVar3 >> 0x30);
    uVar19 = paddsw(uVar18,CONCAT26((uVar9 >> 8) * sVar22,
                                    CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)
                                                            ) * sVar21,
                                             CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar20,((ushort)uVar19 & 0xff) * (short)uVar3)
                                            )));
    uVar19 = paddsw(uVar19,_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430);
    uVar19 = psraw(uVar19,7);
    sVar5 = (short)uVar19;
    sVar6 = (short)((ulonglong)uVar19 >> 0x10);
    sVar7 = (short)((ulonglong)uVar19 >> 0x20);
    sVar8 = (short)((ulonglong)uVar19 >> 0x30);
    *param_2 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                        (0xff < sVar8),
                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar19 >> 0x20) -
                                 (0xff < sVar7),
                                 CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                          (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar6),
                                          (0 < sVar5) * (sVar5 < 0x100) * (char)uVar19 -
                                          (0xff < sVar5))));
    uVar19 = *(undefined8 *)((int)puVar11 + (4 - param_3));
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    uVar18 = *(undefined8 *)((int)puVar11 + param_3 * 2 + 4);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar18 >> 0x18) << 0x30) >> 0x28);
    uVar18 = paddsw(CONCAT26((uVar9 >> 8) * sVar14,
                             CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)) *
                                      sVar13,CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar12,((ushort)uVar19 & 0xff) * (short)uVar1)
                                     )),
                    CONCAT26((uVar10 >> 8) * sVar25,
                             CONCAT24((short)CONCAT21(uVar10,(char)((ulonglong)uVar18 >> 0x10)) *
                                      sVar24,CONCAT22((ushort)(byte)((ulonglong)uVar18 >> 8) *
                                                      sVar23,((ushort)uVar18 & 0xff) * (short)uVar4)
                                     )));
    uVar19 = *(undefined8 *)((int)puVar11 + 4);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    uVar18 = paddsw(uVar18,CONCAT26((uVar9 >> 8) * sVar17,
                                    CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)
                                                            ) * sVar16,
                                             CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar15,((ushort)uVar19 & 0xff) * (short)uVar2)
                                            )));
    uVar19 = *(undefined8 *)((int)puVar11 + param_3 + 4);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    uVar19 = paddsw(uVar18,CONCAT26((uVar9 >> 8) * sVar22,
                                    CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar19 >> 0x10)
                                                            ) * sVar21,
                                             CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      sVar20,((ushort)uVar19 & 0xff) * (short)uVar3)
                                            )));
    uVar19 = paddsw(uVar19,_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430);
    uVar19 = psraw(uVar19,7);
    sVar5 = (short)uVar19;
    sVar6 = (short)((ulonglong)uVar19 >> 0x10);
    sVar7 = (short)((ulonglong)uVar19 >> 0x20);
    sVar8 = (short)((ulonglong)uVar19 >> 0x30);
    param_2[1] = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                          (0xff < sVar8),
                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar19 >> 0x20)
                                   - (0xff < sVar7),
                                   CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                            (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar6),
                                            (0 < sVar5) * (sVar5 < 0x100) * (char)uVar19 -
                                            (0xff < sVar5))));
    param_2 = (undefined4 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

