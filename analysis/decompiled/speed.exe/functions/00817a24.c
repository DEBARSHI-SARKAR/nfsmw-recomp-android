/* speed.exe 00817a24 FUN_00817a24; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817a24(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
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
  ushort uVar11;
  ushort uVar12;
  undefined8 *puVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  byte bVar21;
  byte bVar22;
  undefined8 uVar20;
  byte bVar23;
  byte bVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  
  uVar1 = *param_7;
  uVar2 = param_7[2];
  uVar3 = param_7[4];
  uVar4 = param_7[6];
  puVar13 = (undefined8 *)(param_1 + -1);
  do {
    uVar20 = *puVar13;
    bVar22 = (byte)((ulonglong)uVar20 >> 0x18);
    uVar9 = (ushort)(((uint7)bVar22 << 0x30) >> 0x28);
    bVar21 = (byte)((ulonglong)uVar20 >> 0x10);
    sVar14 = (short)((ulonglong)uVar1 >> 0x10);
    sVar15 = (short)((ulonglong)uVar1 >> 0x20);
    sVar16 = (short)((ulonglong)uVar1 >> 0x30);
    bVar23 = (byte)((ulonglong)uVar20 >> 0x20);
    uVar10 = (ushort)(((uint7)bVar23 << 0x30) >> 0x28);
    sVar17 = (short)((ulonglong)uVar2 >> 0x10);
    sVar18 = (short)((ulonglong)uVar2 >> 0x20);
    sVar19 = (short)((ulonglong)uVar2 >> 0x30);
    bVar24 = (byte)((ulonglong)uVar20 >> 0x28);
    uVar11 = (ushort)(((uint7)bVar24 << 0x30) >> 0x28);
    sVar25 = (short)((ulonglong)uVar3 >> 0x10);
    sVar26 = (short)((ulonglong)uVar3 >> 0x20);
    sVar27 = (short)((ulonglong)uVar3 >> 0x30);
    uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar20 >> 0x30) << 0x30) >> 0x28);
    sVar28 = (short)((ulonglong)uVar4 >> 0x10);
    sVar29 = (short)((ulonglong)uVar4 >> 0x20);
    sVar30 = (short)((ulonglong)uVar4 >> 0x30);
    uVar20 = psraw(CONCAT26((uVar9 >> 8) * sVar16 + (uVar10 >> 8) * sVar19 + (uVar11 >> 8) * sVar27
                            + (uVar12 >> 8) * sVar30 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar9,bVar21) * sVar15 +
                                     (short)CONCAT21(uVar10,bVar22) * sVar18 +
                                     (short)CONCAT21(uVar11,bVar23) * sVar26 +
                                     (short)CONCAT21(uVar12,bVar24) * sVar29 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar20 >> 8) * sVar14 +
                                              (ushort)bVar21 * sVar17 + (ushort)bVar22 * sVar25 +
                                              (ushort)bVar23 * sVar28 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar20 & 0xff) * (short)uVar1 +
                                              ((ushort)((ulonglong)uVar20 >> 8) & 0xff) *
                                              (short)uVar2 +
                                              ((ushort)((ulonglong)uVar20 >> 0x10) & 0xff) *
                                              (short)uVar3 +
                                              ((ushort)((ulonglong)uVar20 >> 0x18) & 0xff) *
                                              (short)uVar4 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar5 = (short)uVar20;
    sVar6 = (short)((ulonglong)uVar20 >> 0x10);
    sVar7 = (short)((ulonglong)uVar20 >> 0x20);
    sVar8 = (short)((ulonglong)uVar20 >> 0x30);
    *param_2 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar8),
                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar7),
                                 CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar6),
                                          (0 < sVar5) * (sVar5 < 0x100) * (char)uVar20 -
                                          (0xff < sVar5))));
    uVar20 = *(undefined8 *)((int)puVar13 + 4);
    bVar22 = (byte)((ulonglong)uVar20 >> 0x18);
    uVar9 = (ushort)(((uint7)bVar22 << 0x30) >> 0x28);
    bVar21 = (byte)((ulonglong)uVar20 >> 0x10);
    bVar23 = (byte)((ulonglong)uVar20 >> 0x20);
    uVar10 = (ushort)(((uint7)bVar23 << 0x30) >> 0x28);
    bVar24 = (byte)((ulonglong)uVar20 >> 0x28);
    uVar11 = (ushort)(((uint7)bVar24 << 0x30) >> 0x28);
    uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar20 >> 0x30) << 0x30) >> 0x28);
    uVar20 = psraw(CONCAT26((uVar9 >> 8) * sVar16 + (uVar10 >> 8) * sVar19 + (uVar11 >> 8) * sVar27
                            + (uVar12 >> 8) * sVar30 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar9,bVar21) * sVar15 +
                                     (short)CONCAT21(uVar10,bVar22) * sVar18 +
                                     (short)CONCAT21(uVar11,bVar23) * sVar26 +
                                     (short)CONCAT21(uVar12,bVar24) * sVar29 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar20 >> 8) * sVar14 +
                                              (ushort)bVar21 * sVar17 + (ushort)bVar22 * sVar25 +
                                              (ushort)bVar23 * sVar28 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar20 & 0xff) * (short)uVar1 +
                                              ((ushort)((ulonglong)uVar20 >> 8) & 0xff) *
                                              (short)uVar2 +
                                              ((ushort)((ulonglong)uVar20 >> 0x10) & 0xff) *
                                              (short)uVar3 +
                                              ((ushort)((ulonglong)uVar20 >> 0x18) & 0xff) *
                                              (short)uVar4 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar5 = (short)uVar20;
    sVar6 = (short)((ulonglong)uVar20 >> 0x10);
    sVar7 = (short)((ulonglong)uVar20 >> 0x20);
    sVar8 = (short)((ulonglong)uVar20 >> 0x30);
    param_2[1] = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                          (0xff < sVar8),
                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar20 >> 0x20)
                                   - (0xff < sVar7),
                                   CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                            (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar6),
                                            (0 < sVar5) * (sVar5 < 0x100) * (char)uVar20 -
                                            (0xff < sVar5))));
    puVar13 = (undefined8 *)((int)puVar13 + param_3);
    param_2 = (undefined4 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

