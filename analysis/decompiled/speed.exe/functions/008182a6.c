/* speed.exe 008182a6 FUN_008182a6; analysis pseudocode, not buildable source.
 */

void FUN_008182a6(undefined1 (*param_1) [16],undefined8 *param_2,int param_3,undefined4 param_4,
                 int param_5,int param_6,short *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
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
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  undefined1 auVar32 [15];
  unkuint9 Var33;
  undefined1 auVar34 [11];
  undefined1 auVar35 [15];
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined8 in_MM0;
  undefined8 in_MM3;
  undefined1 auVar42 [16];
  
  sVar16 = *param_7;
  sVar17 = param_7[1];
  sVar18 = param_7[2];
  sVar19 = param_7[3];
  sVar20 = param_7[4];
  sVar21 = param_7[5];
  sVar22 = param_7[6];
  sVar23 = param_7[7];
  sVar24 = param_7[8];
  sVar25 = param_7[9];
  sVar26 = param_7[10];
  sVar27 = param_7[0xb];
  sVar28 = param_7[0xc];
  sVar29 = param_7[0xd];
  sVar30 = param_7[0xe];
  sVar31 = param_7[0xf];
  do {
    auVar42 = *param_1;
    auVar2[0xd] = 0;
    auVar2._0_13_ = auVar42._0_13_;
    auVar2[0xe] = auVar42[7];
    auVar4[0xc] = auVar42[6];
    auVar4._0_12_ = auVar42._0_12_;
    auVar4._13_2_ = auVar2._13_2_;
    auVar6[0xb] = 0;
    auVar6._0_11_ = auVar42._0_11_;
    auVar6._12_3_ = auVar4._12_3_;
    auVar8[10] = auVar42[5];
    auVar8._0_10_ = auVar42._0_10_;
    auVar8._11_4_ = auVar6._11_4_;
    auVar10[9] = 0;
    auVar10._0_9_ = auVar42._0_9_;
    auVar10._10_5_ = auVar8._10_5_;
    auVar12[8] = auVar42[4];
    auVar12._0_8_ = auVar42._0_8_;
    auVar12._9_6_ = auVar10._9_6_;
    auVar32._7_8_ = 0;
    auVar32._0_7_ = auVar12._8_7_;
    Var33 = CONCAT81(SUB158(auVar32 << 0x40,7),auVar42[3]);
    auVar38._9_6_ = 0;
    auVar38._0_9_ = Var33;
    auVar34._1_10_ = SUB1510(auVar38 << 0x30,5);
    auVar34[0] = auVar42[2];
    auVar39._11_4_ = 0;
    auVar39._0_11_ = auVar34;
    auVar14[2] = auVar42[1];
    auVar14._0_2_ = auVar42._0_2_;
    auVar14._3_12_ = SUB1512(auVar39 << 0x20,3);
    auVar1 = *(undefined1 (*) [16])(*param_1 + param_3);
    auVar3[0xd] = 0;
    auVar3._0_13_ = auVar1._0_13_;
    auVar3[0xe] = auVar1[7];
    auVar5[0xc] = auVar1[6];
    auVar5._0_12_ = auVar1._0_12_;
    auVar5._13_2_ = auVar3._13_2_;
    auVar7[0xb] = 0;
    auVar7._0_11_ = auVar1._0_11_;
    auVar7._12_3_ = auVar5._12_3_;
    auVar9[10] = auVar1[5];
    auVar9._0_10_ = auVar1._0_10_;
    auVar9._11_4_ = auVar7._11_4_;
    auVar11[9] = 0;
    auVar11._0_9_ = auVar1._0_9_;
    auVar11._10_5_ = auVar9._10_5_;
    auVar13[8] = auVar1[4];
    auVar13._0_8_ = auVar1._0_8_;
    auVar13._9_6_ = auVar11._9_6_;
    auVar35._7_8_ = 0;
    auVar35._0_7_ = auVar13._8_7_;
    Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),auVar1[3]);
    auVar40._9_6_ = 0;
    auVar40._0_9_ = Var36;
    auVar37._1_10_ = SUB1510(auVar40 << 0x30,5);
    auVar37[0] = auVar1[2];
    auVar41._11_4_ = 0;
    auVar41._0_11_ = auVar37;
    auVar15[2] = auVar1[1];
    auVar15._0_2_ = auVar1._0_2_;
    auVar15._3_12_ = SUB1512(auVar41 << 0x20,3);
    auVar42._0_2_ =
         (auVar42._0_2_ & 0xff) * sVar16 + (auVar1._0_2_ & 0xff) * sVar24 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760;
    auVar42._2_2_ =
         auVar14._2_2_ * sVar17 + auVar15._2_2_ * sVar25 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760._2_2_;
    auVar42._4_2_ =
         auVar34._0_2_ * sVar18 + auVar37._0_2_ * sVar26 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764;
    auVar42._6_2_ =
         (short)Var33 * sVar19 + (short)Var36 * sVar27 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764._2_2_;
    auVar42._8_2_ =
         auVar12._8_2_ * sVar20 + auVar13._8_2_ * sVar28 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768;
    auVar42._10_2_ =
         auVar8._10_2_ * sVar21 + auVar9._10_2_ * sVar29 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768._2_2_;
    auVar42._12_2_ =
         auVar4._12_2_ * sVar22 + auVar5._12_2_ * sVar30 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c;
    auVar42._14_2_ =
         (auVar2._13_2_ >> 8) * sVar23 + (auVar3._13_2_ >> 8) * sVar31 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c._2_2_;
    psraw(auVar42,7);
    in_MM3 = movdq2q(in_MM3,(undefined1  [16])0x0);
    *param_2 = in_MM0;
    param_1 = (undefined1 (*) [16])(*param_1 + param_3);
    param_2 = (undefined8 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

