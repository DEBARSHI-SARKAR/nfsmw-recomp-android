/* speed.exe 0081330e FUN_0081330e; analysis pseudocode, not buildable source.
 */

void FUN_0081330e(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar16;
  ushort uVar17;
  uint5 uVar15;
  ushort uVar18;
  ushort uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  
  uVar6 = DAT_008c5a00;
  uVar5 = DAT_008c59f0;
  uVar4 = DAT_008c59a0;
  iVar1 = (int)param_1 + param_2 + -3;
  do {
    puVar10 = param_3;
    uVar2 = *param_1;
    uVar8 = uVar2 & 0xffff00;
    uVar7 = uVar2 & 0xffff0000;
    uVar9 = (uVar8 >> 8) << 0x10 | uVar2 ^ uVar7;
    uVar12 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
    sVar26 = (short)((ulonglong)uVar5 >> 0x10);
    sVar27 = (short)((ulonglong)uVar5 >> 0x20);
    sVar28 = (short)((ulonglong)uVar5 >> 0x30);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),uVar9)
                  >> 0x18);
    uVar15 = (uint5)uVar3 & 0xffffffff00;
    sVar23 = (short)((ulonglong)uVar6 >> 0x10);
    sVar24 = (short)((ulonglong)uVar6 >> 0x20);
    sVar25 = (short)((ulonglong)uVar6 >> 0x30);
    *puVar10 = uVar9;
    param_1 = (uint *)((int)param_1 + 3);
    uVar11 = ((ushort)uVar2 & 0xff) * (short)uVar6 + (ushort)(byte)(uVar8 >> 8) * (short)uVar5 +
             (short)uVar4;
    sVar20 = (short)((ulonglong)uVar4 >> 0x10);
    uVar13 = ((ushort)(CONCAT43(uVar3,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff) *
             sVar23 + (ushort)(byte)(uVar8 >> 0x10) * sVar26 + sVar20;
    sVar21 = (short)((ulonglong)uVar4 >> 0x20);
    uVar16 = (short)(uVar15 >> 8) * sVar24 +
             (short)(CONCAT25(uVar12,CONCAT14((char)(uVar7 >> 0x10),uVar2)) >> 0x20) * sVar27 +
             sVar21;
    sVar22 = (short)((ulonglong)uVar4 >> 0x30);
    uVar18 = (short)(uVar15 >> 0x18) * sVar25 + (uVar12 >> 8) * sVar28 + sVar22;
    uVar12 = uVar11 >> 8;
    uVar14 = uVar13 >> 8;
    uVar17 = uVar16 >> 8;
    uVar19 = uVar18 >> 8;
    *(uint *)((int)puVar10 + 1) =
         CONCAT13((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar19),
                  CONCAT12((uVar17 != 0) * (uVar17 < 0x100) * (char)(uVar16 >> 8) - (0xff < uVar17),
                           CONCAT11((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                                    (0xff < uVar14),
                                    (uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar11 >> 8) -
                                    (0xff < uVar12))));
    param_3 = (uint *)((int)puVar10 + 5);
  } while ((int)param_1 < iVar1);
  uVar2 = *param_1;
  uVar8 = uVar2 & 0xffff00;
  uVar3 = (uVar2 & 0xffff0000 | uVar8 >> 8) & 0xffff00;
  uVar9 = (uVar8 >> 8) << 0x10 | uVar2 ^ uVar2 & 0xffff0000;
  uVar12 = (ushort)(((uint7)(byte)(uVar3 >> 0x10) << 0x30) >> 0x28);
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),uVar9) >>
                0x18);
  uVar15 = (uint5)uVar7 & 0xffffffff00;
  *(uint *)((int)puVar10 + 5) = uVar9;
  uVar11 = ((ushort)uVar2 & 0xff) * (short)uVar6 + (ushort)(byte)(uVar8 >> 8) * (short)uVar5 +
           (short)uVar4;
  uVar13 = ((ushort)(CONCAT43(uVar7,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff) *
           sVar23 + (ushort)(byte)(uVar8 >> 0x10) * sVar26 + sVar20;
  uVar16 = (short)(uVar15 >> 8) * sVar24 + (short)CONCAT21(uVar12,(char)(uVar3 >> 8)) * sVar27 +
           sVar21;
  uVar18 = (short)(uVar15 >> 0x18) * sVar25 + (uVar12 >> 8) * sVar28 + sVar22;
  uVar12 = uVar11 >> 8;
  uVar14 = uVar13 >> 8;
  uVar17 = uVar16 >> 8;
  uVar19 = uVar18 >> 8;
  *(uint *)((int)puVar10 + 6) =
       CONCAT13((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar19),
                CONCAT12((uVar17 != 0) * (uVar17 < 0x100) * (char)(uVar16 >> 8) - (0xff < uVar17),
                         CONCAT11((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                                  (0xff < uVar14),
                                  (uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar11 >> 8) -
                                  (0xff < uVar12))));
  return;
}

