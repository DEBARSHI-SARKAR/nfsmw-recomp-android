/* speed.exe 00817bbd FUN_00817bbd; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817bbd(undefined8 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5
                 ,int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  byte bVar16;
  byte bVar17;
  undefined8 uVar15;
  
  uVar1 = *param_7;
  uVar2 = param_7[2];
  do {
    uVar15 = *param_1;
    bVar17 = (byte)((ulonglong)uVar15 >> 0x18);
    uVar7 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
    bVar16 = (byte)((ulonglong)uVar15 >> 0x10);
    sVar9 = (short)((ulonglong)uVar1 >> 0x10);
    sVar10 = (short)((ulonglong)uVar1 >> 0x20);
    sVar11 = (short)((ulonglong)uVar1 >> 0x30);
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar15 >> 0x20) << 0x30) >> 0x28);
    sVar12 = (short)((ulonglong)uVar2 >> 0x10);
    sVar13 = (short)((ulonglong)uVar2 >> 0x20);
    sVar14 = (short)((ulonglong)uVar2 >> 0x30);
    uVar15 = psraw(CONCAT26((uVar7 >> 8) * sVar11 + (uVar8 >> 8) * sVar14 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar7,bVar16) * sVar10 +
                                     (short)CONCAT21(uVar8,bVar17) * sVar13 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar15 >> 8) * sVar9 +
                                              (ushort)bVar16 * sVar12 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar15 & 0xff) * (short)uVar1 +
                                              ((ushort)((ulonglong)uVar15 >> 8) & 0xff) *
                                              (short)uVar2 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar3 = (short)uVar15;
    sVar4 = (short)((ulonglong)uVar15 >> 0x10);
    sVar5 = (short)((ulonglong)uVar15 >> 0x20);
    sVar6 = (short)((ulonglong)uVar15 >> 0x30);
    *param_2 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                        (0xff < sVar6),
                        CONCAT12((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar15 >> 0x20) -
                                 (0xff < sVar5),
                                 CONCAT11((0 < sVar4) * (sVar4 < 0x100) *
                                          (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar4),
                                          (0 < sVar3) * (sVar3 < 0x100) * (char)uVar15 -
                                          (0xff < sVar3))));
    uVar15 = *(undefined8 *)((int)param_1 + 4);
    bVar17 = (byte)((ulonglong)uVar15 >> 0x18);
    uVar7 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
    bVar16 = (byte)((ulonglong)uVar15 >> 0x10);
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar15 >> 0x20) << 0x30) >> 0x28);
    uVar15 = psraw(CONCAT26((uVar7 >> 8) * sVar11 + (uVar8 >> 8) * sVar14 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar7,bVar16) * sVar10 +
                                     (short)CONCAT21(uVar8,bVar17) * sVar13 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar15 >> 8) * sVar9 +
                                              (ushort)bVar16 * sVar12 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar15 & 0xff) * (short)uVar1 +
                                              ((ushort)((ulonglong)uVar15 >> 8) & 0xff) *
                                              (short)uVar2 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar3 = (short)uVar15;
    sVar4 = (short)((ulonglong)uVar15 >> 0x10);
    sVar5 = (short)((ulonglong)uVar15 >> 0x20);
    sVar6 = (short)((ulonglong)uVar15 >> 0x30);
    param_2[1] = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                          (0xff < sVar6),
                          CONCAT12((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                   - (0xff < sVar5),
                                   CONCAT11((0 < sVar4) * (sVar4 < 0x100) *
                                            (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar4),
                                            (0 < sVar3) * (sVar3 < 0x100) * (char)uVar15 -
                                            (0xff < sVar3))));
    param_1 = (undefined8 *)((int)param_1 + param_3);
    param_2 = (undefined4 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

