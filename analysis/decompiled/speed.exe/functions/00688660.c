/* speed.exe 00688660 FUN_00688660; analysis pseudocode, not buildable source.
 * calls 0067ea70 FUN_0067ea70
 * calls 00668650 FUN_00668650
 * calls 00674d20 FUN_00674d20
 * calls 005cc240 FUN_005cc240
 * calls 00675ff0 FUN_00675ff0
 * calls 00674c40 FUN_00674c40
 * calls 006883e0 FUN_006883e0
 * calls 006686d0 FUN_006686d0
 * calls 00684bb0 FUN_00684bb0
 * calls 006269b0 FUN_006269b0
 * calls 004546c0 FUN_004546c0
 * calls 00669910 FUN_00669910
 * calls 005d7930 FUN_005d7930
 * calls 006ee9b0 FUN_006ee9b0
 * calls 005c5e80 FUN_005c5e80
 * calls 00670820 FUN_00670820
 * calls 00452bd0 FUN_00452bd0
 * calls 0066a200 FUN_0066a200
 * calls 00669c00 FUN_00669c00
 * calls 00452d40 FUN_00452d40
 * calls 00454810 FUN_00454810
 * calls 006fbe80 FUN_006fbe80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00688660(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,undefined1 *param_5,
            int *param_6,undefined4 **param_7,undefined4 **param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  float10 fVar12;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 **ppuStack_88;
  undefined4 **ppuStack_84;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 **ppuStack_3c;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  float *pfStack_24;
  float *pfStack_20;
  float *pfStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087bc52;
  pvStack_c = ExceptionList;
  ppuStack_84 = (undefined4 **)0xa;
  ppuStack_88 = (undefined4 **)0x688690;
  ExceptionList = &pvStack_c;
  ppuStack_88 = (undefined4 **)(**(code **)(*param_6 + 0xc))();
  puStack_8c = (undefined4 *)0x2;
  puStack_90 = param_3;
  FUN_006883e0();
  uStack_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    ppuStack_84 = (undefined4 **)0x0;
  }
  else {
    ppuStack_84 = (undefined4 **)(param_1 + 4);
  }
  ppuStack_88 = (undefined4 **)0x6886c1;
  FUN_0067ea70();
  uStack_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = param_1 + 4;
  }
  puVar1 = param_1 + 0x2d;
  ppuStack_88 = (undefined4 **)&LAB_00404ff0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x2e] = puVar7;
  puStack_8c = (undefined4 *)0x6886eb;
  ppuStack_84 = (undefined4 **)puVar1;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a93c0;
  uStack_4._0_1_ = 2;
  param_1[0x2f] = &PTR___purecall_00890d38;
  ppuStack_84 = (undefined4 **)0x68870b;
  FUN_00675ff0();
  uStack_4._0_1_ = 3;
  if (param_1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = param_1 + 4;
  }
  puVar2 = param_1 + 0x30;
  ppuStack_88 = (undefined4 **)&LAB_006680f0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x31] = puVar7;
  puStack_8c = (undefined4 *)0x688735;
  ppuStack_84 = (undefined4 **)puVar2;
  FUN_005d7930();
  *puVar2 = &PTR_FUN_008a93ec;
  uStack_4._0_1_ = 4;
  if (param_1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = param_1 + 4;
  }
  puVar3 = param_1 + 0x32;
  ppuStack_88 = (undefined4 **)&LAB_00668440;
  *puVar3 = &PTR_FUN_00890970;
  param_1[0x33] = puVar7;
  puStack_8c = (undefined4 *)0x688766;
  ppuStack_84 = (undefined4 **)puVar3;
  FUN_005d7930();
  *puVar3 = &PTR_FUN_008a9410;
  *puVar1 = &PTR_LAB_008aa5d8;
  *puVar2 = &PTR_LAB_008aa5cc;
  ppuStack_84 = (undefined4 **)param_3;
  uStack_4._0_1_ = 5;
  *param_1 = &PTR_FUN_008aa6d0;
  param_1[2] = &PTR_LAB_008aa6c8;
  param_1[0xb] = &PTR_LAB_008aa638;
  param_1[0xe] = &PTR_LAB_008aa618;
  param_1[0x10] = &PTR_LAB_008aa5fc;
  param_1[0x2b] = &PTR_LAB_008aa5f4;
  param_1[0x2f] = &PTR_FUN_008aa5d4;
  *puVar3 = &PTR_LAB_008aa5c4;
  ppuStack_88 = (undefined4 **)0x6887d3;
  FUN_00669910();
  uStack_4 = CONCAT31(uStack_4._1_3_,6);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3e000000;
  param_1[0x3c] = 0;
  ppuStack_84 = (undefined4 **)0x6887fb;
  fVar12 = (float10)FUN_00669c00();
  param_1[0x3d] = (float)fVar12;
  ppuStack_84 = (undefined4 **)0x0;
  ppuStack_88 = (undefined4 **)0xb5c0dac8;
  param_1[0x3e] = 0;
  puStack_8c = (undefined4 *)0x688814;
  puVar7 = (undefined4 *)FUN_00454810();
  if (puVar7 == (undefined4 *)0x0) {
    ppuStack_84 = (undefined4 **)0x4;
    ppuStack_88 = (undefined4 **)0x68881f;
    puVar7 = (undefined4 *)FUN_006269b0();
  }
  param_1[0x3f] = *puVar7;
  *(char *)(param_1 + 0x40) = (char)param_5;
  param_1[0x41] = param_6;
  param_1[0x42] = param_4;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x111) = param_8._0_1_;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = DAT_008a2fb4;
  param_1[0x48] = DAT_008a2fb8;
  param_1[0x49] = DAT_008a2fbc;
  ppuStack_84 = (undefined4 **)0x0;
  ppuStack_88 = (undefined4 **)(param_1 + 0xb);
  puStack_8c = (undefined4 *)0x6888a7;
  ppuStack_84 = (undefined4 **)FUN_00674c40();
  ppuStack_88 = (undefined4 **)0x6888b3;
  FUN_00674d20();
  param_1[0x4f] = DAT_008a2fc0;
  param_1[0x50] = DAT_008a2fc4;
  param_1[0x51] = DAT_008a2fc8;
  param_1[0x52] = DAT_008a2fcc;
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  fStack_60 = (float)(int)*(short *)(param_4 + 0x10) * _DAT_00890d60;
  fVar4 = (float)(int)*(short *)(param_4 + 0x12) * _DAT_00890d60;
  fVar5 = (float)(int)*(short *)(param_4 + 0x14) * _DAT_00890d60;
  if (fStack_60 <= _DAT_008916cc) {
    fStack_60 = _DAT_008916cc;
  }
  fStack_5c = _DAT_008916cc;
  if (_DAT_008916cc < fVar4) {
    fStack_5c = fVar4;
  }
  fStack_58 = _DAT_008916cc;
  if (_DAT_008916cc < fVar5) {
    fStack_58 = fVar5;
  }
  param_8 = (undefined4 **)(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
  ppuStack_88 = (undefined4 **)0x6889b4;
  ppuStack_84 = param_8;
  fVar12 = (float10)FUN_005c5e80();
  param_8 = *(undefined4 ***)(param_1[0x36] + 0x14);
  ppuStack_84 = (undefined4 **)0x0;
  ppuStack_88 = (undefined4 **)0xfb19212f;
  fVar4 = (fStack_60 + fStack_60) * (fStack_60 + fStack_60);
  fVar6 = (fStack_5c + fStack_5c) * (fStack_5c + fStack_5c);
  fVar5 = (fStack_58 + fStack_58) * (fStack_58 + fStack_58);
  fStack_6c = (fVar5 + fVar6) * _DAT_008a939c * (float)param_8;
  fStack_68 = (fVar5 + fVar4) * _DAT_008a939c * (float)param_8;
  fStack_64 = (fVar6 + fVar4) * _DAT_008a939c * (float)param_8;
  fStack_6c = fStack_6c + fStack_6c;
  fStack_68 = fStack_68 + fStack_68;
  fStack_64 = fStack_64 + fStack_64;
  puStack_8c = (undefined4 *)0x688a71;
  pfVar8 = (float *)FUN_00454810();
  if (pfVar8 != (float *)0x0) {
    fStack_54 = *pfVar8;
    fStack_50 = pfVar8[1];
    fStack_4c = pfVar8[2];
    if (_DAT_00890968 < fStack_54) {
      fStack_6c = fStack_6c * fStack_54;
    }
    if (_DAT_00890968 < fStack_50) {
      fStack_68 = fStack_68 * fStack_50;
    }
    if (_DAT_00890968 < fStack_4c) {
      fStack_64 = fStack_64 * fStack_4c;
    }
  }
  if (((char)param_5 == '\0') ||
     (param_5 = (undefined1 *)((uint)param_5 & 0xffffff00), *(char *)((int)param_1 + 0x111) != '\0')
     ) {
    param_5 = (undefined1 *)CONCAT31(param_5._1_3_,1);
  }
  if ((char)param_7 == '\0') {
    ppuStack_84 = &puStack_44;
    ppuStack_88 = (undefined4 **)0x688bc0;
    FUN_00668650();
    iStack_34 = param_2 + 0x30;
    ppuStack_3c = &puStack_44;
    iStack_28 = param_2;
    pfStack_20 = &fStack_6c;
    puStack_30 = &DAT_008a2fb4;
    puStack_2c = &DAT_008a2fb4;
    pfStack_24 = (float *)param_8;
    pfStack_1c = &fStack_60;
    uStack_40 = 0xa6b47fac;
    uStack_18 = (char)param_5;
    iStack_14 = param_4;
    uStack_10 = 0;
    if (*(char *)((int)param_1 + 0x111) == '\0') {
      ppuStack_84 = (undefined4 **)0x8aaa04;
      ppuStack_88 = (undefined4 **)0x688c83;
      param_5 = (undefined1 *)FUN_005cc240();
      puStack_90 = puStack_44;
    }
    else {
      ppuStack_84 = (undefined4 **)0x8aaa10;
      ppuStack_88 = (undefined4 **)0x688c34;
      param_5 = (undefined1 *)FUN_005cc240();
      puStack_90 = puStack_44;
    }
    param_7 = &puStack_90;
    param_8 = (undefined4 **)DAT_0092c5e0;
    puStack_8c = (undefined4 *)uStack_40;
    ppuStack_88 = ppuStack_3c;
    FUN_00684bb0(&param_8,&param_5);
    ppuStack_84 = (undefined4 **)0x8aa9f0;
    ppuStack_88 = (undefined4 **)0x688cd8;
    param_5 = (undefined1 *)FUN_005cc240();
    param_7 = &puStack_90;
    param_8 = (undefined4 **)DAT_0092c5d0;
    puStack_90 = (undefined4 *)0x0;
    puStack_8c = (undefined4 *)0x0;
    ppuStack_88 = (undefined4 **)0x0;
    puVar7 = &param_8;
  }
  else {
    ppuStack_84 = (undefined4 **)0x8aa4cc;
    ppuStack_88 = (undefined4 **)0x688b1e;
    param_5 = (undefined1 *)FUN_005cc240();
    ppuStack_88 = &puStack_44;
    param_7 = (undefined4 **)DAT_0092c5e0;
    puStack_8c = (undefined4 *)0x688b3c;
    FUN_006686d0();
    ppuStack_88 = &puStack_44;
    iStack_34 = param_2 + 0x30;
    iStack_28 = param_2;
    puStack_30 = &DAT_008a2fb4;
    puStack_2c = &DAT_008a2fb4;
    pfStack_20 = (float *)param_8;
    param_8 = &puStack_90;
    uStack_40 = 0xa6b47fac;
    puStack_90 = puStack_44;
    puStack_8c = (undefined4 *)0xa6b47fac;
    puVar7 = &param_7;
    ppuStack_3c = ppuStack_88;
    pfStack_24 = (float *)(float)fVar12;
  }
  FUN_00684bb0(puVar7,&param_5);
  ppuStack_84 = (undefined4 **)0xda5f19f9;
  ppuStack_88 = (undefined4 **)&fStack_54;
  puVar11 = (undefined1 *)0x0;
  puStack_8c = (undefined4 *)0x688d2a;
  FUN_004546c0();
  uStack_4._0_1_ = 8;
  ppuStack_84 = (undefined4 **)0x688d36;
  param_5 = (undefined1 *)FUN_00452d40();
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  ppuStack_84 = (undefined4 **)0x688d4b;
  FUN_00452bd0();
  if (param_5 != (undefined1 *)0x0) {
    do {
      ppuStack_88 = (undefined4 **)0xda5f19f9;
      puStack_8c = (undefined4 *)0x688d65;
      ppuStack_84 = (undefined4 **)puVar11;
      iVar9 = FUN_00454810();
      if (iVar9 == 0) {
        ppuStack_84 = (undefined4 **)&DAT_00000010;
        ppuStack_88 = (undefined4 **)0x688d70;
        iVar9 = FUN_006269b0();
      }
      if ((*(char **)(iVar9 + 0xc) != (char *)0x0) && (**(char **)(iVar9 + 0xc) != '\0')) {
        param_5 = *(undefined1 **)(iVar9 + 8);
        param_7 = &puStack_90;
        puStack_90 = (undefined4 *)0x0;
        puStack_8c = (undefined4 *)0x0;
        ppuStack_88 = (undefined4 **)0x0;
        param_8 = (undefined4 **)param_5;
        FUN_00684bb0(&param_8,&param_5);
      }
      ppuStack_84 = (undefined4 **)0xda5f19f9;
      ppuStack_88 = (undefined4 **)&fStack_54;
      puVar11 = puVar11 + 1;
      puStack_8c = (undefined4 *)0x688dd3;
      FUN_004546c0();
      uStack_4._0_1_ = 8;
      ppuStack_84 = (undefined4 **)0x688ddf;
      param_5 = (undefined1 *)FUN_00452d40();
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      ppuStack_84 = (undefined4 **)0x688df4;
      FUN_00452bd0();
    } while (puVar11 < param_5);
  }
  ppuStack_84 = (undefined4 **)param_6;
  ppuStack_88 = (undefined4 **)0x688e11;
  FUN_00670820();
  ppuStack_84 = (undefined4 **)0x8918c0;
  ppuStack_88 = (undefined4 **)0x688e1b;
  param_5 = (undefined1 *)FUN_005cc240();
  ppuStack_84 = (undefined4 **)0x0;
  ppuStack_88 = (undefined4 **)0x0;
  puStack_8c = (undefined4 *)0x3dcccccd;
  puStack_90 = &param_5;
  uVar10 = FUN_006ee9b0();
  param_1[0x43] = uVar10;
  ppuStack_84 = (undefined4 **)0x688e48;
  FUN_0066a200();
  if ((*(char **)(param_1[0x36] + 0xc) != (char *)0x0) && (**(char **)(param_1[0x36] + 0xc) != '\0')
     ) {
    ppuStack_88 = (undefined4 **)param_1[0xd];
    ppuStack_84 = (undefined4 **)0x8a7c9c;
    puStack_8c = param_1 + 0x2f;
    puStack_90 = (undefined4 *)0x688e77;
    FUN_006fbe80();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

