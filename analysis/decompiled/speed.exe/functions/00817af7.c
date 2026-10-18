/* speed.exe 00817af7 FUN_00817af7; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817af7(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  undefined8 *puVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  
  uVar1 = *param_7;
  uVar2 = param_7[2];
  uVar3 = param_7[4];
  uVar4 = param_7[6];
  puVar16 = (undefined8 *)(param_1 - param_3);
  do {
    uVar23 = *puVar16;
    uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
    sVar17 = (short)((ulonglong)uVar1 >> 0x10);
    sVar18 = (short)((ulonglong)uVar1 >> 0x20);
    sVar19 = (short)((ulonglong)uVar1 >> 0x30);
    uVar5 = *(undefined8 *)((int)puVar16 + param_3);
    uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
    sVar20 = (short)((ulonglong)uVar2 >> 0x10);
    sVar21 = (short)((ulonglong)uVar2 >> 0x20);
    sVar22 = (short)((ulonglong)uVar2 >> 0x30);
    uVar6 = *(undefined8 *)((int)puVar16 + param_3 * 2);
    uVar14 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    sVar24 = (short)((ulonglong)uVar3 >> 0x10);
    sVar25 = (short)((ulonglong)uVar3 >> 0x20);
    sVar26 = (short)((ulonglong)uVar3 >> 0x30);
    uVar7 = *(undefined8 *)((int)puVar16 + param_3 * 3);
    uVar15 = (ushort)(((uint7)(byte)((ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28);
    sVar27 = (short)((ulonglong)uVar4 >> 0x10);
    sVar28 = (short)((ulonglong)uVar4 >> 0x20);
    sVar29 = (short)((ulonglong)uVar4 >> 0x30);
    uVar23 = psraw(CONCAT26((uVar12 >> 8) * sVar19 + (uVar13 >> 8) * sVar22 + (uVar14 >> 8) * sVar26
                            + (uVar15 >> 8) * sVar29 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar12,(char)((ulonglong)uVar23 >> 0x10)) *
                                     sVar18 + (short)CONCAT21(uVar13,(char)((ulonglong)uVar5 >> 0x10
                                                                           )) * sVar21 +
                                     (short)CONCAT21(uVar14,(char)((ulonglong)uVar6 >> 0x10)) *
                                     sVar25 + (short)CONCAT21(uVar15,(char)((ulonglong)uVar7 >> 0x10
                                                                           )) * sVar28 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar23 >> 8) * sVar17 +
                                              (ushort)(byte)((ulonglong)uVar5 >> 8) * sVar20 +
                                              (ushort)(byte)((ulonglong)uVar6 >> 8) * sVar24 +
                                              (ushort)(byte)((ulonglong)uVar7 >> 8) * sVar27 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar23 & 0xff) * (short)uVar1 +
                                              ((ushort)uVar5 & 0xff) * (short)uVar2 +
                                              ((ushort)uVar6 & 0xff) * (short)uVar3 +
                                              ((ushort)uVar7 & 0xff) * (short)uVar4 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar8 = (short)uVar23;
    sVar9 = (short)((ulonglong)uVar23 >> 0x10);
    sVar10 = (short)((ulonglong)uVar23 >> 0x20);
    sVar11 = (short)((ulonglong)uVar23 >> 0x30);
    *param_2 = CONCAT13((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                        (0xff < sVar11),
                        CONCAT12((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                 - (0xff < sVar10),
                                 CONCAT11((0 < sVar9) * (sVar9 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar9),
                                          (0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 -
                                          (0xff < sVar8))));
    uVar23 = *(undefined8 *)((int)puVar16 + 4);
    uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
    uVar5 = *(undefined8 *)((int)puVar16 + param_3 + 4);
    uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
    uVar6 = *(undefined8 *)((int)puVar16 + param_3 * 2 + 4);
    uVar14 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    puVar16 = (undefined8 *)((int)puVar16 + param_3);
    uVar7 = *(undefined8 *)((int)puVar16 + param_3 * 2 + 4);
    uVar15 = (ushort)(((uint7)(byte)((ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar23 = psraw(CONCAT26((uVar12 >> 8) * sVar19 + (uVar13 >> 8) * sVar22 + (uVar14 >> 8) * sVar26
                            + (uVar15 >> 8) * sVar29 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar12,(char)((ulonglong)uVar23 >> 0x10)) *
                                     sVar18 + (short)CONCAT21(uVar13,(char)((ulonglong)uVar5 >> 0x10
                                                                           )) * sVar21 +
                                     (short)CONCAT21(uVar14,(char)((ulonglong)uVar6 >> 0x10)) *
                                     sVar25 + (short)CONCAT21(uVar15,(char)((ulonglong)uVar7 >> 0x10
                                                                           )) * sVar28 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar23 >> 8) * sVar17 +
                                              (ushort)(byte)((ulonglong)uVar5 >> 8) * sVar20 +
                                              (ushort)(byte)((ulonglong)uVar6 >> 8) * sVar24 +
                                              (ushort)(byte)((ulonglong)uVar7 >> 8) * sVar27 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar23 & 0xff) * (short)uVar1 +
                                              ((ushort)uVar5 & 0xff) * (short)uVar2 +
                                              ((ushort)uVar6 & 0xff) * (short)uVar3 +
                                              ((ushort)uVar7 & 0xff) * (short)uVar4 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar8 = (short)uVar23;
    sVar9 = (short)((ulonglong)uVar23 >> 0x10);
    sVar10 = (short)((ulonglong)uVar23 >> 0x20);
    sVar11 = (short)((ulonglong)uVar23 >> 0x30);
    param_2[1] = CONCAT13((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                          (0xff < sVar11),
                          CONCAT12((0 < sVar10) * (sVar10 < 0x100) *
                                   (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar10),
                                   CONCAT11((0 < sVar9) * (sVar9 < 0x100) *
                                            (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar9),
                                            (0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 -
                                            (0xff < sVar8))));
    param_2 = (undefined4 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

