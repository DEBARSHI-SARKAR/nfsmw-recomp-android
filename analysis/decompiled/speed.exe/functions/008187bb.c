/* speed.exe 008187bb FUN_008187bb; analysis pseudocode, not buildable source.
 */

void FUN_008187bb(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

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
  int iVar11;
  undefined1 auVar12 [16];
  
  iVar11 = 8;
  do {
    auVar12 = *param_1;
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar12._0_13_;
    auVar1[0xe] = auVar12[7];
    auVar2[0xc] = auVar12[6];
    auVar2._0_12_ = auVar12._0_12_;
    auVar2._13_2_ = auVar1._13_2_;
    auVar3[0xb] = 0;
    auVar3._0_11_ = auVar12._0_11_;
    auVar3._12_3_ = auVar2._12_3_;
    auVar4[10] = auVar12[5];
    auVar4._0_10_ = auVar12._0_10_;
    auVar4._11_4_ = auVar3._11_4_;
    auVar5[9] = 0;
    auVar5._0_9_ = auVar12._0_9_;
    auVar5._10_5_ = auVar4._10_5_;
    auVar6[8] = auVar12[4];
    auVar6._0_8_ = auVar12._0_8_;
    auVar6._9_6_ = auVar5._9_6_;
    auVar8._7_8_ = 0;
    auVar8._0_7_ = auVar6._8_7_;
    auVar9._1_8_ = SUB158(auVar8 << 0x40,7);
    auVar9[0] = auVar12[3];
    auVar9._9_6_ = 0;
    auVar10._1_10_ = SUB1510(auVar9 << 0x30,5);
    auVar10[0] = auVar12[2];
    auVar10._11_4_ = 0;
    auVar7[2] = auVar12[1];
    auVar7._0_2_ = auVar12._0_2_;
    auVar7._3_12_ = SUB1512(auVar10 << 0x20,3);
    auVar12._0_2_ = auVar12._0_2_ & 0xff;
    auVar12._2_13_ = auVar7._2_13_;
    auVar12[0xf] = 0;
    *param_2 = auVar12;
    param_1 = (undefined1 (*) [16])(*param_1 + param_3);
    param_2 = param_2 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}

