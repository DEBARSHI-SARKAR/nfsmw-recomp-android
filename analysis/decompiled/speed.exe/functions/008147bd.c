/* speed.exe 008147bd FUN_008147bd; analysis pseudocode, not buildable source.
 */

void FUN_008147bd(undefined4 param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint5 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  ulonglong uVar20;
  uint5 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  short sVar24;
  short sVar25;
  short sVar27;
  uint5 uVar26;
  short sVar28;
  
  iVar12 = -param_3;
  uVar2 = *param_2;
  uVar3 = *(undefined4 *)((int)param_2 + iVar12);
  uVar8 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
  uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                >> 0x20),uVar3) >> 0x18);
  uVar13 = (uint5)uVar9 & 0xffffffff00;
  uVar4 = *(undefined4 *)((int)param_2 + param_3 * -2);
  uVar14 = *(undefined8 *)((int)param_2 + param_3);
  uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar4 >> 0x10),uVar4))
                                 >> 0x20),uVar4) >> 0x18);
  uVar21 = (uint5)uVar10 & 0xffffffff00;
  uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar14 >> 0x18) << 0x30) >> 0x28);
  uVar15 = param_4[2];
  uVar1 = *param_4;
  uVar5 = param_2[1];
  uVar22 = psraw(CONCAT26(((short)(uVar21 >> 0x18) - (uVar7 >> 8)) +
                          ((uVar8 >> 8) - (short)(uVar13 >> 0x18)) * 3 +
                          (short)((ulonglong)uVar15 >> 0x30),
                          CONCAT24(((short)(uVar21 >> 8) -
                                   (short)CONCAT21(uVar7,(char)((ulonglong)uVar14 >> 0x10))) +
                                   ((short)(CONCAT25(uVar8,CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                    uVar2)) >> 0x20) -
                                   (short)(uVar13 >> 8)) * 3 + (short)((ulonglong)uVar15 >> 0x20),
                                   CONCAT22((((ushort)(CONCAT43(uVar10,CONCAT12((char)((uint)uVar4
                                                                                      >> 8),
                                                                                (ushort)uVar4)) >>
                                                      0x10) & 0xff) -
                                            (ushort)(byte)((ulonglong)uVar14 >> 8)) +
                                            ((ushort)(byte)((uint)uVar2 >> 8) -
                                            ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar3 >>
                                                                                    8),(ushort)uVar3
                                                                             )) >> 0x10) & 0xff)) *
                                            3 + (short)((ulonglong)uVar15 >> 0x10),
                                            (((ushort)uVar4 & 0xff) - ((ushort)uVar14 & 0xff)) +
                                            ((ushort)(byte)uVar2 - ((ushort)uVar3 & 0xff)) * 3 +
                                            (short)uVar15))),3);
  uVar23 = psraw(uVar22,0xf);
  uVar2 = *(undefined4 *)((int)param_2 + iVar12 + 4);
  uVar14 = psubsw(uVar22 ^ uVar23,uVar23);
  uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar5 >> 0x10),uVar5))
                                >> 0x20),uVar5) >> 0x18);
  uVar21 = (uint5)uVar9 & 0xffffffff00;
  uVar23 = uVar23 | param_4[1];
  uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                 >> 0x20),uVar2) >> 0x18);
  uVar26 = (uint5)uVar10 & 0xffffffff00;
  uVar22 = CONCAT26((short)((ulonglong)uVar1 >> 0x30) - (short)((ulonglong)uVar14 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar1 >> 0x20) - (short)((ulonglong)uVar14 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar1 >> 0x10) -
                                      (short)((ulonglong)uVar14 >> 0x10),
                                      (short)uVar1 - (short)uVar14)));
  uVar20 = psraw(uVar22,0xf);
  uVar3 = *(undefined4 *)((int)param_2 + param_3 * -2 + 4);
  uVar4 = *(undefined4 *)((int)param_2 + param_3 + 4);
  uVar14 = psubsw(uVar22 ^ uVar20,uVar20);
  uVar14 = psubusw(uVar1,uVar14);
  uVar7 = (ushort)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >> 0x28);
  sVar16 = (short)uVar14 * (short)uVar23;
  sVar17 = (short)((ulonglong)uVar14 >> 0x10) * (short)(uVar23 >> 0x10);
  sVar18 = (short)((ulonglong)uVar14 >> 0x20) * (short)(uVar23 >> 0x20);
  sVar19 = (short)((ulonglong)uVar14 >> 0x30) * (short)(uVar23 >> 0x30);
  uVar11 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar4 >> 0x10),uVar4))
                                 >> 0x20),uVar4) >> 0x18);
  uVar13 = (uint5)uVar11 & 0xffffffff00;
  uVar14 = param_4[2];
  uVar6 = *param_2;
  uVar22 = psraw(CONCAT26(((uVar7 >> 8) - (short)(uVar13 >> 0x18)) +
                          ((short)(uVar21 >> 0x18) - (short)(uVar26 >> 0x18)) * 3 +
                          (short)((ulonglong)uVar14 >> 0x30),
                          CONCAT24(((short)(CONCAT25(uVar7,CONCAT14((char)((uint)uVar3 >> 0x10),
                                                                    uVar3)) >> 0x20) -
                                   (short)(uVar13 >> 8)) +
                                   ((short)(uVar21 >> 8) - (short)(uVar26 >> 8)) * 3 +
                                   (short)((ulonglong)uVar14 >> 0x20),
                                   CONCAT22(((ushort)(byte)((uint)uVar3 >> 8) -
                                            ((ushort)(CONCAT43(uVar11,CONCAT12((char)((uint)uVar4 >>
                                                                                     8),(ushort)
                                                  uVar4)) >> 0x10) & 0xff)) +
                                            (((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar5 >>
                                                                                     8),(ushort)
                                                  uVar5)) >> 0x10) & 0xff) -
                                            ((ushort)(CONCAT43(uVar10,CONCAT12((char)((uint)uVar2 >>
                                                                                     8),(ushort)
                                                  uVar2)) >> 0x10) & 0xff)) * 3 +
                                            (short)((ulonglong)uVar14 >> 0x10),
                                            ((ushort)(byte)uVar3 - ((ushort)uVar4 & 0xff)) +
                                            (((ushort)uVar5 & 0xff) - ((ushort)uVar2 & 0xff)) * 3 +
                                            (short)uVar14))),3);
  uVar2 = *(undefined4 *)((int)param_2 + iVar12);
  uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar6 >> 0x10),uVar6))
                                >> 0x20),uVar6) >> 0x18);
  uVar13 = (uint5)uVar9 & 0xffffffff00;
  sVar24 = ((ushort)uVar6 & 0xff) - sVar16;
  sVar25 = ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
           0xff) - sVar17;
  sVar27 = (short)(uVar13 >> 8) - sVar18;
  sVar28 = (short)(uVar13 >> 0x18) - sVar19;
  uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                >> 0x20),uVar2) >> 0x18);
  uVar13 = (uint5)uVar9 & 0xffffffff00;
  sVar16 = ((ushort)uVar2 & 0xff) + sVar16;
  sVar17 = ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar2 >> 8),(ushort)uVar2)) >> 0x10) &
           0xff) + sVar17;
  sVar18 = (short)(uVar13 >> 8) + sVar18;
  sVar19 = (short)(uVar13 >> 0x18) + sVar19;
  *param_2 = CONCAT13((0 < sVar28) * (sVar28 < 0x100) * (char)sVar28 - (0xff < sVar28),
                      CONCAT12((0 < sVar27) * (sVar27 < 0x100) * (char)sVar27 - (0xff < sVar27),
                               CONCAT11((0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 -
                                        (0xff < sVar25),
                                        (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 -
                                        (0xff < sVar24))));
  uVar20 = psraw(uVar22,0xf);
  uVar14 = *param_4;
  uVar15 = psubsw(uVar22 ^ uVar20,uVar20);
  uVar20 = uVar20 | param_4[1];
  uVar22 = CONCAT26((short)((ulonglong)uVar14 >> 0x30) - (short)((ulonglong)uVar15 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar14 >> 0x20) - (short)((ulonglong)uVar15 >> 0x20)
                             ,CONCAT22((short)((ulonglong)uVar14 >> 0x10) -
                                       (short)((ulonglong)uVar15 >> 0x10),
                                       (short)uVar14 - (short)uVar15)));
  uVar23 = psraw(uVar22,0xf);
  *(uint *)((int)param_2 + iVar12) =
       CONCAT13((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19),
                CONCAT12((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 - (0xff < sVar18),
                         CONCAT11((0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 - (0xff < sVar17),
                                  (0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16)))
               );
  uVar15 = psubsw(uVar22 ^ uVar23,uVar23);
  uVar2 = param_2[1];
  uVar14 = psubusw(uVar14,uVar15);
  uVar3 = *(undefined4 *)((int)param_2 + iVar12 + 4);
  sVar16 = (short)uVar14 * (short)uVar20;
  sVar17 = (short)((ulonglong)uVar14 >> 0x10) * (short)(uVar20 >> 0x10);
  sVar18 = (short)((ulonglong)uVar14 >> 0x20) * (short)(uVar20 >> 0x20);
  sVar19 = (short)((ulonglong)uVar14 >> 0x30) * (short)(uVar20 >> 0x30);
  uVar7 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
  uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                >> 0x20),uVar3) >> 0x18);
  uVar13 = (uint5)uVar9 & 0xffffffff00;
  sVar24 = ((ushort)uVar3 & 0xff) + sVar16;
  sVar25 = ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar3 >> 8),(ushort)uVar3)) >> 0x10) &
           0xff) + sVar17;
  sVar27 = (short)(uVar13 >> 8) + sVar18;
  sVar28 = (short)(uVar13 >> 0x18) + sVar19;
  sVar16 = (ushort)(byte)uVar2 - sVar16;
  sVar17 = (ushort)(byte)((uint)uVar2 >> 8) - sVar17;
  sVar18 = (short)(CONCAT25(uVar7,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20) - sVar18;
  sVar19 = (uVar7 >> 8) - sVar19;
  *(uint *)((int)param_2 + iVar12 + 4) =
       CONCAT13((0 < sVar28) * (sVar28 < 0x100) * (char)sVar28 - (0xff < sVar28),
                CONCAT12((0 < sVar27) * (sVar27 < 0x100) * (char)sVar27 - (0xff < sVar27),
                         CONCAT11((0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 - (0xff < sVar25),
                                  (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24)))
               );
  param_2[1] = CONCAT13((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19),
                        CONCAT12((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 - (0xff < sVar18),
                                 CONCAT11((0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 -
                                          (0xff < sVar17),
                                          (0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 -
                                          (0xff < sVar16))));
  return;
}

