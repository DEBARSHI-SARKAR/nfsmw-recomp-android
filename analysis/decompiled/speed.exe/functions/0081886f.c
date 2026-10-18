/* speed.exe 0081886f FUN_0081886f; analysis pseudocode, not buildable source.
 */

void FUN_0081886f(undefined4 param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
                 short *param_5,int param_6)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  unkuint9 Var19;
  undefined1 auVar20 [11];
  undefined1 auVar21 [15];
  unkuint9 Var22;
  undefined1 auVar23 [11];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  
  psVar1 = param_5 + 0x40;
  do {
    uVar2 = *param_3;
    uVar3 = *param_4;
    auVar4._8_6_ = 0;
    auVar4._0_8_ = uVar2;
    auVar4[0xe] = (char)(uVar2 >> 0x38);
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar2;
    auVar6[0xc] = (char)(uVar2 >> 0x30);
    auVar6._13_2_ = auVar4._13_2_;
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar2;
    auVar8._12_3_ = auVar6._12_3_;
    auVar10._8_2_ = 0;
    auVar10._0_8_ = uVar2;
    auVar10[10] = (char)(uVar2 >> 0x28);
    auVar10._11_4_ = auVar8._11_4_;
    auVar12._8_2_ = 0;
    auVar12._0_8_ = uVar2;
    auVar12._10_5_ = auVar10._10_5_;
    auVar14[8] = (char)(uVar2 >> 0x20);
    auVar14._0_8_ = uVar2;
    auVar14._9_6_ = auVar12._9_6_;
    auVar18._7_8_ = 0;
    auVar18._0_7_ = auVar14._8_7_;
    Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar24._9_6_ = 0;
    auVar24._0_9_ = Var19;
    auVar20._1_10_ = SUB1510(auVar24 << 0x30,5);
    auVar20[0] = (char)(uVar2 >> 0x10);
    auVar25._11_4_ = 0;
    auVar25._0_11_ = auVar20;
    auVar16[2] = (char)(uVar2 >> 8);
    auVar16._0_2_ = (ushort)uVar2;
    auVar16._3_12_ = SUB1512(auVar25 << 0x20,3);
    auVar5._8_6_ = 0;
    auVar5._0_8_ = uVar3;
    auVar5[0xe] = (char)(uVar3 >> 0x38);
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar3;
    auVar7[0xc] = (char)(uVar3 >> 0x30);
    auVar7._13_2_ = auVar5._13_2_;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar3;
    auVar9._12_3_ = auVar7._12_3_;
    auVar11._8_2_ = 0;
    auVar11._0_8_ = uVar3;
    auVar11[10] = (char)(uVar3 >> 0x28);
    auVar11._11_4_ = auVar9._11_4_;
    auVar13._8_2_ = 0;
    auVar13._0_8_ = uVar3;
    auVar13._10_5_ = auVar11._10_5_;
    auVar15[8] = (char)(uVar3 >> 0x20);
    auVar15._0_8_ = uVar3;
    auVar15._9_6_ = auVar13._9_6_;
    auVar21._7_8_ = 0;
    auVar21._0_7_ = auVar15._8_7_;
    Var22 = CONCAT81(SUB158(auVar21 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar26._9_6_ = 0;
    auVar26._0_9_ = Var22;
    auVar23._1_10_ = SUB1510(auVar26 << 0x30,5);
    auVar23[0] = (char)(uVar3 >> 0x10);
    auVar27._11_4_ = 0;
    auVar27._0_11_ = auVar23;
    auVar17[2] = (char)(uVar3 >> 8);
    auVar17._0_2_ = (ushort)uVar3;
    auVar17._3_12_ = SUB1512(auVar27 << 0x20,3);
    sVar28 = ((ushort)(((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) >> 1) + *param_5;
    sVar29 = ((ushort)(auVar16._2_2_ + auVar17._2_2_) >> 1) + param_5[1];
    sVar30 = ((ushort)(auVar20._0_2_ + auVar23._0_2_) >> 1) + param_5[2];
    sVar31 = ((ushort)((short)Var19 + (short)Var22) >> 1) + param_5[3];
    sVar32 = ((ushort)(auVar14._8_2_ + auVar15._8_2_) >> 1) + param_5[4];
    sVar33 = ((ushort)(auVar10._10_2_ + auVar11._10_2_) >> 1) + param_5[5];
    sVar34 = ((ushort)(auVar6._12_2_ + auVar7._12_2_) >> 1) + param_5[6];
    sVar35 = ((ushort)((auVar4._13_2_ >> 8) + (auVar5._13_2_ >> 8)) >> 1) + param_5[7];
    param_5 = param_5 + 8;
    param_3 = (ulonglong *)((int)param_3 + param_6);
    param_4 = (ulonglong *)((int)param_4 + param_6);
    *param_2 = CONCAT17((0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35),
                        CONCAT16((0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34),
                                 CONCAT15((0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 -
                                          (0xff < sVar33),
                                          CONCAT14((0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 -
                                                   (0xff < sVar32),
                                                   CONCAT13((0 < sVar31) * (sVar31 < 0x100) *
                                                            (char)sVar31 - (0xff < sVar31),
                                                            CONCAT12((0 < sVar30) * (sVar30 < 0x100)
                                                                     * (char)sVar30 -
                                                                     (0xff < sVar30),
                                                                     CONCAT11((0 < sVar29) *
                                                                              (sVar29 < 0x100) *
                                                                              (char)sVar29 -
                                                                              (0xff < sVar29),
                                                                              (0 < sVar28) *
                                                                              (sVar28 < 0x100) *
                                                                              (char)sVar28 -
                                                                              (0xff < sVar28))))))))
    ;
    param_2 = (undefined8 *)((int)param_2 + param_6);
  } while (param_5 < psVar1);
  return;
}

