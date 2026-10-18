/* speed.exe 00814596 FUN_00814596; analysis pseudocode, not buildable source.
 */

void FUN_00814596(undefined4 param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  byte bVar13;
  byte bVar16;
  byte bVar17;
  undefined4 uVar15;
  undefined1 uVar18;
  byte bVar19;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  byte bVar28;
  undefined4 uVar20;
  ushort uVar29;
  undefined8 uVar22;
  short sVar30;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  short sVar35;
  undefined1 uVar36;
  short sVar37;
  undefined8 uVar31;
  short sVar38;
  ulonglong uVar39;
  uint5 uVar40;
  undefined8 uVar41;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined4 uVar42;
  ushort uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  byte bVar48;
  byte bVar50;
  short sVar49;
  short sVar51;
  short sVar53;
  uint5 uVar52;
  short sVar54;
  undefined2 uVar14;
  undefined6 uVar21;
  
  uVar2 = *(undefined4 *)(param_2 + -2 + param_3);
  uVar42 = *(undefined4 *)(param_2 + 2 + param_3);
  iVar4 = param_3 * 3;
  uVar15 = *(undefined4 *)(param_2 + -2 + param_3 * 2);
  bVar27 = (byte)((uint)uVar42 >> 8);
  bVar17 = (byte)((uint)*(undefined4 *)(param_2 + 2) >> 8);
  uVar9 = CONCAT11(bVar27,bVar17);
  bVar25 = (byte)uVar42;
  bVar23 = (byte)((uint)uVar2 >> 0x18);
  bVar16 = (byte)((uint)*(undefined4 *)(param_2 + -2) >> 0x18);
  bVar13 = (byte)((uint)*(undefined4 *)(param_2 + -2) >> 0x10);
  uVar18 = (undefined1)((uint)uVar2 >> 0x10);
  uVar14 = CONCAT11(uVar18,bVar13);
  uVar2 = *(undefined4 *)(param_2 + 2 + param_3 * 2);
  uVar42 = *(undefined4 *)(param_2 + -2 + iVar4);
  uVar3 = *(undefined4 *)(param_2 + 2 + iVar4);
  bVar28 = (byte)((uint)uVar3 >> 8);
  uVar36 = (undefined1)((uint)uVar2 >> 8);
  uVar10 = CONCAT11(bVar28,uVar36);
  uVar26 = (undefined1)uVar3;
  uVar33 = (undefined1)uVar2;
  bVar24 = (byte)((uint)uVar42 >> 0x18);
  uVar32 = (undefined1)((uint)uVar15 >> 0x18);
  bVar19 = (byte)((uint)uVar42 >> 0x10);
  uVar34 = (undefined1)((uint)uVar15 >> 0x10);
  uVar11 = CONCAT22(CONCAT11(bVar24,uVar32),CONCAT11(bVar23,bVar16));
  uVar15 = CONCAT22(CONCAT11(bVar19,uVar34),uVar14);
  iVar1 = param_2 + param_3 * 4;
  uVar29 = (ushort)CONCAT31(CONCAT21(uVar9,bVar25),(char)*(undefined4 *)(param_2 + 2));
  uVar20 = CONCAT22((short)CONCAT31(CONCAT21(uVar10,uVar26),uVar33),uVar29);
  uVar21 = CONCAT24(uVar9,uVar20);
  param_4[3] = CONCAT44(uVar11,uVar15);
  param_4[4] = CONCAT26(uVar10,uVar21);
  uVar5 = (ushort)(CONCAT16(uVar26,uVar21) >> 0x28);
  uVar2 = *(undefined4 *)(iVar1 + -2 + param_3);
  uVar42 = *(undefined4 *)(iVar1 + 2 + param_3);
  uVar45 = (ushort)(((uint7)bVar24 << 0x30) >> 0x28);
  uVar9 = CONCAT11((char)((uint)uVar42 >> 8),(char)((uint)*(undefined4 *)(iVar1 + 2) >> 8));
  uVar44 = (undefined1)uVar42;
  uVar43 = (undefined1)((uint)uVar2 >> 0x18);
  bVar50 = (byte)((uint)*(undefined4 *)(iVar1 + -2) >> 0x18);
  uVar12 = CONCAT11(uVar43,bVar50);
  bVar24 = (byte)((uint)uVar2 >> 0x10);
  bVar48 = (byte)((uint)*(undefined4 *)(iVar1 + -2) >> 0x10);
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar19 << 0x30) >> 0x28),
                                          CONCAT14(uVar34,uVar15)) >> 0x20),uVar15) >> 0x18);
  uVar40 = (uint5)uVar7 & 0xffff00ff00;
  uVar6 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
  uVar31 = param_4[2];
  uVar2 = *(undefined4 *)(iVar1 + -2 + param_3 * 2);
  uVar42 = *(undefined4 *)(iVar1 + 2 + param_3 * 2);
  uVar15 = *(undefined4 *)(iVar1 + -2 + iVar4);
  uVar3 = *(undefined4 *)(iVar1 + 2 + iVar4);
  uVar46 = psraw(CONCAT26(((short)(uVar40 >> 0x18) - (uVar6 >> 8)) +
                          ((uVar5 >> 8) - (uVar45 >> 8)) * 3 + (short)((ulonglong)uVar31 >> 0x30),
                          CONCAT24(((short)(uVar40 >> 8) - (short)CONCAT21(uVar6,uVar36)) +
                                   (((ushort)(CONCAT25(uVar5,CONCAT14(uVar33,uVar20)) >> 0x20) &
                                    0xff) - (short)(CONCAT25(uVar45,CONCAT14(uVar32,uVar11)) >> 0x20
                                                   )) * 3 + (short)((ulonglong)uVar31 >> 0x20),
                                   CONCAT22((((ushort)(CONCAT43(uVar7,CONCAT12(uVar18,uVar14)) >>
                                                      0x10) & 0xff) - (ushort)bVar27) +
                                            ((ushort)bVar25 - (ushort)bVar23) * 3 +
                                            (short)((ulonglong)uVar31 >> 0x10),
                                            ((ushort)bVar13 - (ushort)bVar17) +
                                            ((uVar29 & 0xff) - (ushort)bVar16) * 3 + (short)uVar31))
                         ),3);
  uVar10 = CONCAT11((char)((uint)uVar3 >> 8),(char)((uint)uVar42 >> 8));
  uVar32 = (undefined1)uVar3;
  uVar34 = (undefined1)uVar42;
  bVar16 = (byte)((uint)uVar15 >> 0x18);
  uVar26 = (undefined1)((uint)uVar2 >> 0x18);
  uVar18 = (undefined1)((uint)uVar2 >> 0x10);
  bVar13 = (byte)((uint)uVar15 >> 0x10);
  uVar45 = (ushort)CONCAT31(CONCAT21(uVar9,uVar44),(char)*(undefined4 *)(iVar1 + 2));
  uVar42 = CONCAT22((short)CONCAT31(CONCAT21(uVar10,uVar32),uVar34),uVar45);
  uVar21 = CONCAT24(uVar9,uVar42);
  param_4[6] = CONCAT26(uVar10,uVar21);
  uVar2 = CONCAT22(CONCAT11(bVar16,uVar26),uVar12);
  uVar15 = CONCAT22(CONCAT11(bVar13,uVar18),CONCAT11(bVar24,bVar48));
  param_4[5] = CONCAT44(uVar2,uVar15);
  uVar47 = psraw(uVar46,0xf);
  uVar31 = *param_4;
  uVar22 = psubsw(uVar46 ^ uVar47,uVar47);
  uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(uVar32,uVar21) >> 0x28),
                                          CONCAT14(uVar34,uVar42)) >> 0x20),uVar42) >> 0x18);
  uVar40 = (uint5)uVar8 & 0xffff00ff00;
  uVar47 = uVar47 | param_4[1];
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar16 << 0x30) >> 0x28),
                                          CONCAT14(uVar26,uVar2)) >> 0x20),uVar2) >> 0x18);
  uVar52 = (uint5)uVar7 & 0xffffffff00;
  uVar46 = CONCAT26((short)((ulonglong)uVar31 >> 0x30) - (short)((ulonglong)uVar22 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar31 >> 0x20) - (short)((ulonglong)uVar22 >> 0x20)
                             ,CONCAT22((short)((ulonglong)uVar31 >> 0x10) -
                                       (short)((ulonglong)uVar22 >> 0x10),
                                       (short)uVar31 - (short)uVar22)));
  uVar39 = psraw(uVar46,0xf);
  uVar41 = psubsw(uVar46 ^ uVar39,uVar39);
  uVar22 = *(undefined8 *)((int)param_4 + 0x34);
  uVar31 = psubusw(uVar31,uVar41);
  uVar6 = (ushort)(((uint7)bVar13 << 0x30) >> 0x28);
  sVar30 = (short)uVar31 * (short)uVar47;
  sVar35 = (short)((ulonglong)uVar31 >> 0x10) * (short)(uVar47 >> 0x10);
  sVar37 = (short)((ulonglong)uVar31 >> 0x20) * (short)(uVar47 >> 0x20);
  sVar38 = (short)((ulonglong)uVar31 >> 0x30) * (short)(uVar47 >> 0x30);
  uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar22 >> 0x18) << 0x30) >> 0x28);
  uVar31 = param_4[2];
  uVar2 = *(undefined4 *)(param_4 + 4);
  uVar46 = psraw(CONCAT26(((uVar6 >> 8) - (uVar5 >> 8)) +
                          ((short)(uVar40 >> 0x18) - (short)(uVar52 >> 0x18)) * 3 +
                          (short)((ulonglong)uVar31 >> 0x30),
                          CONCAT24(((short)(CONCAT25(uVar6,CONCAT14(uVar18,uVar15)) >> 0x20) -
                                   (short)CONCAT21(uVar5,(char)((ulonglong)uVar22 >> 0x10))) +
                                   ((short)(uVar40 >> 8) - (short)(uVar52 >> 8)) * 3 +
                                   (short)((ulonglong)uVar31 >> 0x20),
                                   CONCAT22(((ushort)bVar24 - (ushort)(byte)((ulonglong)uVar22 >> 8)
                                            ) + (((ushort)(CONCAT43(uVar8,CONCAT12(uVar44,uVar45))
                                                          >> 0x10) & 0xff) -
                                                ((ushort)(CONCAT43(uVar7,CONCAT12(uVar43,uVar12)) >>
                                                         0x10) & 0xff)) * 3 +
                                                (short)((ulonglong)uVar31 >> 0x10),
                                            ((ushort)bVar48 - ((ushort)uVar22 & 0xff)) +
                                            ((uVar45 & 0xff) - (ushort)bVar50) * 3 + (short)uVar31))
                         ),3);
  uVar42 = *(undefined4 *)((int)param_4 + 0x1c);
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                >> 0x20),uVar2) >> 0x18);
  uVar40 = (uint5)uVar7 & 0xffffffff00;
  sVar49 = ((ushort)uVar2 & 0xff) - sVar30;
  sVar51 = ((ushort)(CONCAT43(uVar7,CONCAT12((char)((uint)uVar2 >> 8),(ushort)uVar2)) >> 0x10) &
           0xff) - sVar35;
  sVar53 = (short)(uVar40 >> 8) - sVar37;
  sVar54 = (short)(uVar40 >> 0x18) - sVar38;
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar42 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar42 >> 0x10),uVar42)
                                         ) >> 0x20),uVar42) >> 0x18);
  uVar40 = (uint5)uVar7 & 0xffffffff00;
  sVar30 = ((ushort)uVar42 & 0xff) + sVar30;
  sVar35 = ((ushort)(CONCAT43(uVar7,CONCAT12((char)((uint)uVar42 >> 8),(ushort)uVar42)) >> 0x10) &
           0xff) + sVar35;
  sVar37 = (short)(uVar40 >> 8) + sVar37;
  sVar38 = (short)(uVar40 >> 0x18) + sVar38;
  uVar31 = *param_4;
  uVar39 = psraw(uVar46,0xf);
  uVar9 = CONCAT11((0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54),
                   (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38));
  *(ushort *)(param_2 + 1) =
       CONCAT11((0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49),
                (0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30));
  uVar22 = psubsw(uVar46 ^ uVar39,uVar39);
  *(ushort *)(param_2 + 1 + param_3) =
       CONCAT11((0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51),
                (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35));
  uVar39 = uVar39 | param_4[1];
  uVar46 = CONCAT26((short)((ulonglong)uVar31 >> 0x30) - (short)((ulonglong)uVar22 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar31 >> 0x20) - (short)((ulonglong)uVar22 >> 0x20)
                             ,CONCAT22((short)((ulonglong)uVar31 >> 0x10) -
                                       (short)((ulonglong)uVar22 >> 0x10),
                                       (short)uVar31 - (short)uVar22)));
  *(short *)(param_2 + 1 + param_3 * 2) =
       (short)CONCAT31(CONCAT21(uVar9,(0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 -
                                      (0xff < sVar53)),
                       (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37));
  uVar47 = psraw(uVar46,0xf);
  *(undefined2 *)(param_2 + 1 + iVar4) = uVar9;
  uVar22 = psubsw(uVar46 ^ uVar47,uVar47);
  uVar2 = *(undefined4 *)(param_4 + 6);
  uVar31 = psubusw(uVar31,uVar22);
  sVar30 = (short)uVar31 * (short)uVar39;
  sVar35 = (short)((ulonglong)uVar31 >> 0x10) * (short)(uVar39 >> 0x10);
  sVar37 = (short)((ulonglong)uVar31 >> 0x20) * (short)(uVar39 >> 0x20);
  sVar38 = (short)((ulonglong)uVar31 >> 0x30) * (short)(uVar39 >> 0x30);
  uVar42 = *(undefined4 *)((int)param_4 + 0x2c);
  uVar5 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
  param_2 = param_2 + param_3 * 4;
  uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar42 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar42 >> 0x10),uVar42)
                                         ) >> 0x20),uVar42) >> 0x18);
  uVar40 = (uint5)uVar7 & 0xffffffff00;
  sVar49 = ((ushort)uVar42 & 0xff) + sVar30;
  sVar51 = ((ushort)(CONCAT43(uVar7,CONCAT12((char)((uint)uVar42 >> 8),(ushort)uVar42)) >> 0x10) &
           0xff) + sVar35;
  sVar53 = (short)(uVar40 >> 8) + sVar37;
  sVar54 = (short)(uVar40 >> 0x18) + sVar38;
  sVar30 = (ushort)(byte)uVar2 - sVar30;
  sVar35 = (ushort)(byte)((uint)uVar2 >> 8) - sVar35;
  sVar37 = (short)(CONCAT25(uVar5,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20) - sVar37;
  sVar38 = (uVar5 >> 8) - sVar38;
  uVar9 = CONCAT11((0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38),
                   (0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54));
  *(ushort *)(param_2 + 1) =
       CONCAT11((0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30),
                (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49));
  *(ushort *)(param_2 + 1 + param_3) =
       CONCAT11((0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35),
                (0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51));
  *(short *)(param_2 + 1 + param_3 * 2) =
       (short)CONCAT31(CONCAT21(uVar9,(0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 -
                                      (0xff < sVar37)),
                       (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53));
  *(undefined2 *)(param_2 + 1 + iVar4) = uVar9;
  return;
}

