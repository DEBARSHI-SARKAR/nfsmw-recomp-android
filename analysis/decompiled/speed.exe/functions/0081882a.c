/* speed.exe 0081882a FUN_0081882a; analysis pseudocode, not buildable source.
 */

void FUN_0081882a(undefined4 param_1,undefined8 *param_2,ulonglong *param_3,
                 undefined1 (*param_4) [16],int param_5)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [16];
  
  pauVar1 = param_4 + 8;
  do {
    uVar2 = *param_3;
    auVar11._8_6_ = 0;
    auVar11._0_8_ = uVar2;
    auVar11[0xe] = (char)(uVar2 >> 0x38);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar2;
    auVar12[0xc] = (char)(uVar2 >> 0x30);
    auVar12._13_2_ = auVar11._13_2_;
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar2;
    auVar13._12_3_ = auVar12._12_3_;
    auVar14._8_2_ = 0;
    auVar14._0_8_ = uVar2;
    auVar14[10] = (char)(uVar2 >> 0x28);
    auVar14._11_4_ = auVar13._11_4_;
    auVar15._8_2_ = 0;
    auVar15._0_8_ = uVar2;
    auVar15._10_5_ = auVar14._10_5_;
    auVar16[8] = (char)(uVar2 >> 0x20);
    auVar16._0_8_ = uVar2;
    auVar16._9_6_ = auVar15._9_6_;
    auVar18._7_8_ = 0;
    auVar18._0_7_ = auVar16._8_7_;
    auVar19._1_8_ = SUB158(auVar18 << 0x40,7);
    auVar19[0] = (char)(uVar2 >> 0x18);
    auVar19._9_6_ = 0;
    auVar20._1_10_ = SUB1510(auVar19 << 0x30,5);
    auVar20[0] = (char)(uVar2 >> 0x10);
    auVar20._11_4_ = 0;
    auVar17[2] = (char)(uVar2 >> 8);
    auVar17._0_2_ = (ushort)uVar2;
    auVar17._3_12_ = SUB1512(auVar20 << 0x20,3);
    auVar21._0_2_ = (ushort)uVar2 & 0xff;
    auVar21._2_13_ = auVar17._2_13_;
    auVar21[0xf] = 0;
    param_3 = (ulonglong *)((int)param_3 + param_5);
    auVar21 = paddsw(auVar21,*param_4);
    param_4 = param_4 + 1;
    sVar3 = auVar21._0_2_;
    sVar4 = auVar21._2_2_;
    sVar5 = auVar21._4_2_;
    sVar6 = auVar21._6_2_;
    sVar7 = auVar21._8_2_;
    sVar8 = auVar21._10_2_;
    sVar9 = auVar21._12_2_;
    sVar10 = auVar21._14_2_;
    *param_2 = CONCAT17((0 < sVar10) * (sVar10 < 0x100) * auVar21[0xe] - (0xff < sVar10),
                        CONCAT16((0 < sVar9) * (sVar9 < 0x100) * auVar21[0xc] - (0xff < sVar9),
                                 CONCAT15((0 < sVar8) * (sVar8 < 0x100) * auVar21[10] -
                                          (0xff < sVar8),
                                          CONCAT14((0 < sVar7) * (sVar7 < 0x100) * auVar21[8] -
                                                   (0xff < sVar7),
                                                   CONCAT13((0 < sVar6) * (sVar6 < 0x100) *
                                                            auVar21[6] - (0xff < sVar6),
                                                            CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                                                     auVar21[4] - (0xff < sVar5),
                                                                     CONCAT11((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              auVar21[2] -
                                                                              (0xff < sVar4),
                                                                              (0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              auVar21[0] -
                                                                              (0xff < sVar3))))))));
    param_2 = (undefined8 *)((int)param_2 + param_5);
  } while (param_4 < pauVar1);
  return;
}

