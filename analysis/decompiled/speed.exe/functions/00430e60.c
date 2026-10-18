/* speed.exe 00430e60 FUN_00430e60; analysis pseudocode, not buildable source.
 * calls 007658a0 FUN_007658a0
 * calls 00419fc0 FUN_00419fc0
 * calls 005d59f0 FUN_005d59f0
 * calls 0041eed0 FUN_0041eed0
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 0041ce30 FUN_0041ce30
 * calls 007862d0 FUN_007862d0
 * calls 00406340 FUN_00406340
 * calls 0042fa40 FUN_0042fa40
 * calls 004050a0 FUN_004050a0
 * calls 0076e220 FUN_0076e220
 * calls 00410180 FUN_00410180
 * calls 0077bba0 FUN_0077bba0
 * calls 0077bac0 FUN_0077bac0
 * calls 00410220 FUN_00410220
 * calls 0077b9e0 FUN_0077b9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00430e60(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  byte bStack_365;
  int *piStack_364;
  char cStack_35d;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  undefined4 uStack_344;
  int local_340;
  uint uStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  int *piStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined1 auStack_318 [12];
  undefined1 auStack_30c [12];
  undefined1 auStack_300 [12];
  undefined1 auStack_2f4 [80];
  char cStack_2a4;
  byte bStack_2a1;
  undefined4 uStack_27c;
  short sStack_266;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008684c6;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)(DAT_0091e000 + 0x1960);
  ExceptionList = &pvStack_c;
  piVar4 = (int *)(**(code **)(*param_2 + 0xac))();
  piStack_364 = piVar4;
  FUN_006ed200();
  FUN_00627320();
  cStack_35d = '\0';
  iVar5 = (**(code **)(*param_1 + 0x114))();
  if (iVar5 == 2) {
    uStack_344 = 0;
    uStack_33c = uStack_33c & 0xffffff00;
    piStack_364 = (int *)0x0;
    cVar1 = FUN_0042fa40(&uStack_344,&uStack_33c,&piStack_364);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar6 = FUN_005d59f0(&LAB_004038e0);
    if (iVar6 == 0) {
      ExceptionList = pvStack_c;
      return 0;
    }
    (**(code **)(*piVar4 + 0x54))(uStack_344,uStack_33c,piStack_364);
    goto LAB_004311cf;
  }
  if (iVar6 == 1) {
    cVar1 = FUN_0041eed0(param_1,auStack_30c,auStack_318,_DAT_008eb1a8 + _DAT_00891040);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return 0;
    }
    cVar1 = (**(code **)(*piVar4 + 0x5c))(auStack_30c,auStack_318);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return 0;
    }
    goto LAB_004311cf;
  }
  iVar6 = (**(code **)(*param_1 + 8))();
  if (*(int *)(iVar6 + 0x1c) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_005d59f0(&LAB_00403700);
  }
  piStack_32c = (int *)(**(code **)(*piVar4 + 0xa0))();
  if ((piStack_32c == (int *)0x0) || (iVar5 = (**(code **)(*piStack_32c + 0x114))(), iVar5 != 2)) {
    bStack_365 = 0;
  }
  else {
    bStack_365 = 1;
  }
  if (*(char *)(DAT_0091e00c + 0x2b4) == '\0') {
    pfVar7 = (float *)(**(code **)(*piVar4 + 0xa8))();
    fStack_338 = *pfVar7;
    fStack_334 = pfVar7[1];
    fStack_350 = *(float *)(iVar6 + 0x10);
    fStack_35c = fStack_350 - fStack_338;
    fStack_330 = pfVar7[2];
    fStack_34c = *(float *)(iVar6 + 0x14);
    fStack_358 = fStack_34c - fStack_334;
    fStack_348 = *(float *)(iVar6 + 0x18);
    fStack_354 = fStack_348 - fStack_330;
    fVar8 = (float10)FUN_00410180(&fStack_35c);
    fStack_31c = (float)fVar8;
    uStack_344 = 0x3e2aaaab;
    FUN_006ed200();
    uStack_33c = FUN_00627320();
    if (_DAT_00890634 < (float)(int)uStack_33c * _DAT_00890980) {
      uStack_344 = 0xbe2aaaab;
    }
    FUN_004050a0(uStack_344,&fStack_35c,&fStack_35c);
    FUN_0077b9e0();
    uStack_4 = 0;
    FUN_007658a0(0);
    uStack_27c = 2;
    if ((bStack_365 == 0) &&
       ((iVar6 = (**(code **)(*piVar4 + 0xb4))(), iVar6 == 0 ||
        (bVar2 = (byte)*(undefined2 *)(*(short *)(iVar6 + 0x8e) * 0x16 + DAT_009b38c0 + 10),
        bStack_365 = 1, ((~(bVar2 >> 5) ^ bVar2 >> 1) & 1) == 0)))) {
      bStack_365 = 0;
    }
    bStack_2a1 = bStack_365;
    FUN_007862d0(&fStack_338,&fStack_35c,0,0);
    if (cStack_2a4 == '\0') {
LAB_004311a6:
      cVar1 = cStack_35d;
    }
    else {
      bVar2 = (byte)*(undefined2 *)(sStack_266 * 0x16 + DAT_009b38c0 + 10);
      bStack_2a1 = (~(bVar2 >> 5) ^ bVar2 >> 1) & 1;
      FUN_0077bba0(fStack_31c,&fStack_35c,0);
      fStack_320 = fStack_254;
      fStack_328 = fStack_25c;
      fStack_324 = fStack_258;
      cVar1 = FUN_00419fc0(&fStack_328,0,0,0,1);
      if (cVar1 == '\0') goto LAB_004311a6;
      FUN_0077bac0();
      cVar3 = (**(code **)(*piStack_364 + 0x58))(auStack_2f4);
      cVar1 = '\x01';
      if (cVar3 == '\0') goto LAB_004311a6;
    }
    uStack_4 = 0xffffffff;
    FUN_0076e220();
    piVar4 = piStack_364;
    if (cVar1 != '\0') goto LAB_004311cf;
  }
  iVar6 = (**(code **)(*piStack_32c + 8))();
  fStack_350 = *(float *)(iVar6 + 0x10);
  fStack_34c = *(float *)(iVar6 + 0x14);
  fStack_348 = *(float *)(iVar6 + 0x18);
  if (*(int **)(iVar6 + 0x1c) == (int *)0x0) {
    pfVar7 = (float *)&DAT_008a2fb4;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(iVar6 + 0x1c) + 0x54))();
    pfVar7 = (float *)(**(code **)(*piVar4 + 0x24))();
  }
  fStack_35c = *pfVar7;
  fStack_354 = pfVar7[2];
  fStack_358 = 0.0;
  fVar8 = (float10)FUN_00410180(&fStack_35c);
  if (((float10)_DAT_0089096c <= fVar8) || (cVar1 = FUN_0041ce30(&piStack_32c), cVar1 == '\0')) {
    FUN_00410220(&fStack_35c);
  }
  else {
    (**(code **)(*piStack_32c + 0x34))(&fStack_35c);
  }
  fStack_338 = fStack_35c * _DAT_008908bc + fStack_350;
  fStack_334 = fStack_358 * _DAT_008908bc + fStack_34c;
  fStack_330 = fStack_354 * _DAT_008908bc + fStack_348;
  pfVar7 = (float *)FUN_00406340(auStack_300);
  fStack_350 = *pfVar7;
  fStack_34c = pfVar7[1];
  fStack_348 = pfVar7[2];
  fStack_328 = fStack_338 + fStack_350 * _DAT_008905fc;
  fStack_324 = fStack_34c * _DAT_008905fc + fStack_334;
  fStack_320 = fStack_348 * _DAT_008905fc + fStack_330;
  FUN_0077b9e0();
  uStack_4 = 1;
  FUN_007658a0(0);
  uStack_27c = 2;
  bStack_2a1 = bStack_365;
  FUN_007862d0(&fStack_328,&fStack_35c,0,0);
  if ((cStack_2a4 != '\0') && (cVar1 = FUN_00419fc0(&fStack_25c,0,0,0,1), cVar1 != '\0')) {
    cVar1 = (**(code **)(*piStack_364 + 0x58))(auStack_2f4);
    uStack_4 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_0076e220();
      piVar4 = piStack_364;
LAB_004311cf:
      (**(code **)(*param_2 + 0x80))();
      (**(code **)(*piVar4 + 0x88))();
      (**(code **)(*param_1 + 0x78))(param_2);
      *(int *)(local_340 + 0x94) = *(int *)(local_340 + 0x94) + 1;
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_0076e220();
  ExceptionList = pvStack_c;
  return 0;
}

