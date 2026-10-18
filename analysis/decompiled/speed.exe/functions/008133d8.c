/* speed.exe 008133d8 FUN_008133d8; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008133d8(ulonglong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint5 uVar14;
  ulonglong uVar19;
  ushort uVar20;
  byte bVar21;
  ulonglong uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  
  uVar8 = DAT_008c59d0;
  uVar7 = _PTR_DAT_008c59c0;
  uVar6 = DAT_008c59a0;
  iVar1 = (int)param_1 + param_2 + -8;
  do {
    puVar9 = param_3;
    uVar2 = *param_1;
    uVar3 = *(undefined8 *)((int)param_1 + 1);
    *puVar9 = (int)uVar2;
    uVar13 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
    sVar27 = (short)uVar8;
    sVar28 = (short)((ulonglong)uVar8 >> 0x10);
    sVar29 = (short)((ulonglong)uVar8 >> 0x20);
    sVar30 = (short)((ulonglong)uVar8 >> 0x30);
    sVar31 = (short)uVar7;
    sVar32 = (short)((ulonglong)uVar7 >> 0x10);
    sVar33 = (short)((ulonglong)uVar7 >> 0x20);
    sVar34 = (short)((ulonglong)uVar7 >> 0x30);
    uVar20 = (ushort)(byte)(uVar2 >> 0x20);
    bVar21 = (byte)(uVar2 >> 0x28);
    *(uint *)((int)puVar9 + 5) = (uint)CONCAT12(bVar21,uVar20);
    sVar23 = (short)uVar6;
    uVar10 = (ushort)(byte)uVar2 * sVar27 + ((ushort)uVar3 & 0xff) * sVar31 + sVar23;
    sVar24 = (short)((ulonglong)uVar6 >> 0x10);
    uVar12 = (ushort)(byte)(uVar2 >> 8) * sVar28 + (ushort)(byte)((ulonglong)uVar3 >> 8) * sVar32 +
             sVar24;
    sVar25 = (short)((ulonglong)uVar6 >> 0x20);
    uVar15 = (short)(CONCAT25(uVar13,CONCAT14((char)(uVar2 >> 0x10),(int)uVar2)) >> 0x20) * sVar29 +
             (short)CONCAT21(uVar11,(char)((ulonglong)uVar3 >> 0x10)) * sVar33 + sVar25;
    sVar26 = (short)((ulonglong)uVar6 >> 0x30);
    uVar17 = (uVar13 >> 8) * sVar30 + (uVar11 >> 8) * sVar34 + sVar26;
    uVar11 = uVar10 >> 8;
    uVar13 = uVar12 >> 8;
    uVar16 = uVar15 >> 8;
    uVar18 = uVar17 >> 8;
    *(uint *)((int)puVar9 + 1) =
         CONCAT13((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar18),
                  CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar16),
                           CONCAT11((uVar13 != 0) * (uVar13 < 0x100) * (char)(uVar12 >> 8) -
                                    (0xff < uVar13),
                                    (uVar11 != 0) * (uVar11 < 0x100) * (char)(uVar10 >> 8) -
                                    (0xff < uVar11))));
    param_1 = param_1 + 1;
    uVar11 = uVar20 * sVar27 + (ushort)(byte)((ulonglong)uVar3 >> 0x20) * sVar31 + sVar23;
    uVar10 = (ushort)bVar21 * sVar28 + (ushort)(byte)((ulonglong)uVar3 >> 0x28) * sVar32 + sVar24;
    uVar15 = (ushort)(byte)(uVar2 >> 0x30) * sVar29 +
             (ushort)(byte)((ulonglong)uVar3 >> 0x30) * sVar33 + sVar25;
    uVar17 = (ushort)(byte)(uVar2 >> 0x38) * sVar30 +
             (ushort)(byte)((ulonglong)uVar3 >> 0x38) * sVar34 + sVar26;
    uVar13 = uVar11 >> 8;
    uVar12 = uVar10 >> 8;
    uVar16 = uVar15 >> 8;
    uVar18 = uVar17 >> 8;
    *(uint *)((int)puVar9 + 6) =
         CONCAT13((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar18),
                  CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar16),
                           CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar10 >> 8) -
                                    (0xff < uVar12),
                                    (uVar13 != 0) * (uVar13 < 0x100) * (char)(uVar11 >> 8) -
                                    (0xff < uVar13))));
    param_3 = (undefined4 *)((int)puVar9 + 10);
  } while ((int)param_1 < iVar1);
  uVar2 = *param_1;
  uVar22 = DAT_008c59e0 & uVar2 >> 8;
  uVar19 = uVar2 >> 8 | uVar22 << 8;
  uVar4 = (undefined4)uVar2;
  *(undefined4 *)((int)puVar9 + 10) = uVar4;
  uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar2 >> 0x10),uVar4)) >> 0x20),uVar4) >>
                0x18);
  uVar14 = (uint5)uVar5 & 0xffff00ff00;
  uVar11 = (ushort)(((uint7)(byte)(uVar19 >> 0x18) << 0x30) >> 0x28);
  uVar20 = (ushort)(byte)(uVar2 >> 0x20);
  bVar21 = (byte)(uVar2 >> 0x28);
  *(uint *)((int)puVar9 + 0xf) = (uint)CONCAT12(bVar21,uVar20);
  uVar13 = (ushort)(byte)uVar2 * sVar27 + ((ushort)uVar19 & 0xff) * sVar31 + sVar23;
  uVar10 = ((ushort)CONCAT41(uVar5,(char)(uVar2 >> 8)) & 0xff) * sVar28 +
           (ushort)(byte)(uVar19 >> 8) * sVar32 + sVar24;
  uVar15 = (short)(uVar14 >> 8) * sVar29 + (short)CONCAT21(uVar11,(char)(uVar19 >> 0x10)) * sVar33 +
           sVar25;
  uVar17 = (short)(uVar14 >> 0x18) * sVar30 + (uVar11 >> 8) * sVar34 + sVar26;
  uVar11 = uVar13 >> 8;
  uVar12 = uVar10 >> 8;
  uVar16 = uVar15 >> 8;
  uVar18 = uVar17 >> 8;
  *(uint *)((int)puVar9 + 0xb) =
       CONCAT13((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar18),
                CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar16),
                         CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar10 >> 8) -
                                  (0xff < uVar12),
                                  (uVar11 != 0) * (uVar11 < 0x100) * (char)(uVar13 >> 8) -
                                  (0xff < uVar11))));
  uVar11 = uVar20 * sVar27 + (ushort)(byte)(uVar19 >> 0x20) * sVar31 + sVar23;
  uVar10 = (ushort)bVar21 * sVar28 + (ushort)(byte)(uVar19 >> 0x28) * sVar32 + sVar24;
  uVar15 = (ushort)(byte)(uVar2 >> 0x30) * sVar29 + (ushort)(byte)(uVar19 >> 0x30) * sVar33 + sVar25
  ;
  uVar17 = (ushort)(byte)(uVar2 >> 0x38) * sVar30 + (ushort)(byte)(uVar22 >> 0x30) * sVar34 + sVar26
  ;
  uVar13 = uVar11 >> 8;
  uVar12 = uVar10 >> 8;
  uVar16 = uVar15 >> 8;
  uVar18 = uVar17 >> 8;
  puVar9[4] = CONCAT13((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar18),
                       CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) -
                                (0xff < uVar16),
                                CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar10 >> 8) -
                                         (0xff < uVar12),
                                         (uVar13 != 0) * (uVar13 < 0x100) * (char)(uVar11 >> 8) -
                                         (0xff < uVar13))));
  return;
}

