/* speed.exe 00818240 FUN_00818240; analysis pseudocode, not buildable source.
 */

void FUN_00818240(undefined1 (*param_1) [16],undefined8 *param_2,int param_3,undefined4 param_4,
                 int param_5,int param_6,short *param_7)

{
  undefined1 auVar1 [15];
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
  short sVar15;
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
  undefined1 auVar31 [15];
  unkuint9 Var32;
  undefined1 auVar33 [11];
  undefined1 auVar34 [15];
  unkuint9 Var35;
  undefined1 auVar36 [11];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined8 in_MM0;
  undefined8 in_MM3;
  undefined1 auVar41 [16];
  
  sVar15 = *param_7;
  sVar16 = param_7[1];
  sVar17 = param_7[2];
  sVar18 = param_7[3];
  sVar19 = param_7[4];
  sVar20 = param_7[5];
  sVar21 = param_7[6];
  sVar22 = param_7[7];
  sVar23 = param_7[8];
  sVar24 = param_7[9];
  sVar25 = param_7[10];
  sVar26 = param_7[0xb];
  sVar27 = param_7[0xc];
  sVar28 = param_7[0xd];
  sVar29 = param_7[0xe];
  sVar30 = param_7[0xf];
  do {
    auVar41 = *param_1;
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar41._0_13_;
    auVar1[0xe] = auVar41[7];
    auVar3[0xc] = auVar41[6];
    auVar3._0_12_ = auVar41._0_12_;
    auVar3._13_2_ = auVar1._13_2_;
    auVar5[0xb] = 0;
    auVar5._0_11_ = auVar41._0_11_;
    auVar5._12_3_ = auVar3._12_3_;
    auVar7[10] = auVar41[5];
    auVar7._0_10_ = auVar41._0_10_;
    auVar7._11_4_ = auVar5._11_4_;
    auVar9[9] = 0;
    auVar9._0_9_ = auVar41._0_9_;
    auVar9._10_5_ = auVar7._10_5_;
    auVar11[8] = auVar41[4];
    auVar11._0_8_ = auVar41._0_8_;
    auVar11._9_6_ = auVar9._9_6_;
    auVar31._7_8_ = 0;
    auVar31._0_7_ = auVar11._8_7_;
    Var32 = CONCAT81(SUB158(auVar31 << 0x40,7),auVar41[3]);
    auVar37._9_6_ = 0;
    auVar37._0_9_ = Var32;
    auVar33._1_10_ = SUB1510(auVar37 << 0x30,5);
    auVar33[0] = auVar41[2];
    auVar38._11_4_ = 0;
    auVar38._0_11_ = auVar33;
    auVar13[2] = auVar41[1];
    auVar13._0_2_ = auVar41._0_2_;
    auVar13._3_12_ = SUB1512(auVar38 << 0x20,3);
    auVar2[0xd] = 0;
    auVar2._0_13_ = auVar41._1_13_;
    auVar2[0xe] = auVar41[8];
    auVar4[0xc] = auVar41[7];
    auVar4._0_12_ = auVar41._1_12_;
    auVar4._13_2_ = auVar2._13_2_;
    auVar6[0xb] = 0;
    auVar6._0_11_ = auVar41._1_11_;
    auVar6._12_3_ = auVar4._12_3_;
    auVar8[10] = auVar41[6];
    auVar8._0_10_ = auVar41._1_10_;
    auVar8._11_4_ = auVar6._11_4_;
    auVar10[9] = 0;
    auVar10._0_9_ = auVar41._1_9_;
    auVar10._10_5_ = auVar8._10_5_;
    auVar12[8] = auVar41[5];
    auVar12._0_8_ = auVar41._1_8_;
    auVar12._9_6_ = auVar10._9_6_;
    auVar34._7_8_ = 0;
    auVar34._0_7_ = auVar12._8_7_;
    Var35 = CONCAT81(SUB158(auVar34 << 0x40,7),auVar41[4]);
    auVar39._9_6_ = 0;
    auVar39._0_9_ = Var35;
    auVar36._1_10_ = SUB1510(auVar39 << 0x30,5);
    auVar36[0] = auVar41[3];
    auVar40._11_4_ = 0;
    auVar40._0_11_ = auVar36;
    auVar14[2] = auVar41[2];
    auVar14._0_2_ = auVar41._1_2_;
    auVar14._3_12_ = SUB1512(auVar40 << 0x20,3);
    auVar41._0_2_ =
         (auVar41._0_2_ & 0xff) * sVar15 + (auVar41._1_2_ & 0xff) * sVar23 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760;
    auVar41._2_2_ =
         auVar13._2_2_ * sVar16 + auVar14._2_2_ * sVar24 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760._2_2_;
    auVar41._4_2_ =
         auVar33._0_2_ * sVar17 + auVar36._0_2_ * sVar25 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764;
    auVar41._6_2_ =
         (short)Var32 * sVar18 + (short)Var35 * sVar26 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764._2_2_;
    auVar41._8_2_ =
         auVar11._8_2_ * sVar19 + auVar12._8_2_ * sVar27 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768;
    auVar41._10_2_ =
         auVar7._10_2_ * sVar20 + auVar8._10_2_ * sVar28 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768._2_2_;
    auVar41._12_2_ =
         auVar3._12_2_ * sVar21 + auVar4._12_2_ * sVar29 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c;
    auVar41._14_2_ =
         (auVar1._13_2_ >> 8) * sVar22 + (auVar2._13_2_ >> 8) * sVar30 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c._2_2_;
    psraw(auVar41,7);
    in_MM3 = movdq2q(in_MM3,(undefined1  [16])0x0);
    *param_2 = in_MM0;
    param_1 = (undefined1 (*) [16])(*param_1 + param_3);
    param_2 = (undefined8 *)((int)param_2 + param_6);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

