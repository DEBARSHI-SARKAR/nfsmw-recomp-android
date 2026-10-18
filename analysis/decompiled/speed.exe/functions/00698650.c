/* speed.exe 00698650 FUN_00698650; analysis pseudocode, not buildable source.
 * calls 004665b0 FUN_004665b0
 * calls 00401670 FUN_00401670
 * calls 00487160 FUN_00487160
 * calls 00452940 FUN_00452940
 * calls 00488650 FUN_00488650
 * calls 005c5e80 FUN_005c5e80
 * calls 006269b0 FUN_006269b0
 * calls 00488f70 FUN_00488f70
 * calls 00627400 FUN_00627400
 * calls 006211d0 FUN_006211d0
 * calls 0068a2d0 FUN_0068a2d0
 * calls 0068a540 FUN_0068a540
 * calls 00698360 FUN_00698360
 * calls 00697050 FUN_00697050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00698650(int *param_1,int *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint unaff_EBX;
  float *pfVar13;
  float10 fVar14;
  float10 fVar15;
  int unaff_retaddr;
  float afStack_404 [23];
  undefined4 uStack_3a8;
  int *piStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  float *pfStack_398;
  float *pfStack_394;
  float *pfStack_390;
  float *pfStack_38c;
  float *pfStack_388;
  int *piStack_384;
  int *piStack_380;
  float fStack_368;
  float fStack_364;
  int iStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float afStack_33c [3];
  int iStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  undefined4 uStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined1 auStack_2bc [152];
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1b4;
  float fStack_1b0;
  undefined1 auStack_1a8 [152];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_e0;
  float fStack_dc;
  int iStack_a0;
  float fStack_9c;
  undefined1 auStack_94 [64];
  undefined1 auStack_54 [64];
  void *pvStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_0087c215;
  piStack_c = ExceptionList;
  piStack_380 = param_2;
  fStack_368 = (float)(uint)fStack_368._0_3_;
  piStack_384 = (int *)0x69868c;
  ExceptionList = &piStack_c;
  cVar6 = (**(code **)(*param_1 + 0x3c))();
  piStack_384 = param_1;
  pfStack_388 = (float *)0x69869b;
  cVar7 = (**(code **)(*param_2 + 0x3c))();
  if ((cVar7 != '\0') && (cVar6 != '\0')) {
    iVar11 = *(int *)param_2[0x1e];
    iVar12 = *(int *)param_1[0x1e];
    pfStack_388 = (float *)(param_1 + 0x18);
    pfStack_38c = (float *)0x6986c9;
    iStack_360 = iVar11;
    FUN_00487160();
    pfStack_388 = (float *)(param_2 + 0x18);
    pfStack_38c = (float *)0x6986d9;
    FUN_00487160();
    *(ushort *)(iVar12 + 0x1c) = *(ushort *)(iVar12 + 0x1c) | 8;
    puVar1 = (ushort *)(iVar11 + 0x1c);
    *puVar1 = *puVar1 | 8;
    iVar11 = param_1[0x21];
    pfStack_388 = (float *)0x6986f7;
    iVar8 = FUN_00452940();
    if (iVar8 == 0) {
      pfStack_388 = (float *)0x4;
      pfStack_38c = (float *)0x69870e;
      pfVar13 = (float *)FUN_006269b0();
    }
    else {
      pfVar13 = (float *)(iVar11 + 200);
    }
    iVar11 = param_2[0x21];
    pfStack_388 = (float *)0x698726;
    iVar8 = FUN_00452940();
    if (iVar8 == 0) {
      pfStack_388 = (float *)0x4;
      pfStack_38c = (float *)0x698739;
      pfVar10 = (float *)FUN_006269b0();
    }
    else {
      pfVar10 = (float *)(iVar11 + 200);
    }
    pfStack_388 = (float *)(*pfVar10 * *pfVar13);
    pfStack_38c = (float *)0x698752;
    fVar14 = (float10)FUN_005c5e80();
    fVar2 = (float)fVar14;
    iVar11 = param_1[0x21];
    pfStack_388 = (float *)0x69876a;
    uVar9 = FUN_00452940();
    if (uVar9 < 2) {
      pfStack_388 = (float *)0x4;
      pfStack_38c = (float *)0x69877e;
      pfVar13 = (float *)FUN_006269b0();
    }
    else {
      pfVar13 = (float *)(iVar11 + 0xcc);
    }
    iVar11 = param_2[0x21];
    pfStack_388 = (float *)0x698794;
    uVar9 = FUN_00452940();
    if (uVar9 < 2) {
      pfStack_388 = (float *)0x4;
      pfStack_38c = (float *)0x6987a8;
      pfVar10 = (float *)FUN_006269b0();
    }
    else {
      pfVar10 = (float *)(iVar11 + 0xcc);
    }
    pfStack_388 = (float *)(*pfVar10 * *pfVar13);
    pfStack_38c = (float *)0x6987bd;
    fVar14 = (float10)FUN_005c5e80();
    if ((float10)fVar2 < fVar14) {
      fVar14 = (float10)fVar2;
    }
    fStack_344 = (float)fVar14;
    fStack_34c = param_3[1];
    fStack_358 = param_4[1];
    fStack_350 = *param_3;
    fStack_348 = param_3[2];
    fStack_35c = *param_4;
    fStack_354 = param_4[2];
    iVar11 = param_1[0x21];
    fStack_364 = fStack_350 * *(float *)(iVar12 + 0x90) +
                 fStack_34c * *(float *)(iVar12 + 0x94) + fStack_348 * *(float *)(iVar12 + 0x98);
    fVar3 = (fStack_350 * *(float *)(iVar12 + 0x70) +
            fStack_34c * *(float *)(iVar12 + 0x74) + fStack_348 * *(float *)(iVar12 + 0x78)) *
            *(float *)(iVar11 + 0x50);
    fVar4 = (fStack_350 * *(float *)(iVar12 + 0x80) +
            fStack_34c * *(float *)(iVar12 + 0x84) + fStack_348 * *(float *)(iVar12 + 0x88)) *
            *(float *)(iVar11 + 0x54);
    fVar5 = fStack_364 * *(float *)(iVar11 + 0x58);
    pfStack_388 = (float *)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    pfStack_38c = (float *)0x6988b4;
    fStack_368 = fVar2;
    fStack_340 = fVar2;
    fVar14 = (float10)FUN_005c5e80();
    fStack_1b0 = (float)fVar14;
    pfVar13 = (float *)(iStack_360 + 0x70);
    iVar11 = *(int *)(unaff_retaddr + 0x84);
    fStack_364 = fStack_350 * *(float *)(iStack_360 + 0x90) +
                 fStack_34c * *(float *)(iStack_360 + 0x94) +
                 fStack_348 * *(float *)(iStack_360 + 0x98);
    fVar2 = (fStack_350 * *pfVar13 +
            fStack_34c * *(float *)(iStack_360 + 0x74) + fStack_348 * *(float *)(iStack_360 + 0x78))
            * *(float *)(iVar11 + 0x50);
    fVar3 = (fStack_350 * *(float *)(iStack_360 + 0x80) +
            fStack_34c * *(float *)(iStack_360 + 0x84) + fStack_348 * *(float *)(iStack_360 + 0x88))
            * *(float *)(iVar11 + 0x54);
    fVar4 = fStack_364 * *(float *)(iVar11 + 0x58);
    pfStack_38c = (float *)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    pfStack_390 = (float *)0x698956;
    fVar14 = (float10)FUN_005c5e80();
    fStack_9c = (float)fVar14;
    pfStack_388 = (float *)auStack_2bc;
    pfStack_38c = &fStack_35c;
    pfStack_394 = (float *)0x698981;
    (**(code **)(*piStack_4 + 0x38))();
    pfStack_394 = (float *)&iStack_1b4;
    pfStack_398 = &fStack_368;
    uStack_39c = uStack_10;
    uStack_3a0 = 0x6989a2;
    (**(code **)(*piStack_c + 0x38))();
    if (((char)uStack_1f4 != '\0') && ((char)uStack_e0 != '\0')) {
      if (_DAT_00890968 < fStack_1f0) {
        uStack_1f4 = uStack_1f4 & 0xffffff00;
        fStack_1f0 = 0.0;
      }
      if (_DAT_00890968 < fStack_dc) {
        uStack_e0 = uStack_e0 & 0xffffff00;
        fStack_dc = 0.0;
      }
    }
    pfStack_388 = (float *)param_6;
    pfStack_38c = (float *)param_5;
    pfStack_390 = &fStack_35c;
    pfStack_394 = &fStack_350;
    pfStack_398 = (float *)uStack_e0;
    uStack_3a0 = uStack_1f4;
    piStack_3a4 = piStack_4;
    uStack_3a8 = 0x698a45;
    cVar6 = FUN_00698360();
    if (cVar6 != '\0') {
      uStack_20c = *(undefined4 *)(iVar12 + 0x10);
      uStack_208 = *(undefined4 *)(iVar12 + 0x14);
      uStack_204 = *(undefined4 *)(iVar12 + 0x18);
      uStack_f8 = *(undefined4 *)(iStack_360 + 0x10);
      uStack_f4 = *(undefined4 *)(iStack_360 + 0x14);
      pfStack_388 = (float *)0x20;
      uStack_f0 = *(undefined4 *)(iStack_360 + 0x18);
      pfStack_38c = &fStack_35c;
      pfStack_390 = (float *)auStack_1a8;
      pfStack_394 = (float *)0x698aae;
      cVar6 = FUN_00488f70();
      if (cVar6 != '\0') {
        pfStack_388 = (float *)0x698abf;
        FUN_0068a2d0();
        pfStack_388 = (float *)0x698acb;
        fVar14 = (float10)FUN_00488650();
        fStack_32c = *param_3;
        fStack_328 = param_3[1];
        fStack_324 = param_3[2];
        afStack_33c[0] = *param_4;
        afStack_33c[1] = param_4[1];
        afStack_33c[2] = param_4[2];
        uStack_320 = uStack_320 & 0xfffffff9 | 1;
        if ((iStack_1b4 == 2) || (iStack_a0 == 2)) {
          iVar11 = 1;
        }
        else {
          iVar11 = 0;
        }
        fStack_310 = (float)fVar14;
        uStack_320 = uStack_320 ^ (iVar11 << 7 ^ uStack_320) & 0x80;
        uStack_2cc = uStack_1d8;
        uStack_2c4 = uStack_1d0;
        uStack_2c8 = uStack_1d4;
        uStack_318 = uStack_1e0;
        uStack_31c = uStack_1e4;
        uStack_314 = uStack_1dc;
        uStack_2ec = *(undefined4 *)(iVar12 + 0x20);
        uStack_2e8 = *(undefined4 *)(iVar12 + 0x24);
        uStack_2e4 = *(undefined4 *)(iVar12 + 0x28);
        uStack_2dc = *(undefined4 *)(iStack_360 + 0x20);
        uStack_2d8 = *(undefined4 *)(iStack_360 + 0x24);
        uStack_2d4 = *(undefined4 *)(iStack_360 + 0x28);
        if ((char)uStack_1f4 == '\0') {
          *(undefined4 *)(iVar12 + 0x30) = uStack_218;
          *(undefined4 *)(iVar12 + 0x34) = uStack_214;
          *(undefined4 *)(iVar12 + 0x38) = uStack_210;
          *(undefined4 *)(iVar12 + 0x20) = uStack_224;
          *(undefined4 *)(iVar12 + 0x24) = uStack_220;
          *(byte *)(iVar12 + 0x1c) = *(byte *)(iVar12 + 0x1c) | 0x40;
          *(undefined4 *)(iVar12 + 0x28) = uStack_21c;
          *(undefined1 *)(iVar12 + 0x5d) = 0;
        }
        else {
          uStack_320 = uStack_320 | 8;
        }
        pfStack_388 = (float *)0x698c3c;
        fVar15 = (float10)FUN_0068a540();
        fStack_2e0 = (float)(fVar15 * (float10)(float)fVar14);
        if ((char)uStack_e0 == '\0') {
          *(undefined4 *)(iStack_360 + 0x30) = uStack_104;
          *(undefined4 *)(iStack_360 + 0x34) = uStack_100;
          *(undefined4 *)(iStack_360 + 0x38) = uStack_fc;
          *(undefined4 *)(iStack_360 + 0x20) = uStack_110;
          *(undefined4 *)(iStack_360 + 0x24) = uStack_10c;
          *(byte *)(iStack_360 + 0x1c) = *(byte *)(iStack_360 + 0x1c) | 0x40;
          *(undefined4 *)(iStack_360 + 0x28) = uStack_108;
          *(undefined1 *)(iStack_360 + 0x5d) = 0;
        }
        else {
          uStack_320 = uStack_320 | 0x20;
        }
        pfStack_388 = (float *)0x698cb6;
        fVar15 = (float10)FUN_0068a540();
        pfStack_388 = (float *)auStack_94;
        fStack_2d0 = (float)(fVar15 * (float10)(float)fVar14);
        pfStack_390 = (float *)0x698ccf;
        pfStack_38c = (float *)(iVar12 + 0x70);
        FUN_004665b0();
        pfStack_390 = (float *)auStack_54;
        pfStack_398 = (float *)0x698cdd;
        pfStack_394 = pfVar13;
        FUN_004665b0();
        pfStack_388 = (float *)0x698cf0;
        iVar11 = (**(code **)(piStack_4[0x12] + 4))();
        fStack_30c = *param_4 - *(float *)(iVar12 + 0x10);
        iStack_330 = param_1[0x12];
        uStack_300 = *(undefined4 *)(iVar11 + 8);
        fStack_308 = param_4[1] - *(float *)(iVar12 + 0x14);
        pfStack_390 = &fStack_30c;
        pfStack_38c = (float *)auStack_94;
        fStack_304 = param_4[2] - *(float *)(iVar12 + 0x18);
        pfStack_394 = (float *)0x698d43;
        pfStack_388 = pfStack_390;
        FUN_00401670();
        pfStack_388 = (float *)0x698d56;
        iVar8 = (**(code **)(*(int *)(unaff_retaddr + 0x48) + 4))();
        iVar11 = iStack_360;
        fStack_2fc = *param_4 - *(float *)(iStack_360 + 0x10);
        uStack_2f0 = *(undefined4 *)(iVar8 + 8);
        iStack_2c0 = param_2[0x12];
        fStack_2f8 = param_4[1] - *(float *)(iStack_360 + 0x14);
        pfStack_390 = &fStack_2fc;
        pfStack_38c = (float *)auStack_54;
        fStack_2f4 = param_4[2] - *(float *)(iStack_360 + 0x18);
        pfStack_394 = (float *)0x698db7;
        pfStack_388 = pfStack_390;
        FUN_00401670();
        if (((uStack_320 & 8) == 0) && ((*(byte *)(iVar12 + 0x1c) >> 1 & 1) != 0)) {
          iVar12 = 1;
        }
        else {
          iVar12 = 0;
        }
        uStack_320 = uStack_320 ^ (iVar12 << 4 ^ uStack_320) & 0x10;
        if (((uStack_320 & 0x20) == 0) && ((*(byte *)(iVar11 + 0x1c) >> 1 & 1) != 0)) {
          iVar11 = 1;
        }
        else {
          iVar11 = 0;
        }
        uStack_320 = uStack_320 ^ (iVar11 << 6 ^ uStack_320) & 0x40;
        pfStack_388 = (float *)0x88;
        pfStack_38c = (float *)0x698e0f;
        iVar11 = FUN_00627400();
        piStack_c = (int *)0x0;
        if (iVar11 != 0) {
          pfVar13 = afStack_33c;
          pfVar10 = afStack_404;
          for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pfVar10 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar10 = pfVar10 + 1;
          }
          FUN_006211d0();
        }
        uVar9 = uStack_320;
        piStack_c = (int *)0xffffffff;
        if ((uStack_320 & 0x10) != 0) {
          pfStack_388 = (float *)0x698e62;
          FUN_00697050();
        }
        if ((uVar9 & 0x40) != 0) {
          pfStack_388 = (float *)0x698e73;
          FUN_00697050();
        }
        ExceptionList = pvStack_14;
        return 1;
      }
      ExceptionList = pvStack_14;
      return unaff_EBX >> 0x18;
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}

