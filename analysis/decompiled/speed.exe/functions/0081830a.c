/* speed.exe 0081830a FUN_0081830a; analysis pseudocode, not buildable source.
 */

void FUN_0081830a(undefined1 (*param_1) [16],undefined8 *param_2,int param_3,short *param_4,
                 short *param_5)

{
  undefined8 *puVar1;
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
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  undefined1 auVar46 [15];
  unkuint9 Var47;
  undefined1 auVar48 [11];
  undefined1 auVar49 [15];
  unkuint9 Var50;
  undefined1 auVar51 [11];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [15];
  undefined1 auVar55 [11];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined8 in_MM0;
  undefined8 in_MM6;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  undefined1 auVar74 [16];
  
  puVar1 = param_2 + 8;
  sVar30 = *param_4;
  sVar31 = param_4[1];
  sVar32 = param_4[2];
  sVar33 = param_4[3];
  sVar34 = param_4[4];
  sVar35 = param_4[5];
  sVar36 = param_4[6];
  sVar37 = param_4[7];
  sVar38 = param_4[8];
  sVar39 = param_4[9];
  sVar40 = param_4[10];
  sVar41 = param_4[0xb];
  sVar42 = param_4[0xc];
  sVar43 = param_4[0xd];
  sVar44 = param_4[0xe];
  sVar45 = param_4[0xf];
  auVar64 = *param_1;
  auVar2[0xd] = 0;
  auVar2._0_13_ = auVar64._0_13_;
  auVar2[0xe] = auVar64[7];
  auVar6[0xc] = auVar64[6];
  auVar6._0_12_ = auVar64._0_12_;
  auVar6._13_2_ = auVar2._13_2_;
  auVar10[0xb] = 0;
  auVar10._0_11_ = auVar64._0_11_;
  auVar10._12_3_ = auVar6._12_3_;
  auVar14[10] = auVar64[5];
  auVar14._0_10_ = auVar64._0_10_;
  auVar14._11_4_ = auVar10._11_4_;
  auVar18[9] = 0;
  auVar18._0_9_ = auVar64._0_9_;
  auVar18._10_5_ = auVar14._10_5_;
  auVar22[8] = auVar64[4];
  auVar22._0_8_ = auVar64._0_8_;
  auVar22._9_6_ = auVar18._9_6_;
  auVar46._7_8_ = 0;
  auVar46._0_7_ = auVar22._8_7_;
  Var47 = CONCAT81(SUB158(auVar46 << 0x40,7),auVar64[3]);
  auVar56._9_6_ = 0;
  auVar56._0_9_ = Var47;
  auVar48._1_10_ = SUB1510(auVar56 << 0x30,5);
  auVar48[0] = auVar64[2];
  auVar57._11_4_ = 0;
  auVar57._0_11_ = auVar48;
  auVar26[2] = auVar64[1];
  auVar26._0_2_ = auVar64._0_2_;
  auVar26._3_12_ = SUB1512(auVar57 << 0x20,3);
  auVar3[0xd] = 0;
  auVar3._0_13_ = auVar64._1_13_;
  auVar3[0xe] = auVar64[8];
  auVar7[0xc] = auVar64[7];
  auVar7._0_12_ = auVar64._1_12_;
  auVar7._13_2_ = auVar3._13_2_;
  auVar11[0xb] = 0;
  auVar11._0_11_ = auVar64._1_11_;
  auVar11._12_3_ = auVar7._12_3_;
  auVar15[10] = auVar64[6];
  auVar15._0_10_ = auVar64._1_10_;
  auVar15._11_4_ = auVar11._11_4_;
  auVar19[9] = 0;
  auVar19._0_9_ = auVar64._1_9_;
  auVar19._10_5_ = auVar15._10_5_;
  auVar23[8] = auVar64[5];
  auVar23._0_8_ = auVar64._1_8_;
  auVar23._9_6_ = auVar19._9_6_;
  auVar49._7_8_ = 0;
  auVar49._0_7_ = auVar23._8_7_;
  Var50 = CONCAT81(SUB158(auVar49 << 0x40,7),auVar64[4]);
  auVar58._9_6_ = 0;
  auVar58._0_9_ = Var50;
  auVar51._1_10_ = SUB1510(auVar58 << 0x30,5);
  auVar51[0] = auVar64[3];
  auVar59._11_4_ = 0;
  auVar59._0_11_ = auVar51;
  auVar27[2] = auVar64[2];
  auVar27._0_2_ = auVar64._1_2_;
  auVar27._3_12_ = SUB1512(auVar59 << 0x20,3);
  auVar64._0_2_ =
       (auVar64._0_2_ & 0xff) * sVar30 + (auVar64._1_2_ & 0xff) * sVar38 +
       (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760;
  auVar64._2_2_ =
       auVar26._2_2_ * sVar31 + auVar27._2_2_ * sVar39 +
       PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760._2_2_;
  auVar64._4_2_ =
       auVar48._0_2_ * sVar32 + auVar51._0_2_ * sVar40 +
       (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764;
  auVar64._6_2_ =
       (short)Var47 * sVar33 + (short)Var50 * sVar41 +
       PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764._2_2_;
  auVar64._8_2_ =
       auVar22._8_2_ * sVar34 + auVar23._8_2_ * sVar42 +
       (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768;
  auVar64._10_2_ =
       auVar14._10_2_ * sVar35 + auVar15._10_2_ * sVar43 +
       PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768._2_2_;
  auVar64._12_2_ =
       auVar6._12_2_ * sVar36 + auVar7._12_2_ * sVar44 +
       (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c;
  auVar64._14_2_ =
       (auVar2._13_2_ >> 8) * sVar37 + (auVar3._13_2_ >> 8) * sVar45 +
       PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c._2_2_;
  auVar64 = psraw(auVar64,7);
  do {
    param_1 = (undefined1 (*) [16])(*param_1 + param_3);
    sVar66 = auVar64._0_2_;
    sVar67 = auVar64._2_2_;
    sVar68 = auVar64._4_2_;
    sVar69 = auVar64._6_2_;
    sVar70 = auVar64._8_2_;
    sVar71 = auVar64._10_2_;
    sVar72 = auVar64._12_2_;
    sVar73 = auVar64._14_2_;
    auVar64 = *param_1;
    auVar4[0xd] = 0;
    auVar4._0_13_ = auVar64._0_13_;
    auVar4[0xe] = auVar64[7];
    auVar8[0xc] = auVar64[6];
    auVar8._0_12_ = auVar64._0_12_;
    auVar8._13_2_ = auVar4._13_2_;
    auVar12[0xb] = 0;
    auVar12._0_11_ = auVar64._0_11_;
    auVar12._12_3_ = auVar8._12_3_;
    auVar16[10] = auVar64[5];
    auVar16._0_10_ = auVar64._0_10_;
    auVar16._11_4_ = auVar12._11_4_;
    auVar20[9] = 0;
    auVar20._0_9_ = auVar64._0_9_;
    auVar20._10_5_ = auVar16._10_5_;
    auVar24[8] = auVar64[4];
    auVar24._0_8_ = auVar64._0_8_;
    auVar24._9_6_ = auVar20._9_6_;
    auVar52._7_8_ = 0;
    auVar52._0_7_ = auVar24._8_7_;
    Var47 = CONCAT81(SUB158(auVar52 << 0x40,7),auVar64[3]);
    auVar60._9_6_ = 0;
    auVar60._0_9_ = Var47;
    auVar53._1_10_ = SUB1510(auVar60 << 0x30,5);
    auVar53[0] = auVar64[2];
    auVar61._11_4_ = 0;
    auVar61._0_11_ = auVar53;
    auVar28[2] = auVar64[1];
    auVar28._0_2_ = auVar64._0_2_;
    auVar28._3_12_ = SUB1512(auVar61 << 0x20,3);
    auVar5[0xd] = 0;
    auVar5._0_13_ = auVar64._1_13_;
    auVar5[0xe] = auVar64[8];
    auVar9[0xc] = auVar64[7];
    auVar9._0_12_ = auVar64._1_12_;
    auVar9._13_2_ = auVar5._13_2_;
    auVar13[0xb] = 0;
    auVar13._0_11_ = auVar64._1_11_;
    auVar13._12_3_ = auVar9._12_3_;
    auVar17[10] = auVar64[6];
    auVar17._0_10_ = auVar64._1_10_;
    auVar17._11_4_ = auVar13._11_4_;
    auVar21[9] = 0;
    auVar21._0_9_ = auVar64._1_9_;
    auVar21._10_5_ = auVar17._10_5_;
    auVar25[8] = auVar64[5];
    auVar25._0_8_ = auVar64._1_8_;
    auVar25._9_6_ = auVar21._9_6_;
    auVar54._7_8_ = 0;
    auVar54._0_7_ = auVar25._8_7_;
    Var50 = CONCAT81(SUB158(auVar54 << 0x40,7),auVar64[4]);
    auVar62._9_6_ = 0;
    auVar62._0_9_ = Var50;
    auVar55._1_10_ = SUB1510(auVar62 << 0x30,5);
    auVar55[0] = auVar64[3];
    auVar63._11_4_ = 0;
    auVar63._0_11_ = auVar55;
    auVar29[2] = auVar64[2];
    auVar29._0_2_ = auVar64._1_2_;
    auVar29._3_12_ = SUB1512(auVar63 << 0x20,3);
    auVar65._0_2_ =
         (auVar64._0_2_ & 0xff) * sVar30 + (auVar64._1_2_ & 0xff) * sVar38 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760;
    auVar65._2_2_ =
         auVar28._2_2_ * sVar31 + auVar29._2_2_ * sVar39 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760._2_2_;
    auVar65._4_2_ =
         auVar53._0_2_ * sVar32 + auVar55._0_2_ * sVar40 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764;
    auVar65._6_2_ =
         (short)Var47 * sVar33 + (short)Var50 * sVar41 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764._2_2_;
    auVar65._8_2_ =
         auVar24._8_2_ * sVar34 + auVar25._8_2_ * sVar42 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768;
    auVar65._10_2_ =
         auVar16._10_2_ * sVar35 + auVar17._10_2_ * sVar43 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768._2_2_;
    auVar65._12_2_ =
         auVar8._12_2_ * sVar36 + auVar9._12_2_ * sVar44 +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c;
    auVar65._14_2_ =
         (auVar4._13_2_ >> 8) * sVar37 + (auVar5._13_2_ >> 8) * sVar45 +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c._2_2_;
    auVar64 = psraw(auVar65,7);
    auVar74._0_2_ =
         sVar66 * *param_5 + auVar64._0_2_ * param_5[8] +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760;
    auVar74._2_2_ =
         sVar67 * param_5[1] + auVar64._2_2_ * param_5[9] +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b760._2_2_;
    auVar74._4_2_ =
         sVar68 * param_5[2] + auVar64._4_2_ * param_5[10] +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764;
    auVar74._6_2_ =
         sVar69 * param_5[3] + auVar64._6_2_ * param_5[0xb] +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b764._2_2_;
    auVar74._8_2_ =
         sVar70 * param_5[4] + auVar64._8_2_ * param_5[0xc] +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768;
    auVar74._10_2_ =
         sVar71 * param_5[5] + auVar64._10_2_ * param_5[0xd] +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b768._2_2_;
    auVar74._12_2_ =
         sVar72 * param_5[6] + auVar64._12_2_ * param_5[0xe] +
         (short)PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c;
    auVar74._14_2_ =
         sVar73 * param_5[7] + auVar64._14_2_ * param_5[0xf] +
         PTR_IMAGE_DOS_HEADER_00400000_e_program_0__0090b76c._2_2_;
    psraw(auVar74,7);
    in_MM6 = movdq2q(in_MM6,(undefined1  [16])0x0);
    *param_2 = in_MM0;
    param_2 = param_2 + 1;
  } while (param_2 != puVar1);
  return;
}

