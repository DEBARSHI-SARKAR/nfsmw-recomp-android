/* speed.exe 008128fe FUN_008128fe; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008128fe(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
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
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  unkuint9 Var32;
  undefined1 auVar33 [11];
  undefined1 auVar34 [13];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  unkuint9 Var37;
  undefined1 auVar38 [11];
  undefined1 auVar39 [13];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  uint uVar46;
  int iVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  puVar48 = param_1;
  puVar49 = param_2;
  for (uVar46 = param_3 >> 2; uVar46 != 0; uVar46 = uVar46 - 1) {
    *puVar49 = *puVar48;
    puVar48 = puVar48 + 1;
    puVar49 = puVar49 + 1;
  }
  for (uVar46 = param_3 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
    *(undefined1 *)puVar49 = *(undefined1 *)puVar48;
    puVar48 = (undefined4 *)((int)puVar48 + 1);
    puVar49 = (undefined4 *)((int)puVar49 + 1);
  }
  if (1 < param_4 + -1) {
    param_4 = param_4 + -2;
    do {
      param_2 = (undefined4 *)((int)param_2 + param_5);
      iVar47 = 0;
      do {
        uVar1 = *(ulonglong *)((int)param_1 + iVar47);
        uVar2 = *(ulonglong *)((int)param_1 + iVar47 + param_5);
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar1;
        auVar14[0xe] = (char)(uVar1 >> 0x38);
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar1;
        auVar17[0xc] = (char)(uVar1 >> 0x30);
        auVar17._13_2_ = auVar14._13_2_;
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20._12_3_ = auVar17._12_3_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar1;
        auVar23[10] = (char)(uVar1 >> 0x28);
        auVar23._11_4_ = auVar20._11_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar1;
        auVar26._10_5_ = auVar23._10_5_;
        auVar29[8] = (char)(uVar1 >> 0x20);
        auVar29._0_8_ = uVar1;
        auVar29._9_6_ = auVar26._9_6_;
        auVar31._7_8_ = 0;
        auVar31._0_7_ = auVar29._8_7_;
        Var32 = CONCAT81(SUB158(auVar31 << 0x40,7),(char)(uVar1 >> 0x18));
        auVar40._9_6_ = 0;
        auVar40._0_9_ = Var32;
        auVar33._1_10_ = SUB1510(auVar40 << 0x30,5);
        auVar33[0] = (char)(uVar1 >> 0x10);
        auVar41._11_4_ = 0;
        auVar41._0_11_ = auVar33;
        auVar34._1_12_ = SUB1512(auVar41 << 0x20,3);
        auVar34[0] = (char)(uVar1 >> 8);
        uVar3 = *(ulonglong *)((int)param_1 + iVar47 + param_5 * 2);
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar2;
        auVar12[0xe] = (char)(uVar2 >> 0x38);
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15[0xc] = (char)(uVar2 >> 0x30);
        auVar15._13_2_ = auVar12._13_2_;
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18._12_3_ = auVar15._12_3_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar2;
        auVar21[10] = (char)(uVar2 >> 0x28);
        auVar21._11_4_ = auVar18._11_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24._10_5_ = auVar21._10_5_;
        auVar27[8] = (char)(uVar2 >> 0x20);
        auVar27._0_8_ = uVar2;
        auVar27._9_6_ = auVar24._9_6_;
        auVar35._7_8_ = 0;
        auVar35._0_7_ = auVar27._8_7_;
        auVar42._1_8_ = SUB158(auVar35 << 0x40,7);
        auVar42[0] = (char)(uVar2 >> 0x18);
        auVar42._9_6_ = 0;
        auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
        auVar43[0] = (char)(uVar2 >> 0x10);
        auVar43._11_4_ = 0;
        auVar30[2] = (char)(uVar2 >> 8);
        auVar30._0_2_ = (ushort)uVar2;
        auVar30._3_12_ = SUB1512(auVar43 << 0x20,3);
        auVar51._0_2_ = (ushort)uVar2 & 0xff;
        auVar51._2_13_ = auVar30._2_13_;
        auVar51[0xf] = 0;
        auVar51 = psllw(auVar51,1);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar3;
        auVar13[0xe] = (char)(uVar3 >> 0x38);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar3;
        auVar16[0xc] = (char)(uVar3 >> 0x30);
        auVar16._13_2_ = auVar13._13_2_;
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar3;
        auVar19._12_3_ = auVar16._12_3_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar3;
        auVar22[10] = (char)(uVar3 >> 0x28);
        auVar22._11_4_ = auVar19._11_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar3;
        auVar25._10_5_ = auVar22._10_5_;
        auVar28[8] = (char)(uVar3 >> 0x20);
        auVar28._0_8_ = uVar3;
        auVar28._9_6_ = auVar25._9_6_;
        auVar36._7_8_ = 0;
        auVar36._0_7_ = auVar28._8_7_;
        Var37 = CONCAT81(SUB158(auVar36 << 0x40,7),(char)(uVar3 >> 0x18));
        auVar44._9_6_ = 0;
        auVar44._0_9_ = Var37;
        auVar38._1_10_ = SUB1510(auVar44 << 0x30,5);
        auVar38[0] = (char)(uVar3 >> 0x10);
        auVar45._11_4_ = 0;
        auVar45._0_11_ = auVar38;
        auVar39._1_12_ = SUB1512(auVar45 << 0x20,3);
        auVar39[0] = (char)(uVar3 >> 8);
        auVar50._0_2_ = (ushort)(byte)uVar1 + _DAT_0090b390 + auVar51._0_2_ + (ushort)(byte)uVar3;
        auVar50._2_2_ = auVar34._0_2_ + sRam0090b392 + auVar51._2_2_ + auVar39._0_2_;
        auVar50._4_2_ = auVar33._0_2_ + sRam0090b394 + auVar51._4_2_ + auVar38._0_2_;
        auVar50._6_2_ = (short)Var32 + sRam0090b396 + auVar51._6_2_ + (short)Var37;
        auVar50._8_2_ = auVar29._8_2_ + sRam0090b398 + auVar51._8_2_ + auVar28._8_2_;
        auVar50._10_2_ = auVar23._10_2_ + sRam0090b39a + auVar51._10_2_ + auVar22._10_2_;
        auVar50._12_2_ = auVar17._12_2_ + sRam0090b39c + auVar51._12_2_ + auVar16._12_2_;
        auVar50._14_2_ =
             (auVar14._13_2_ >> 8) + sRam0090b39e + auVar51._14_2_ + (auVar13._13_2_ >> 8);
        auVar50 = psraw(auVar50,2);
        sVar4 = auVar50._0_2_;
        sVar5 = auVar50._2_2_;
        sVar6 = auVar50._4_2_;
        sVar7 = auVar50._6_2_;
        sVar8 = auVar50._8_2_;
        sVar9 = auVar50._10_2_;
        sVar10 = auVar50._12_2_;
        sVar11 = auVar50._14_2_;
        *(ulonglong *)((int)param_2 + iVar47) =
             CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar50[0xe] - (0xff < sVar11),
                      CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar50[0xc] - (0xff < sVar10),
                               CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar50[10] - (0xff < sVar9)
                                        ,CONCAT14((0 < sVar8) * (sVar8 < 0x100) * auVar50[8] -
                                                  (0xff < sVar8),
                                                  CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                           auVar50[6] - (0xff < sVar7),
                                                           CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                    auVar50[4] - (0xff < sVar6),
                                                                    CONCAT11((0 < sVar5) *
                                                                             (sVar5 < 0x100) *
                                                                             auVar50[2] -
                                                                             (0xff < sVar5),
                                                                             (0 < sVar4) *
                                                                             (sVar4 < 0x100) *
                                                                             auVar50[0] -
                                                                             (0xff < sVar4))))))));
        iVar47 = iVar47 + 8;
      } while (iVar47 < (int)param_3);
      param_1 = (undefined4 *)((int)param_1 + param_5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  puVar48 = (undefined4 *)((int)param_1 + param_5);
  puVar49 = (undefined4 *)((int)param_2 + param_5);
  for (uVar46 = param_3 >> 2; uVar46 != 0; uVar46 = uVar46 - 1) {
    *puVar49 = *puVar48;
    puVar48 = puVar48 + 1;
    puVar49 = puVar49 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar49 = *(undefined1 *)puVar48;
    puVar48 = (undefined4 *)((int)puVar48 + 1);
    puVar49 = (undefined4 *)((int)puVar49 + 1);
  }
  return;
}

