/* speed.exe 00817c43 FUN_00817c43; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00817c43(undefined8 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5
                 ,int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar16;
  
  uVar1 = *param_7;
  uVar2 = param_7[2];
  do {
    uVar16 = *param_1;
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar16 >> 0x18) << 0x30) >> 0x28);
    sVar10 = (short)((ulonglong)uVar1 >> 0x10);
    sVar11 = (short)((ulonglong)uVar1 >> 0x20);
    sVar12 = (short)((ulonglong)uVar1 >> 0x30);
    uVar3 = *(undefined8 *)((int)param_1 + param_3);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
    sVar13 = (short)((ulonglong)uVar2 >> 0x10);
    sVar14 = (short)((ulonglong)uVar2 >> 0x20);
    sVar15 = (short)((ulonglong)uVar2 >> 0x30);
    uVar16 = psraw(CONCAT26((uVar8 >> 8) * sVar12 + (uVar9 >> 8) * sVar15 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar8,(char)((ulonglong)uVar16 >> 0x10)) *
                                     sVar11 + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)
                                                             ) * sVar14 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar16 >> 8) * sVar10 +
                                              (ushort)(byte)((ulonglong)uVar3 >> 8) * sVar13 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar16 & 0xff) * (short)uVar1 +
                                              ((ushort)uVar3 & 0xff) * (short)uVar2 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar4 = (short)uVar16;
    sVar5 = (short)((ulonglong)uVar16 >> 0x10);
    sVar6 = (short)((ulonglong)uVar16 >> 0x20);
    sVar7 = (short)((ulonglong)uVar16 >> 0x30);
    *param_2 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                        (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar16 >> 0x20) -
                                 (0xff < sVar6),
                                 CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                          (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar5),
                                          (0 < sVar4) * (sVar4 < 0x100) * (char)uVar16 -
                                          (0xff < sVar4))));
    uVar16 = *(undefined8 *)((int)param_1 + 4);
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar16 >> 0x18) << 0x30) >> 0x28);
    uVar3 = *(undefined8 *)((int)param_1 + param_3 + 4);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
    uVar16 = psraw(CONCAT26((uVar8 >> 8) * sVar12 + (uVar9 >> 8) * sVar15 +
                            (short)((ulonglong)_PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                   >> 0x30),
                            CONCAT24((short)CONCAT21(uVar8,(char)((ulonglong)uVar16 >> 0x10)) *
                                     sVar11 + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)
                                                             ) * sVar14 +
                                     (short)((ulonglong)
                                             _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430 >>
                                            0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar16 >> 8) * sVar10 +
                                              (ushort)(byte)((ulonglong)uVar3 >> 8) * sVar13 +
                                              (short)((ulonglong)
                                                                                                            
                                                  _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430
                                                  >> 0x10),
                                              ((ushort)uVar16 & 0xff) * (short)uVar1 +
                                              ((ushort)uVar3 & 0xff) * (short)uVar2 +
                                              (short)
                                              _PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b430))
                           ),7);
    sVar4 = (short)uVar16;
    sVar5 = (short)((ulonglong)uVar16 >> 0x10);
    sVar6 = (short)((ulonglong)uVar16 >> 0x20);
    sVar7 = (short)((ulonglong)uVar16 >> 0x30);
    param_2[1] = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                          (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar16 >> 0x20)
                                   - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                            (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar5),
                                            (0 < sVar4) * (sVar4 < 0x100) * (char)uVar16 -
                                            (0xff < sVar4))));
    param_1 = (undefined8 *)((int)param_1 + param_3);
    param_2 = (undefined4 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

