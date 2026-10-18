/* speed.exe 006d2840 FUN_006d2840; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c83a0 FUN_006c83a0
 * calls 006e2f50 FUN_006e2f50
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d2840(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uStack_1cc;
  int *piStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 uStack_1b0;
  int *piStack_1ac;
  int iStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  int *piStack_198;
  int iStack_194;
  float *pfStack_190;
  undefined4 uStack_18c;
  int *piStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  float *apfStack_178 [2];
  int *piStack_170;
  int iStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  int *piStack_158;
  int *piStack_154;
  undefined1 *puStack_150;
  float afStack_9c [20];
  int iStack_4c;
  undefined4 uStack_34;
  int iStack_30;
  float *pfStack_2c;
  undefined1 local_20 [24];
  float *pfStack_8;
  
  puStack_150 = local_20;
  piStack_154 = param_1;
  piStack_158 = (int *)0x6d285f;
  (**(code **)(*param_1 + 0x30))();
  piStack_158 = param_1;
  iVar6 = 0;
  uStack_15c = 0;
  piStack_160 = DAT_00982bdc;
  uStack_164 = 0x6d2871;
  (**(code **)(*DAT_00982bdc + 0x94))();
  uStack_164 = 0;
  piStack_168 = DAT_00982bdc;
  iStack_16c = 0x6d2880;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  piVar4 = DAT_0093dea4;
  afStack_9c[0] = _DAT_0089096c - pfStack_8[3] * _DAT_00890968;
  afStack_9c[1] = -*pfStack_8;
  afStack_9c[2] = _DAT_0089096c - pfStack_8[3];
  afStack_9c[3] = *pfStack_8 * _DAT_00890e94;
  afStack_9c[4] = _DAT_0089096c - (pfStack_8[3] + pfStack_8[3]);
  afStack_9c[5] = *pfStack_8 * _DAT_008af9f0;
  DAT_00982c80 = DAT_0093dea4;
  afStack_9c[6] = _DAT_0089096c - pfStack_8[3] * _DAT_008959e4;
  iStack_16c = 0x6d2a7b;
  (**(code **)(*DAT_0093dea4 + 4))();
  iStack_16c = piVar4[0x13];
  piStack_170 = DAT_00982bdc;
  apfStack_178[1] = (float *)0x6d2a8d;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_17c = (int *)piVar4[0x12];
  apfStack_178[1] = (float *)0x0;
  apfStack_178[0] = afStack_9c + 5;
  uStack_180 = 0x6d2aa2;
  (**(code **)(*piStack_17c + 0xfc))();
  piStack_188 = (int *)DAT_0093dea4[0x12];
  uStack_184 = *(undefined4 *)(DAT_0093dea4[0x11] + 0x18c);
  uStack_180 = 0xf;
  uStack_18c = 0x6d2abd;
  (**(code **)(*piStack_188 + 0x68))();
  apfStack_178[0] = (float *)0x1f;
  apfStack_178[1] = (float *)0x20;
  piStack_170 = (int *)0x21;
  iStack_16c = 0x22;
  iVar5 = iStack_30;
  if (0 < iStack_30) {
    pfVar7 = afStack_9c + 1;
    do {
      uStack_18c = uStack_34;
      pfStack_190 = *(float **)(piVar4[0x11] + 0x24 + (int)apfStack_178[iVar6] * 0x28);
      iStack_194 = piVar4[0x12];
      piStack_198 = (int *)0x6d2b26;
      (**(code **)(*(int *)piVar4[0x12] + 0xd0))();
      fVar1 = pfStack_2c[1];
      fVar2 = pfStack_2c[2];
      pfVar7[-1] = *pfStack_2c;
      fVar3 = pfStack_2c[3];
      *pfVar7 = fVar1;
      iVar5 = iStack_30;
      pfVar7[1] = fVar2;
      pfVar7[2] = fVar3;
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar6 < iVar5);
  }
  if (iVar5 < 4) {
    pfVar7 = afStack_9c + iVar5 * 4 + 1;
    do {
      pfStack_190 = *(float **)(piVar4[0x11] + 0x24 + (int)apfStack_178[iVar5] * 0x28);
      iStack_194 = piVar4[0x12];
      uStack_18c = 0;
      piStack_198 = (int *)0x6d2b7f;
      (**(code **)(*(int *)piVar4[0x12] + 0xd0))();
      pfVar7[-1] = 0.0;
      *pfVar7 = 0.0;
      pfVar7[1] = 0.0;
      pfVar7[2] = 0.0;
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar5 < 4);
  }
  piStack_198 = (int *)piVar4[0x12];
  uStack_18c = 4;
  pfStack_190 = afStack_9c;
  iStack_194 = *(undefined4 *)(piVar4[0x11] + 0x59c);
  uStack_19c = 0x6d2bb3;
  (**(code **)(*piStack_198 + 0x90))();
  uStack_19c = 6;
  piStack_1a0 = (int *)0x5;
  piStack_1a4 = (int *)0x0;
  iStack_1a8 = 0x6d2bbd;
  FUN_006c6810();
  iStack_1a8 = 0;
  piStack_1ac = (int *)0x0;
  uStack_1b0 = 0x6d2bc4;
  FUN_006c67c0();
  uStack_19c = 0x6d2bcc;
  FUN_006c83a0();
  uStack_19c = DAT_008f9ad0;
  DAT_00982ca0 = 0;
  piStack_1a0 = DAT_00982bdc;
  piStack_1a4 = (int *)0x6d2be7;
  (**(code **)(*DAT_00982bdc + 0x164))();
  piStack_1a4 = (int *)DAT_00982c80[0x12];
  iStack_1a8 = 0x6d2bf8;
  (**(code **)(*piStack_1a4 + 0x104))();
  piStack_1ac = (int *)piVar4[0x12];
  iStack_1a8 = iStack_4c + -1;
  uStack_1b0 = 0x6d2c0d;
  (**(code **)(*piStack_1ac + 0x100))();
  uStack_1b0 = 0x30;
  puStack_1b4 = &uStack_184;
  uStack_1b8 = 2;
  uStack_1bc = 6;
  piStack_1c0 = DAT_00982bdc;
  piStack_1c4 = (int *)0x6d2c26;
  (**(code **)(*DAT_00982bdc + 0x14c))();
  piStack_1c4 = (int *)piVar4[0x12];
  piStack_1c8 = (int *)0x6d2c32;
  (**(code **)(*piStack_1c4 + 0x108))();
  piStack_1c8 = (int *)0x6d2c39;
  (**(code **)(*piVar4 + 8))();
  piStack_1c8 = (int *)piVar4[0x12];
  uStack_1cc = 0x6d2c45;
  (**(code **)(*piStack_1c8 + 0x10c))();
  iVar5 = DAT_00982a20;
  DAT_00982c80 = (int *)0x0;
  uStack_1cc = 0x6d2c56;
  FUN_006e2f50();
  uStack_1cc = *(undefined4 *)(iVar5 + 8);
  (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0);
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,*(undefined4 *)(iVar5 + 0xc));
  piStack_1c4 = *(int **)(iVar5 + 0x14);
  piStack_1c0 = *(int **)(iVar5 + 0x18);
  uStack_1cc = 0;
  piStack_1c8 = (int *)0x0;
  uStack_1bc = 0;
  uStack_1b8 = 0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&uStack_1cc);
  DAT_00982a20 = iVar5;
  DAT_00982c80 = (int *)0x0;
  return;
}

