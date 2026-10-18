/* speed.exe 00813db1 FUN_00813db1; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00813db1(int param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  char cVar11;
  char cVar13;
  char cVar15;
  char cVar17;
  char cVar19;
  char cVar21;
  char cVar23;
  ulonglong uVar10;
  undefined2 uVar25;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  ulonglong uVar27;
  char cVar35;
  char cVar36;
  char cVar38;
  char cVar40;
  char cVar42;
  char cVar44;
  char cVar46;
  char cVar48;
  undefined8 uVar50;
  undefined8 uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  byte bVar57;
  char cVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined8 uVar56;
  char cVar65;
  byte bVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  byte bVar70;
  char cVar71;
  byte bVar72;
  char cVar73;
  byte bVar74;
  char cVar75;
  byte bVar76;
  char cVar77;
  byte bVar78;
  ulonglong uVar64;
  byte bVar12;
  char cVar14;
  byte bVar16;
  byte bVar18;
  byte bVar20;
  byte bVar22;
  byte bVar24;
  undefined4 uVar26;
  byte bVar37;
  char cVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  
  iVar4 = -param_3;
  uVar51 = *param_2;
  uVar50 = *(undefined8 *)((int)param_2 + param_3 * -2);
  uVar55 = *(undefined8 *)((int)param_2 + iVar4);
  cVar9 = (char)uVar50 - (char)uVar55;
  bVar12 = (byte)((ulonglong)uVar50 >> 8);
  bVar57 = (byte)((ulonglong)uVar55 >> 8);
  cVar11 = bVar12 - bVar57;
  cVar14 = (char)((ulonglong)uVar50 >> 0x10);
  cVar58 = (char)((ulonglong)uVar55 >> 0x10);
  cVar13 = cVar14 - cVar58;
  bVar16 = (byte)((ulonglong)uVar50 >> 0x18);
  bVar59 = (byte)((ulonglong)uVar55 >> 0x18);
  cVar15 = bVar16 - bVar59;
  bVar18 = (byte)((ulonglong)uVar50 >> 0x20);
  bVar60 = (byte)((ulonglong)uVar55 >> 0x20);
  cVar17 = bVar18 - bVar60;
  bVar20 = (byte)((ulonglong)uVar50 >> 0x28);
  bVar61 = (byte)((ulonglong)uVar55 >> 0x28);
  cVar19 = bVar20 - bVar61;
  bVar22 = (byte)((ulonglong)uVar50 >> 0x30);
  bVar24 = (byte)((ulonglong)uVar50 >> 0x38);
  bVar62 = (byte)((ulonglong)uVar55 >> 0x30);
  cVar21 = bVar22 - bVar62;
  bVar63 = (byte)((ulonglong)uVar55 >> 0x38);
  cVar23 = bVar24 - bVar63;
  cVar28 = (char)((ulonglong)DAT_008c5a10 >> 8);
  cVar29 = (char)((ulonglong)DAT_008c5a10 >> 0x10);
  cVar30 = (char)((ulonglong)DAT_008c5a10 >> 0x18);
  cVar31 = (char)((ulonglong)DAT_008c5a10 >> 0x20);
  cVar32 = (char)((ulonglong)DAT_008c5a10 >> 0x28);
  cVar33 = (char)((ulonglong)DAT_008c5a10 >> 0x30);
  cVar34 = (char)((ulonglong)DAT_008c5a10 >> 0x38);
  cVar65 = (char)((ulonglong)DAT_008c5a50 >> 8);
  cVar67 = (char)((ulonglong)DAT_008c5a50 >> 0x10);
  cVar69 = (char)((ulonglong)DAT_008c5a50 >> 0x18);
  cVar71 = (char)((ulonglong)DAT_008c5a50 >> 0x20);
  cVar73 = (char)((ulonglong)DAT_008c5a50 >> 0x28);
  cVar75 = (char)((ulonglong)DAT_008c5a50 >> 0x30);
  cVar77 = (char)((ulonglong)DAT_008c5a50 >> 0x38);
  uVar56 = *(undefined8 *)((int)param_2 + param_3);
  cVar35 = (char)uVar51 - (char)uVar56;
  bVar37 = (byte)((ulonglong)uVar51 >> 8);
  bVar66 = (byte)((ulonglong)uVar56 >> 8);
  cVar36 = bVar37 - bVar66;
  cVar39 = (char)((ulonglong)uVar51 >> 0x10);
  cVar68 = (char)((ulonglong)uVar56 >> 0x10);
  cVar38 = cVar39 - cVar68;
  bVar41 = (byte)((ulonglong)uVar51 >> 0x18);
  bVar70 = (byte)((ulonglong)uVar56 >> 0x18);
  cVar40 = bVar41 - bVar70;
  bVar43 = (byte)((ulonglong)uVar51 >> 0x20);
  bVar72 = (byte)((ulonglong)uVar56 >> 0x20);
  cVar42 = bVar43 - bVar72;
  bVar45 = (byte)((ulonglong)uVar51 >> 0x28);
  bVar74 = (byte)((ulonglong)uVar56 >> 0x28);
  cVar44 = bVar45 - bVar74;
  bVar47 = (byte)((ulonglong)uVar51 >> 0x30);
  bVar49 = (byte)((ulonglong)uVar51 >> 0x38);
  bVar76 = (byte)((ulonglong)uVar56 >> 0x30);
  cVar46 = bVar47 - bVar76;
  bVar78 = (byte)((ulonglong)uVar56 >> 0x38);
  cVar48 = bVar49 - bVar78;
  uVar10 = CONCAT17(-(cVar77 < cVar23),
                    CONCAT16(-(cVar75 < cVar21),
                             CONCAT15(-(cVar73 < cVar19),
                                      CONCAT14(-(cVar71 < cVar17),
                                               CONCAT13(-(cVar69 < cVar15),
                                                        CONCAT12(-(cVar67 < cVar13),
                                                                 CONCAT11(-(cVar65 < cVar11),
                                                                          -((char)DAT_008c5a50 <
                                                                           cVar9)))))))) |
           CONCAT17(-(cVar23 < cVar34),
                    CONCAT16(-(cVar21 < cVar33),
                             CONCAT15(-(cVar19 < cVar32),
                                      CONCAT14(-(cVar17 < cVar31),
                                               CONCAT13(-(cVar15 < cVar30),
                                                        CONCAT12(-(cVar13 < cVar29),
                                                                 CONCAT11(-(cVar11 < cVar28),
                                                                          -(cVar9 < (char)
                                                  DAT_008c5a10)))))))) |
           CONCAT17(-(cVar77 < cVar48),
                    CONCAT16(-(cVar75 < cVar46),
                             CONCAT15(-(cVar73 < cVar44),
                                      CONCAT14(-(cVar71 < cVar42),
                                               CONCAT13(-(cVar69 < cVar40),
                                                        CONCAT12(-(cVar67 < cVar38),
                                                                 CONCAT11(-(cVar65 < cVar36),
                                                                          -((char)DAT_008c5a50 <
                                                                           cVar35)))))))) |
           CONCAT17(-(cVar48 < cVar34),
                    CONCAT16(-(cVar46 < cVar33),
                             CONCAT15(-(cVar44 < cVar32),
                                      CONCAT14(-(cVar42 < cVar31),
                                               CONCAT13(-(cVar40 < cVar30),
                                                        CONCAT12(-(cVar38 < cVar29),
                                                                 CONCAT11(-(cVar36 < cVar28),
                                                                          -(cVar35 < (char)
                                                  DAT_008c5a10))))))));
  uVar5 = (ushort)(((uint7)bVar59 << 0x30) >> 0x28);
  uVar6 = (ushort)(((uint7)bVar41 << 0x30) >> 0x28);
  uVar7 = (ushort)(((uint7)bVar16 << 0x30) >> 0x28);
  uVar8 = (ushort)(((uint7)bVar70 << 0x30) >> 0x28);
  uVar27 = psraw((ulonglong)
                 CONCAT61((int6)(((ulonglong)
                                  CONCAT41((int)(((ulonglong)
                                                  CONCAT21((short)(((uVar10 >> 0x18) << 0x38) >>
                                                                  0x30),(char)(uVar10 >> 0x10)) <<
                                                 0x28) >> 0x20),(char)(uVar10 >> 8)) << 0x18) >>
                                0x10),(char)uVar10) << 8,8);
  uVar64 = psraw(CONCAT17((char)(uVar10 >> 0x38),
                          (uint7)CONCAT14((char)(uVar10 >> 0x30),
                                          (uint)CONCAT12((char)(uVar10 >> 0x28),
                                                         (ushort)(byte)(uVar10 >> 0x20))) << 8),8);
  uVar27 = CONCAT26((uVar7 >> 8) - (uVar8 >> 8),
                    CONCAT24((short)CONCAT21(uVar7,cVar14) - (short)CONCAT21(uVar8,cVar68),
                             CONCAT22((ushort)bVar12 - (ushort)bVar66,
                                      ((ushort)uVar50 & 0xff) - ((ushort)uVar56 & 0xff)))) & uVar27;
  uVar64 = CONCAT26((ushort)bVar24 - (ushort)bVar78,
                    CONCAT24((ushort)bVar22 - (ushort)bVar76,
                             CONCAT22((ushort)bVar20 - (ushort)bVar74,
                                      (ushort)bVar18 - (ushort)bVar72))) & uVar64;
  sVar1 = (short)((ulonglong)DAT_008c5a20 >> 0x10);
  sVar2 = (short)((ulonglong)DAT_008c5a20 >> 0x20);
  sVar3 = (short)((ulonglong)DAT_008c5a20 >> 0x30);
  uVar27 = psraw(CONCAT26(((uVar6 >> 8) - (uVar5 >> 8)) * 3 + (short)(uVar27 >> 0x30) + sVar3,
                          CONCAT24(((short)CONCAT21(uVar6,cVar39) - (short)CONCAT21(uVar5,cVar58)) *
                                   3 + (short)(uVar27 >> 0x20) + sVar2,
                                   CONCAT22(((ushort)bVar37 - (ushort)bVar57) * 3 +
                                            (short)(uVar27 >> 0x10) + sVar1,
                                            (((ushort)uVar51 & 0xff) - ((ushort)uVar55 & 0xff)) * 3
                                            + (short)uVar27 + (short)DAT_008c5a20))),3);
  uVar52 = psraw(CONCAT26((short)(uVar64 >> 0x30) + ((ushort)bVar49 - (ushort)bVar63) * 3 + sVar3,
                          CONCAT24((short)(uVar64 >> 0x20) + ((ushort)bVar47 - (ushort)bVar62) * 3 +
                                   sVar2,CONCAT22((short)(uVar64 >> 0x10) +
                                                  ((ushort)bVar45 - (ushort)bVar61) * 3 + sVar1,
                                                  (short)uVar64 +
                                                  ((ushort)bVar43 - (ushort)bVar60) * 3 +
                                                  (short)DAT_008c5a20))),3);
  uVar25 = (undefined2)*(undefined4 *)(DAT_009c67ec + *(int *)(param_1 + 0xc) * 4);
  uVar26 = CONCAT22(uVar25,uVar25);
  uVar51 = CONCAT44(uVar26,uVar26);
  uVar64 = psraw(uVar27,0xf);
  uVar53 = psraw(uVar52,0xf);
  uVar50 = psubsw(uVar27 ^ uVar64,uVar64);
  uVar56 = psubsw(uVar52 ^ uVar53,uVar53);
  uVar64 = uVar64 | _DAT_008c5a30;
  uVar53 = uVar53 | _DAT_008c5a30;
  uVar27 = psubusw(uVar51,uVar50);
  uVar52 = psubusw(uVar50,uVar51);
  uVar50 = psubusw(uVar51,uVar52 | uVar27);
  uVar55 = CONCAT26((short)(uVar64 >> 0x30) * (short)((ulonglong)uVar50 >> 0x30),
                    CONCAT24((short)(uVar64 >> 0x20) * (short)((ulonglong)uVar50 >> 0x20),
                             CONCAT22((short)(uVar64 >> 0x10) * (short)((ulonglong)uVar50 >> 0x10),
                                      (short)uVar64 * (short)uVar50)));
  uVar27 = psubusw(uVar51,uVar56);
  uVar64 = psubusw(uVar56,uVar51);
  uVar51 = psubusw(uVar51,uVar64 | uVar27);
  uVar54 = CONCAT26((short)(uVar53 >> 0x30) * (short)((ulonglong)uVar51 >> 0x30),
                    CONCAT24((short)(uVar53 >> 0x20) * (short)((ulonglong)uVar51 >> 0x20),
                             CONCAT22((short)(uVar53 >> 0x10) * (short)((ulonglong)uVar51 >> 0x10),
                                      (short)uVar53 * (short)uVar51)));
  uVar51 = *(undefined8 *)((int)param_2 + iVar4);
  uVar56 = packsswb(uVar55,uVar54);
  uVar50 = *param_2;
  cVar9 = (char)DAT_008c5a60;
  cVar11 = (char)((ulonglong)DAT_008c5a60 >> 8);
  cVar14 = (char)((ulonglong)DAT_008c5a60 >> 0x10);
  cVar13 = (char)((ulonglong)DAT_008c5a60 >> 0x18);
  cVar15 = (char)((ulonglong)DAT_008c5a60 >> 0x20);
  cVar17 = (char)((ulonglong)DAT_008c5a60 >> 0x28);
  cVar19 = (char)((ulonglong)DAT_008c5a60 >> 0x30);
  cVar21 = (char)((ulonglong)DAT_008c5a60 >> 0x38);
  uVar51 = paddsb(CONCAT17((char)((ulonglong)uVar51 >> 0x38) - cVar21,
                           CONCAT16((char)((ulonglong)uVar51 >> 0x30) - cVar19,
                                    CONCAT15((char)((ulonglong)uVar51 >> 0x28) - cVar17,
                                             CONCAT14((char)((ulonglong)uVar51 >> 0x20) - cVar15,
                                                      CONCAT13((char)((ulonglong)uVar51 >> 0x18) -
                                                               cVar13,CONCAT12((char)((ulonglong)
                                                                                      uVar51 >> 0x10
                                                                                     ) - cVar14,
                                                                               CONCAT11((char)((
                                                  ulonglong)uVar51 >> 8) - cVar11,
                                                  (char)uVar51 - cVar9))))))),uVar56);
  uVar56 = psubsb(CONCAT17((char)((ulonglong)uVar50 >> 0x38) - cVar21,
                           CONCAT16((char)((ulonglong)uVar50 >> 0x30) - cVar19,
                                    CONCAT15((char)((ulonglong)uVar50 >> 0x28) - cVar17,
                                             CONCAT14((char)((ulonglong)uVar50 >> 0x20) - cVar15,
                                                      CONCAT13((char)((ulonglong)uVar50 >> 0x18) -
                                                               cVar13,CONCAT12((char)((ulonglong)
                                                                                      uVar50 >> 0x10
                                                                                     ) - cVar14,
                                                                               CONCAT11((char)((
                                                  ulonglong)uVar50 >> 8) - cVar11,
                                                  (char)uVar50 - cVar9))))))),uVar56);
  *(ulonglong *)((int)param_2 + iVar4) =
       CONCAT17((char)((ulonglong)uVar51 >> 0x38) + cVar21,
                CONCAT16((char)((ulonglong)uVar51 >> 0x30) + cVar19,
                         CONCAT15((char)((ulonglong)uVar51 >> 0x28) + cVar17,
                                  CONCAT14((char)((ulonglong)uVar51 >> 0x20) + cVar15,
                                           CONCAT13((char)((ulonglong)uVar51 >> 0x18) + cVar13,
                                                    CONCAT12((char)((ulonglong)uVar51 >> 0x10) +
                                                             cVar14,CONCAT11((char)((ulonglong)
                                                                                    uVar51 >> 8) +
                                                                             cVar11,(char)uVar51 +
                                                                                    cVar9)))))));
  uVar50 = psraw(uVar55,1);
  uVar55 = psraw(uVar54,1);
  *param_2 = CONCAT17((char)((ulonglong)uVar56 >> 0x38) + cVar21,
                      CONCAT16((char)((ulonglong)uVar56 >> 0x30) + cVar19,
                               CONCAT15((char)((ulonglong)uVar56 >> 0x28) + cVar17,
                                        CONCAT14((char)((ulonglong)uVar56 >> 0x20) + cVar15,
                                                 CONCAT13((char)((ulonglong)uVar56 >> 0x18) + cVar13
                                                          ,CONCAT12((char)((ulonglong)uVar56 >> 0x10
                                                                          ) + cVar14,
                                                                    CONCAT11((char)((ulonglong)
                                                                                    uVar56 >> 8) +
                                                                             cVar11,(char)uVar56 +
                                                                                    cVar9)))))));
  uVar51 = *(undefined8 *)((int)param_2 + param_3 * -2);
  uVar27 = packsswb(uVar50,uVar55);
  uVar50 = *(undefined8 *)((int)param_2 + param_3);
  uVar51 = paddsb(CONCAT17((char)((ulonglong)uVar51 >> 0x38) - cVar21,
                           CONCAT16((char)((ulonglong)uVar51 >> 0x30) - cVar19,
                                    CONCAT15((char)((ulonglong)uVar51 >> 0x28) - cVar17,
                                             CONCAT14((char)((ulonglong)uVar51 >> 0x20) - cVar15,
                                                      CONCAT13((char)((ulonglong)uVar51 >> 0x18) -
                                                               cVar13,CONCAT12((char)((ulonglong)
                                                                                      uVar51 >> 0x10
                                                                                     ) - cVar14,
                                                                               CONCAT11((char)((
                                                  ulonglong)uVar51 >> 8) - cVar11,
                                                  (char)uVar51 - cVar9))))))),~uVar10 & uVar27);
  *(ulonglong *)((int)param_2 + param_3 * -2) =
       CONCAT17((char)((ulonglong)uVar51 >> 0x38) + cVar21,
                CONCAT16((char)((ulonglong)uVar51 >> 0x30) + cVar19,
                         CONCAT15((char)((ulonglong)uVar51 >> 0x28) + cVar17,
                                  CONCAT14((char)((ulonglong)uVar51 >> 0x20) + cVar15,
                                           CONCAT13((char)((ulonglong)uVar51 >> 0x18) + cVar13,
                                                    CONCAT12((char)((ulonglong)uVar51 >> 0x10) +
                                                             cVar14,CONCAT11((char)((ulonglong)
                                                                                    uVar51 >> 8) +
                                                                             cVar11,(char)uVar51 +
                                                                                    cVar9)))))));
  uVar51 = psubsb(CONCAT17((char)((ulonglong)uVar50 >> 0x38) - cVar21,
                           CONCAT16((char)((ulonglong)uVar50 >> 0x30) - cVar19,
                                    CONCAT15((char)((ulonglong)uVar50 >> 0x28) - cVar17,
                                             CONCAT14((char)((ulonglong)uVar50 >> 0x20) - cVar15,
                                                      CONCAT13((char)((ulonglong)uVar50 >> 0x18) -
                                                               cVar13,CONCAT12((char)((ulonglong)
                                                                                      uVar50 >> 0x10
                                                                                     ) - cVar14,
                                                                               CONCAT11((char)((
                                                  ulonglong)uVar50 >> 8) - cVar11,
                                                  (char)uVar50 - cVar9))))))),~uVar10 & uVar27);
  *(ulonglong *)((int)param_2 + param_3) =
       CONCAT17((char)((ulonglong)uVar51 >> 0x38) + cVar21,
                CONCAT16((char)((ulonglong)uVar51 >> 0x30) + cVar19,
                         CONCAT15((char)((ulonglong)uVar51 >> 0x28) + cVar17,
                                  CONCAT14((char)((ulonglong)uVar51 >> 0x20) + cVar15,
                                           CONCAT13((char)((ulonglong)uVar51 >> 0x18) + cVar13,
                                                    CONCAT12((char)((ulonglong)uVar51 >> 0x10) +
                                                             cVar14,CONCAT11((char)((ulonglong)
                                                                                    uVar51 >> 8) +
                                                                             cVar11,(char)uVar51 +
                                                                                    cVar9)))))));
  return;
}

