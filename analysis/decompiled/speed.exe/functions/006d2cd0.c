/* speed.exe 006d2cd0 FUN_006d2cd0; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c83a0 FUN_006c83a0
 * calls 006e2f50 FUN_006e2f50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d2cd0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piStack_1ec;
  int *piStack_1e8;
  int *piStack_1e4;
  undefined4 uStack_1e0;
  float *pfStack_1dc;
  int **ppiStack_1d8;
  int *piStack_1d4;
  int *piStack_1d0;
  float *pfStack_1cc;
  undefined4 uStack_1c8;
  int *piStack_1c4;
  undefined4 uStack_1c0;
  undefined1 *puStack_1bc;
  int *piStack_1b8;
  int iStack_1b4;
  int *piStack_1b0;
  int **ppiStack_1ac;
  int iStack_1a8;
  int *piStack_1a4;
  int iStack_1a0;
  int *piStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  int *piStack_188;
  float fStack_184;
  int *piStack_180;
  float fStack_17c;
  int *piStack_178;
  int *piStack_174;
  undefined1 *puStack_170;
  float afStack_158 [7];
  float fStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float afStack_128 [7];
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float afStack_f8 [7];
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a4 [12];
  int iStack_98;
  int iStack_94;
  float afStack_90 [4];
  undefined1 local_80 [56];
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_14;
  
  puStack_170 = local_80;
  piStack_174 = param_1;
  piStack_178 = (int *)0x6d2ced;
  (**(code **)(*param_1 + 0x30))();
  piStack_178 = param_1;
  iVar7 = 0;
  fStack_17c = 0.0;
  piStack_180 = DAT_00982bdc;
  fStack_184 = 1.002621e-38;
  (**(code **)(*DAT_00982bdc + 0x94))();
  fStack_184 = 0.0;
  piStack_188 = DAT_00982bdc;
  fStack_18c = 1.0026232e-38;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  piStack_194 = (int *)DAT_0093dea4[0x12];
  uStack_190 = *(undefined4 *)(DAT_0093dea4[0x11] + 0x18c);
  if (DAT_00982c51 == '\0') {
    fStack_18c = 2.10195e-44;
  }
  else {
    fStack_18c = 1.12104e-44;
  }
  (**(code **)(*piStack_194 + 0x68))();
  piVar1 = DAT_0093dea8;
  piVar8 = DAT_0093dea4;
  fVar2 = (float)(int)afStack_90[0];
  uStack_138 = 0x3f800000;
  uStack_134 = 0x3f800000;
  uStack_130 = 0;
  uStack_12c = 0xffffffff;
  uStack_108 = 0x3f800000;
  uStack_104 = 0xbf800000;
  uStack_100 = 0;
  uStack_fc = 0xffffffff;
  uStack_d8 = 0xbf800000;
  uStack_d4 = 0xbf800000;
  uStack_d0 = 0;
  uStack_cc = 0xffffffff;
  if ((int)afStack_90[0] < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  piStack_188 = (int *)(_DAT_00891068 / fVar2);
  fVar2 = (float)(int)afStack_90[1];
  if ((int)afStack_90[1] < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  afStack_158[0] = -(float)piStack_188;
  afStack_158[1] = -(_DAT_00891068 / fVar2);
  afStack_128[0] = _DAT_0089096c - (float)piStack_188;
  fStack_18c = _DAT_0089096c - _DAT_00891068 / fVar2;
  afStack_158[2] = afStack_158[0];
  afStack_158[3] = afStack_158[1];
  afStack_158[4] = afStack_158[0];
  afStack_158[5] = afStack_158[1];
  afStack_158[6] = afStack_158[0];
  fStack_13c = afStack_158[1];
  afStack_128[1] = afStack_158[1];
  afStack_128[2] = afStack_128[0];
  afStack_128[3] = afStack_158[1];
  afStack_128[4] = afStack_128[0];
  afStack_128[5] = afStack_158[1];
  afStack_128[6] = afStack_128[0];
  fStack_10c = afStack_158[1];
  afStack_f8[0] = afStack_128[0];
  afStack_f8[1] = fStack_18c;
  afStack_f8[2] = afStack_128[0];
  afStack_f8[3] = fStack_18c;
  afStack_f8[4] = afStack_128[0];
  afStack_f8[5] = fStack_18c;
  afStack_f8[6] = afStack_128[0];
  fStack_dc = fStack_18c;
  fStack_c8 = afStack_158[0];
  fStack_c4 = fStack_18c;
  fStack_c0 = afStack_158[0];
  fStack_bc = fStack_18c;
  fStack_b8 = afStack_158[0];
  fStack_b4 = fStack_18c;
  fStack_b0 = afStack_158[0];
  fStack_ac = fStack_18c;
  if (iStack_14 == 1) {
    DAT_00982c80 = DAT_0093dea8;
    iStack_1a0 = 0x6d2f31;
    (**(code **)(*DAT_0093dea8 + 4))();
    iStack_1a0 = piVar1[0x13];
    piStack_1a4 = DAT_00982bdc;
    iStack_1a8 = 0x6d2f43;
    (**(code **)(*DAT_00982bdc + 0x15c))();
    piStack_1b0 = (int *)piVar1[0x12];
    iStack_1a8 = 0;
    ppiStack_1ac = &piStack_194;
    iStack_1b4 = 0x6d2f55;
    (**(code **)(*piStack_1b0 + 0xfc))();
    piStack_1b8 = (int *)piVar1[0x12];
    iStack_1b4 = 0;
    puStack_1bc = (undefined1 *)0x6d2f62;
    (**(code **)(*piStack_1b8 + 0x100))();
    iVar6 = iStack_38;
    piVar8 = piVar1;
  }
  else {
    DAT_00982c80 = DAT_0093dea4;
    iVar6 = *DAT_0093dea4;
    if (iStack_14 == 2) {
      iStack_1a0 = 0x6d2f86;
      (**(code **)(iVar6 + 4))();
      iStack_1a0 = piVar8[0x13];
      piStack_1a4 = DAT_00982bdc;
      iStack_1a8 = 0x6d2f98;
      (**(code **)(*DAT_00982bdc + 0x15c))();
      piStack_1b0 = (int *)piVar8[0x12];
      iStack_1a8 = 0;
      ppiStack_1ac = &piStack_194;
      iStack_1b4 = 0x6d2faa;
      (**(code **)(*piStack_1b0 + 0xfc))();
      piStack_1b8 = (int *)piVar8[0x12];
      iStack_1b4 = 4;
      puStack_1bc = (undefined1 *)0x6d2fb8;
      (**(code **)(*piStack_1b8 + 0x100))();
      iVar6 = iStack_38;
    }
    else if (iStack_14 == 3) {
      iStack_1a0 = 0x6d2fcc;
      (**(code **)(iVar6 + 4))();
      iStack_1a0 = piVar8[0x13];
      piStack_1a4 = DAT_00982bdc;
      iStack_1a8 = 0x6d2fde;
      (**(code **)(*DAT_00982bdc + 0x15c))();
      piStack_1b0 = (int *)piVar8[0x12];
      iStack_1a8 = 0;
      ppiStack_1ac = &piStack_194;
      iStack_1b4 = 0x6d2ff0;
      (**(code **)(*piStack_1b0 + 0xfc))();
      piStack_1b8 = (int *)piVar8[0x12];
      iStack_1b4 = 5;
      puStack_1bc = (undefined1 *)0x6d2ffe;
      (**(code **)(*piStack_1b8 + 0x100))();
      iVar6 = iStack_38;
    }
    else {
      iStack_1a0 = 0x6d300a;
      (**(code **)(iVar6 + 4))();
      iStack_1a0 = piVar8[0x13];
      piStack_1a4 = DAT_00982bdc;
      iStack_1a8 = 0x6d301c;
      (**(code **)(*DAT_00982bdc + 0x15c))();
      piStack_1b0 = (int *)piVar8[0x12];
      iStack_1a8 = 0;
      ppiStack_1ac = &piStack_194;
      iStack_1b4 = 0x6d302e;
      (**(code **)(*piStack_1b0 + 0xfc))();
      piStack_1b8 = (int *)piVar8[0x12];
      iStack_1b4 = iStack_30 + -1;
      puStack_1bc = (undefined1 *)0x6d3045;
      (**(code **)(*piStack_1b8 + 0x100))();
      iVar6 = iStack_30;
    }
  }
  puStack_1bc = auStack_a4;
  uStack_1c0 = 0;
  piStack_1c4 = piStack_3c;
  uStack_1c8 = 0x6d305b;
  (**(code **)(*piStack_3c + 0x44))();
  fVar2 = (float)iStack_98;
  if (iStack_98 < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  piStack_1b0 = (int *)(_DAT_0089096c / fVar2);
  fVar2 = (float)iStack_94;
  if (iStack_94 < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  ppiStack_1ac = (int **)(_DAT_0089096c / fVar2);
  iStack_1a8 = 0x1f;
  piStack_1a4 = (int *)0x20;
  iStack_1a0 = 0x21;
  if (0 < iVar6) {
    pfVar4 = afStack_90 + 1;
    pfVar5 = (float *)(iStack_40 + 8);
    do {
      uStack_1c8 = uStack_48;
      pfStack_1cc = *(float **)(piVar8[0x11] + 0x24 + (&iStack_1a8)[iVar7] * 0x28);
      piStack_1d0 = (int *)piVar8[0x12];
      piStack_1d4 = (int *)0x6d3106;
      (**(code **)(*(int *)piVar8[0x12] + 0xd0))();
      fVar3 = (float)piStack_1b0 * pfVar5[-1];
      fVar2 = pfVar5[-2];
      *pfVar4 = fVar2;
      iVar6 = iStack_44;
      piVar1 = (&piStack_180)[iVar7 * 2];
      pfVar4[-1] = fVar2;
      pfVar4[1] = fVar2;
      (&piStack_180)[iVar7 * 2] = (int *)(fVar3 + (float)piVar1);
      pfVar4[2] = fVar2;
      iVar7 = iVar7 + 1;
      fVar2 = (float)ppiStack_1ac * *pfVar5;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 3;
      (&fStack_184)[iVar7 * 2] = fVar2 + (&fStack_184)[iVar7 * 2];
      afStack_158[iVar7 * 2] = fVar3 + afStack_158[iVar7 * 2];
      afStack_158[iVar7 * 2 + 1] = fVar2 + afStack_158[iVar7 * 2 + 1];
      afStack_128[iVar7 * 2] = fVar3 + afStack_128[iVar7 * 2];
      afStack_128[iVar7 * 2 + 1] = fVar2 + afStack_128[iVar7 * 2 + 1];
      afStack_f8[iVar7 * 2] = fVar3 + afStack_f8[iVar7 * 2];
      afStack_f8[iVar7 * 2 + 1] = fVar2 + afStack_f8[iVar7 * 2 + 1];
    } while (iVar7 < iVar6);
  }
  if (iVar6 < 4) {
    pfVar4 = afStack_90 + iVar6 * 4 + 1;
    do {
      piStack_1d0 = (int *)piVar8[0x12];
      uStack_1c8 = 0;
      pfStack_1cc = *(float **)(piVar8[0x11] + 0x24 + (&iStack_1a8)[iVar6] * 0x28);
      piStack_1d4 = (int *)0x6d31d3;
      (**(code **)(*piStack_1d0 + 0xd0))();
      pfVar4[-1] = 0.0;
      *pfVar4 = 0.0;
      pfVar4[1] = 0.0;
      pfVar4[2] = 0.0;
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar6 < 4);
  }
  piStack_1d4 = (int *)piVar8[0x12];
  uStack_1c8 = 4;
  pfStack_1cc = afStack_90;
  piStack_1d0 = *(int **)(piVar8[0x11] + 0x59c);
  ppiStack_1d8 = (int **)0x6d3209;
  (**(code **)(*piStack_1d4 + 0x90))();
  if (piVar8[1] != 0xc) goto LAB_006d32c7;
  piStack_1d4 = *(int **)(piVar8[0x11] + 0x9fc);
  ppiStack_1d8 = (int **)piVar8[0x12];
  piStack_1d0 = (int *)&DAT_008f9b38;
  pfStack_1dc = (float *)0x6d3230;
  (**(code **)((int)*ppiStack_1d8 + 0x88))();
  if (*(int *)(DAT_009196b4 + 0x30) == 0) {
    pfStack_1cc = (float *)(_DAT_008f9b54 * *(float *)(DAT_009196b8 + 0x290) + _DAT_008f9b50);
LAB_006d3296:
    if (_DAT_0089096c < (float)pfStack_1cc) {
      pfStack_1cc = (float *)0x3f800000;
    }
  }
  else {
    pfStack_1cc = (float *)((_DAT_008f9b4c * *(float *)(DAT_009196b8 + 0x290) + _DAT_008f9b48) *
                           (_DAT_0089096c - *(float *)(DAT_009196b4 + 0x140)));
    if (_DAT_00890968 <= (float)pfStack_1cc) goto LAB_006d3296;
    pfStack_1cc = (float *)0x0;
  }
  piStack_1e4 = (int *)piVar8[0x12];
  pfStack_1dc = pfStack_1cc;
  uStack_1e0 = *(undefined4 *)(piVar8[0x11] + 0xa24);
  piStack_1e8 = (int *)0x6d32c7;
  (**(code **)(*piStack_1e4 + 0x78))();
LAB_006d32c7:
  piStack_1d0 = (int *)0x6;
  piStack_1d4 = (int *)0x5;
  ppiStack_1d8 = (int **)0x0;
  pfStack_1dc = (float *)0x6d32d1;
  FUN_006c6810();
  piStack_1d0 = (int *)0x6d32d9;
  FUN_006c83a0();
  DAT_00982ca0 = 0;
  piStack_1d0 = (int *)DAT_00982c80[0x12];
  piStack_1d4 = (int *)0x6d32f0;
  (**(code **)(*piStack_1d0 + 0x104))();
  piStack_1d4 = (int *)0x30;
  ppiStack_1d8 = &piStack_1a4;
  pfStack_1dc = (float *)0x2;
  uStack_1e0 = 6;
  piStack_1e4 = DAT_00982bdc;
  piStack_1e8 = (int *)0x6d3309;
  (**(code **)(*DAT_00982bdc + 0x14c))();
  piStack_1e8 = (int *)piVar8[0x12];
  piStack_1ec = (int *)0x6d3315;
  (**(code **)(*piStack_1e8 + 0x108))();
  piStack_1ec = (int *)0x6d331c;
  (**(code **)(*piVar8 + 8))();
  piStack_1ec = (int *)piVar8[0x12];
  (**(code **)(*piStack_1ec + 0x10c))();
  iVar7 = DAT_00982a20;
  DAT_00982c80 = (int *)0x0;
  FUN_006e2f50();
  (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,*(undefined4 *)(iVar7 + 8));
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,*(undefined4 *)(iVar7 + 0xc));
  piStack_1e4 = *(int **)(iVar7 + 0x14);
  uStack_1e0 = *(undefined4 *)(iVar7 + 0x18);
  piStack_1ec = (int *)0x0;
  piStack_1e8 = (int *)0x0;
  pfStack_1dc = (float *)0x0;
  ppiStack_1d8 = (int **)0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&piStack_1ec);
  DAT_00982a20 = iVar7;
  DAT_00982c80 = (int *)0x0;
  return;
}

