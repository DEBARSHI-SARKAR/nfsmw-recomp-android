/* speed.exe 0043dd30 FUN_0043dd30; analysis pseudocode, not buildable source.
 * calls 0076e2d0 FUN_0076e2d0
 * calls 00426610 FUN_00426610
 * calls 004023c0 FUN_004023c0
 * calls 00401670 FUN_00401670
 * calls 007862d0 FUN_007862d0
 * calls 00789870 FUN_00789870
 * calls 00405a40 FUN_00405a40
 * calls 006269b0 FUN_006269b0
 * calls 0043c4e0 FUN_0043c4e0
 * calls 0076e220 FUN_0076e220
 * calls 0077bba0 FUN_0077bba0
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0065faf0 FUN_0065faf0
 * calls 006816a0 FUN_006816a0
 * calls 007c4b80 FUN_007c4b80
 * calls 00410e70 FUN_00410e70
 * calls 004063d0 FUN_004063d0
 * calls 00438650 FUN_00438650
 * calls 00454810 FUN_00454810
 * calls 007658a0 FUN_007658a0
 * calls 005d59f0 FUN_005d59f0
 * calls 004100a0 FUN_004100a0
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 005cc240 FUN_005cc240
 * calls 005d0370 FUN_005d0370
 * calls 00405680 FUN_00405680
 * calls 0041cb50 FUN_0041cb50
 * calls 006f1220 FUN_006f1220
 * calls 0040e100 FUN_0040e100
 * calls 0042ebb0 FUN_0042ebb0
 * calls 00765410 FUN_00765410
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043dd30(int **param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int ***pppiVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int ****ppppiVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int ***pppiVar11;
  int *piVar12;
  int **ppiVar13;
  int ****ppppiVar14;
  int unaff_ESI;
  undefined4 *puVar15;
  int *piVar16;
  float10 fVar17;
  float10 fVar18;
  undefined1 *puVar19;
  float *pfVar20;
  float *pfStack_4d4;
  int ***pppiStack_4d0;
  int **ppiStack_4cc;
  int ****ppppiStack_4c8;
  int ****ppppiStack_4c4;
  int ****ppppiStack_4b0;
  int *piStack_4ac;
  float *pfStack_4a8;
  int ***pppiStack_4a4;
  int **ppiStack_4a0;
  float fStack_49c;
  int ***pppiStack_498;
  float fStack_494;
  undefined1 *puStack_490;
  int ****ppppiStack_48c;
  int ***pppiStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  int **ppiStack_478;
  int ***pppiStack_474;
  int iStack_470;
  int local_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  int ***pppiStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float afStack_438 [3];
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int aiStack_420 [16];
  float fStack_3e0;
  int ***pppiStack_3dc;
  float fStack_3d8;
  char cStack_364;
  undefined4 uStack_33c;
  char cStack_328;
  short sStack_326;
  int **ppiStack_310;
  float fStack_30c;
  int ***pppiStack_308;
  int **ppiStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined4 auStack_e0 [16];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [72];
  int *piStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869516;
  pvStack_c = ExceptionList;
  ppppiStack_4c4 = (int ****)0x43dd61;
  ExceptionList = &pvStack_c;
  iVar4 = (*(code *)(*param_1)[2])();
  if (*(int *)(iVar4 + 0x1c) != 0) {
    ppppiStack_4c4 = (int ****)&LAB_004037e0;
    ppppiStack_4c8 = (int ****)0x43dd7d;
    piVar5 = (int *)FUN_005d59f0();
    if (piVar5 != (int *)0x0) {
      ppppiStack_4c4 = (int ****)0x43dd91;
      pfStack_4a8 = (float *)(**(code **)(*piVar5 + 0x10))();
      if (pfStack_4a8 != (float *)0x0) {
        aiStack_420[7] = *(undefined4 *)(iVar4 + 0x20);
        aiStack_420[8] = *(undefined4 *)(iVar4 + 0x24);
        aiStack_420[9] = *(undefined4 *)(iVar4 + 0x28);
        fStack_45c = *(float *)(iVar4 + 0x10);
        fStack_458 = *(float *)(iVar4 + 0x14);
        fStack_454 = *(float *)(iVar4 + 0x18);
        ppppiStack_4c4 = (int ****)0x43dde0;
        FUN_0077b9e0();
        ppppiStack_4c4 = (int ****)0x1;
        uStack_4 = 0;
        ppppiStack_4c8 = (int ****)0x43ddf5;
        FUN_0076e2d0();
        ppppiStack_4c4 = (int ****)0x0;
        ppppiStack_4c8 = (int ****)0x43de02;
        FUN_007658a0();
        ppppiStack_4c4 = (int ****)0x0;
        ppppiStack_4c8 = (int ****)0x0;
        ppiStack_4cc = (int **)(aiStack_420 + 7);
        pppiStack_4d0 = (int ***)&fStack_45c;
        uStack_33c = 2;
        pfStack_4d4 = (float *)0x43de29;
        FUN_007862d0();
        if (cStack_364 != '\0') {
          ppppiStack_4c4 = (int ****)0x0;
          ppppiStack_4c8 = (int ****)&DAT_008a2fb4;
          ppiStack_4cc = (int **)0x437a0000;
          pppiStack_4d0 = (int ***)0x43de4f;
          FUN_0077bba0();
          ppppiStack_4c4 = (int ****)(int)cStack_328;
          ppppiVar6 = (int ****)(sStack_326 * 0x16 + DAT_009b38c0);
          if ((((ppppiVar6 != (int ****)0x0) && ((~(*(byte *)((int)ppppiVar6 + 10) >> 1) & 1) != 0))
              && ((*(byte *)((int)ppppiVar6 + 10) & 1) == 0)) &&
             (fStack_494 = (float)(uint)*(ushort *)(ppppiVar6 + 1),
             _DAT_00891184 <= (float)(int)fStack_494 * _DAT_008eb34c)) {
            ppiStack_4cc = (int **)0x43debb;
            ppppiStack_4c8 = ppppiVar6;
            pcVar7 = (char *)FUN_00765410();
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              pppiStack_488 = (int ***)ppiStack_304;
              fStack_484 = fStack_300;
              ppiStack_4a0 = ppiStack_310;
              ppppiStack_4c4 = &pppiStack_488;
              fStack_49c = fStack_30c;
              fStack_480 = fStack_2fc;
              ppppiStack_4c8 = (int ****)&ppiStack_4a0;
              pppiStack_498 = pppiStack_308;
              ppiStack_4cc = (int **)0x43df1d;
              fVar17 = (float10)FUN_004100a0();
              fStack_494 = (float)fVar17;
              piStack_4ac = (int *)(float)(fVar17 + (float10)_DAT_0089096c);
              ppppiStack_4c4 = (int ****)0x43df39;
              iVar4 = FUN_007c4b80();
              if (6 < iVar4) {
                iVar4 = 6;
              }
              aiStack_420[2] = 3;
              aiStack_420[3] = 3;
              aiStack_420[0] = 2;
              aiStack_420[1] = 2;
              aiStack_420[4] = 4;
              aiStack_420[5] = 4;
              aiStack_420[6] = 5;
              ppppiVar6 = (int ****)(aiStack_420[iVar4] + 1);
              ppiStack_478 = (int **)0x0;
              pppiStack_474 = (int ***)0x0;
              iStack_470 = 0;
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              ppppiStack_4c8 = (int ****)0x43dfac;
              ppppiStack_4c4 = ppppiVar6;
              ppppiStack_48c = ppppiVar6;
              FUN_00438650();
              if (param_4 == 0) {
                ppppiVar14 = ppppiVar6;
                if (0 < (int)ppppiVar6) {
                  do {
                    ppppiStack_4c4 = (int ****)0x1;
                    puStack_490 = (undefined1 *)&ppppiStack_4c8;
                    ppppiStack_4c8 = DAT_0092c52c;
                    ppiStack_4cc = (int **)0x43e049;
                    pppiStack_4a4 = (int ***)FUN_00426610();
                    if (pppiStack_4a4 != (int ***)0x0) {
                      ppppiStack_4c4 = (int ****)0x43e05b;
                      (*(code *)(*pppiStack_4a4)[0x20])();
                      ppppiStack_4c4 = &pppiStack_4a4;
                      ppppiStack_4c8 = (int ****)0x43e069;
                      FUN_0043c4e0();
                    }
                    ppppiVar14 = (int ****)((int)ppppiVar14 + -1);
                  } while (ppppiVar14 != (int ****)0x0);
                }
              }
              else {
                puVar10 = *(undefined4 **)(param_4 + 4);
                if (puVar10 != puVar10 + *(int *)(param_4 + 0xc)) {
                  do {
                    pppiVar11 = (int ***)*puVar10;
                    ppppiStack_4c4 = (int ****)&ppppiStack_4b0;
                    ppppiStack_4c8 = (int ****)0x43dfda;
                    pppiStack_4a4 = pppiVar11;
                    cVar3 = FUN_0040e100();
                    if (cVar3 != '\0') {
                      pppiVar1 = *ppppiStack_4b0;
                      puStack_490 = (undefined1 *)&ppppiStack_4c4;
                      ppppiStack_4c8 = (int ****)0x0;
                      ppiStack_4cc = (int **)0x43dff2;
                      FUN_004023c0();
                      ppppiStack_4c8 = (int ****)0x43dffc;
                      (*(code *)pppiVar1[0x21])();
                      ppppiVar6 = ppppiStack_48c;
                    }
                    ppppiStack_4c4 = (int ****)0x43e00b;
                    (*(code *)(*pppiVar11)[0x20])();
                    ppppiStack_4c4 = &pppiStack_4a4;
                    ppppiStack_4c8 = (int ****)0x43e019;
                    FUN_0043c4e0();
                    puVar10 = puVar10 + 1;
                  } while (puVar10 !=
                           (undefined4 *)(*(int *)(param_4 + 4) + *(int *)(param_4 + 0xc) * 4));
                }
              }
              iVar4 = 0;
              while( true ) {
                ppiVar13 = ppiStack_478;
                if (ppiStack_478 == (int **)0x0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (int)pppiStack_474 - (int)ppiStack_478 >> 2;
                }
                if (iVar8 <= iVar4) break;
                ppppiStack_4c4 = (int ****)0x43e096;
                piVar5 = (int *)(**(code **)(*ppiStack_478[iVar4] + 0xac))();
                ppppiStack_4c4 = (int ****)0x43e0a0;
                (**(code **)(*piVar5 + 0x8c))();
                ppppiStack_4c4 = (int ****)0x43e0a8;
                piVar5 = (int *)(**(code **)(*ppiVar13[iVar4] + 4))();
                ppppiStack_4c4 = (int ****)0x890fc0;
                ppppiStack_4c8 = (int ****)0x43e0b4;
                uVar9 = FUN_005cc240();
                ppppiStack_4c4 = (int ****)0x3;
                ppppiStack_4c8 = (int ****)0x43e0c2;
                ppppiStack_4c8 = (int ****)(**(code **)(*piVar5 + 0x34))();
                ppiStack_4cc = (int **)0x43e0cf;
                iVar8 = FUN_00405680();
                *(undefined4 *)(iVar8 + 4) = uVar9;
                ppppiStack_4c4 = (int ****)0x43e0d9;
                FUN_0065faf0();
                iVar4 = iVar4 + 1;
                ppppiVar6 = ppppiStack_48c;
              }
              if (ppiStack_478 == (int **)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = (int)pppiStack_474 - (int)ppiStack_478 >> 2;
              }
              iVar4 = (int)ppppiVar6 - iVar4;
              pppiVar11 = pppiStack_474;
              if (0 < iVar4) {
                do {
                  puStack_490 = (undefined1 *)&ppppiStack_4c4;
                  ppppiStack_4c4 = DAT_0092c52c;
                  ppppiStack_4c8 = (int ****)0x43e118;
                  pppiStack_4a4 = (int ***)FUN_00410e70();
                  if (pppiStack_4a4 != (int ***)0x0) {
                    ppppiStack_4c4 = &pppiStack_4a4;
                    ppppiStack_4c8 = (int ****)0x43e12e;
                    FUN_0043c4e0();
                    ppiVar13 = ppiStack_478;
                    pppiVar11 = pppiStack_474;
                  }
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              if (ppiVar13 == (int **)0x0) {
                ppppiVar14 = (int ****)0x0;
              }
              else {
                ppppiVar14 = (int ****)((int)pppiVar11 - (int)ppiVar13 >> 2);
              }
              if ((int)ppppiVar6 + -1 <= (int)ppppiVar14) {
                ppppiStack_4c4 = (int ****)0x0;
                ppppiStack_4c8 = (int ****)0x5a318af6;
                ppiStack_4cc = (int **)0x43e15f;
                puVar10 = (undefined4 *)FUN_00454810();
                if (puVar10 == (undefined4 *)0x0) {
                  ppppiStack_4c4 = (int ****)0x4;
                  ppppiStack_4c8 = (int ****)0x43e16c;
                  puVar10 = (undefined4 *)FUN_006269b0();
                }
                pppiStack_4a4 = (int ***)*puVar10;
                ppppiStack_4c4 = (int ****)0x43e17a;
                FUN_006ed200();
                ppppiStack_4c4 = (int ****)0x43e181;
                pfStack_4a8 = (float *)FUN_00627320();
                ppppiStack_4b0 = (int ****)CONCAT31(ppppiStack_4b0._1_3_,1);
                if ((float)pppiStack_4a4 <= (float)(int)pfStack_4a8 * _DAT_00890fc8 * _DAT_00890980)
                {
                  ppppiStack_4b0 = (int ****)((uint)ppppiStack_4b0._1_3_ << 8);
                }
                ppppiStack_4c4 = (int ****)0x43e1bb;
                iVar4 = (*(code *)(*param_1)[0x45])();
                if (iVar4 == 2) {
                  ppppiStack_4b0 = (int ****)((uint)ppppiStack_4b0 & 0xffffff00);
                }
                ppppiStack_4c4 = ppppiStack_4b0;
                ppiStack_4cc = (int **)piStack_4ac;
                pppiStack_4d0 = (int ***)0x43e1d5;
                ppppiStack_4c8 = ppppiVar14;
                pfStack_4a8 = (float *)FUN_004063d0();
                if (pfStack_4a8 != (float *)0x0) {
                  if (((float)pppiStack_498 - fStack_454) * ((float)pppiStack_498 - fStack_454) +
                      (fStack_49c - fStack_458) * (fStack_49c - fStack_458) +
                      ((float)ppiStack_4a0 - fStack_45c) * ((float)ppiStack_4a0 - fStack_45c) <=
                      (fStack_480 - fStack_454) * (fStack_480 - fStack_454) +
                      (fStack_484 - fStack_458) * (fStack_484 - fStack_458) +
                      ((float)pppiStack_488 - fStack_45c) * ((float)pppiStack_488 - fStack_45c)) {
                    pppiVar11 = &ppiStack_4a0;
                    fStack_468 = (float)pppiStack_488 - (float)ppiStack_4a0;
                    fVar2 = fStack_484 - fStack_49c;
                    fStack_460 = fStack_480 - (float)pppiStack_498;
                  }
                  else {
                    pppiVar11 = (int ***)&pppiStack_488;
                    fStack_468 = (float)ppiStack_4a0 - (float)pppiStack_488;
                    fVar2 = fStack_49c - fStack_484;
                    fStack_460 = (float)pppiStack_498 - fStack_480;
                  }
                  ppppiStack_4b0 = (int ****)((*pfStack_4a8 / fStack_494) * _DAT_00890634);
                  fStack_468 = fStack_468 * (float)ppppiStack_4b0;
                  fStack_42c = fStack_468 + (float)*pppiVar11;
                  fStack_428 = fVar2 * (float)ppppiStack_4b0 + (float)pppiVar11[1];
                  fStack_424 = fStack_460 * (float)ppppiStack_4b0 + (float)pppiVar11[2];
                  piStack_4ac = (int *)((float)piStack_4ac / *pfStack_4a8);
                  fStack_494 = _DAT_0089096c;
                  if ((_DAT_0089096c < (float)piStack_4ac) &&
                     (fStack_494 = (float)piStack_4ac, _DAT_00892ed8 < (float)piStack_4ac)) {
                    fStack_494 = 1.14;
                  }
                  pppiStack_4d0 = (int ***)0x0;
                  puStack_490 = (undefined1 *)&pfStack_4d4;
                  ppiStack_4cc = (int **)0x0;
                  ppppiStack_4c8 = (int ****)0x0;
                  pfStack_4d4 = pfStack_4a8;
                  pfStack_4d4 = (float *)FUN_005cc240("AIRoadBlock");
                  FUN_0041cb50();
                  ppppiStack_4c4 = (int ****)&LAB_004038d0;
                  ppppiStack_4c8 = (int ****)0x43e395;
                  ppppiVar14 = (int ****)FUN_005d59f0();
                  ppppiStack_4c8 = (int ****)0x43e3a5;
                  ppppiStack_4c4 = ppppiVar14;
                  (**(code **)(*(int *)(local_46c + 0x2c) + 8))();
                  ppiStack_4cc = (int **)0x43e3b0;
                  ppppiStack_4c8 = ppppiVar14;
                  (*(code *)(*param_1)[0x20])();
                  ppiStack_4cc = param_1;
                  pppiStack_4d0 = (int ***)0x43e3b9;
                  (*(code *)(*ppppiVar14)[6])();
                  pppiStack_4d0 = &ppiStack_304;
                  pfStack_4d4 = afStack_438;
                  (*(code *)(*ppppiVar14)[0x10])();
                  puVar10 = (undefined4 *)FUN_006f1220(aiStack_420 + 6,&fStack_30c,0);
                  ppppiVar6 = (int ****)(unaff_ESI + 8);
                  puVar15 = auStack_e0;
                  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar15 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar15 = puVar15 + 1;
                  }
                  iVar4 = 0;
                  ppiStack_4a0 = ppiVar13;
                  do {
                    pppiVar11 = *ppppiVar6;
                    ppppiStack_4c4 = ppppiVar6;
                    if (pppiVar11 == (int ***)0x0) break;
                    pppiStack_474 = ppppiVar6[2];
                    ppiStack_478 = (int **)0x0;
                    fStack_47c = (float)pfStack_4a8 * (float)ppppiVar6[1];
                    fStack_454 = 0.0;
                    fStack_458 = fStack_47c;
                    pppiStack_450 = pppiStack_474;
                    FUN_00401670(&fStack_458,auStack_e0,&fStack_458);
                    fVar17 = (float10)fsin((float10)(float)ppppiVar6[3] * (float10)_DAT_00890510);
                    ppppiStack_4b0 = (int ****)pppiStack_308;
                    fVar18 = (float10)fcos((float10)(float)ppppiVar6[3] * (float10)_DAT_00890510);
                    piStack_4ac = (int *)(float)((float10)fStack_30c * (float10)(float)fVar17 +
                                                (float10)(float)ppiStack_304 * fVar18);
                    fStack_44c = fStack_458 + fStack_440;
                    fStack_448 = fStack_454 + fStack_43c;
                    fStack_444 = (float)pppiStack_450 + afStack_438[0];
                    if (pppiVar11 == (int ***)0x1) {
                      piVar5 = *ppiStack_4a0;
                      ppiStack_4a0 = ppiStack_4a0 + 1;
                      (**(code **)(*piVar5 + 0x80))();
                      piVar12 = (int *)(**(code **)(*piVar5 + 0xac))();
                      (**(code **)(*piVar12 + 0x5c))(&fStack_44c,&stack0xfffffb4c);
                      (**(code **)(*piVar12 + 0x88))();
                      (*(code *)(*ppppiVar14)[1])(piVar5);
                      *(int *)((int)fStack_480 + 0x94) = *(int *)((int)fStack_480 + 0x94) + 1;
                    }
                    else if ((1 < (int)pppiVar11) && ((int)pppiVar11 < 4)) {
                      if (pppiVar11 == (int ***)0x2) {
                        piVar5 = (int *)FUN_006816a0("XO_Sawhorse_1b_00",0x9663ad06);
                      }
                      else {
                        piVar5 = (int *)FUN_006816a0("XO_SpikeBelt_1b_DW_00",0xca89ef8f);
                        FUN_004023c0("Position");
                        uVar9 = FUN_007c4b80();
                        iVar8 = FUN_00405a40(uVar9);
                        *(int ****)(iVar8 + 4) = pppiStack_4a4;
                        FUN_0065faf0();
                      }
                      ppppiVar6 = ppppiStack_4c4;
                      if (piVar5 != (int *)0x0) {
                        fStack_49c = 0.0;
                        pppiStack_498 = (int ***)0x3;
                        cVar3 = FUN_00789870(&fStack_44c,aiStack_420 + 5,&fStack_464);
                        if (cVar3 == '\0') {
                          pfVar20 = (float *)0x0;
                          puVar19 = auStack_a0;
                        }
                        else {
                          if (fStack_460 < _DAT_00890968) {
                            fStack_464 = fStack_464 * _DAT_00890da8;
                            fStack_460 = fStack_460 * _DAT_00890da8;
                            fStack_45c = fStack_45c * _DAT_00890da8;
                          }
                          pfVar20 = &fStack_464;
                          puVar19 = auStack_60;
                        }
                        piVar12 = (int *)FUN_006f1220(puVar19,&stack0xfffffb4c,pfVar20);
                        pppiVar11 = *ppppiVar14;
                        piVar16 = aiStack_420 + 6;
                        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                          *piVar16 = *piVar12;
                          piVar12 = piVar12 + 1;
                          piVar16 = piVar16 + 1;
                        }
                        (*(code *)pppiVar11[2])
                                  (piVar5,CONCAT31((int3)((uint)*ppppiStack_4c4 >> 8),
                                                   *ppppiStack_4c4 == (int ***)0x3));
                        (**(code **)(*piStack_18 + 0x100))();
                        pppiStack_3dc = pppiStack_450;
                        fStack_3e0 = fStack_454;
                        fStack_3d8 = fStack_44c;
                        (**(code **)(*piVar5 + 8))(aiStack_420 + 4,1);
                        ppppiVar6 = ppppiStack_4c4;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    ppppiVar6 = ppppiVar6 + 4;
                    ppppiStack_4c4 = ppppiVar6;
                  } while (iVar4 < 6);
                  (**(code **)(*piStack_10 + 0xec))();
                  uStack_4 = uStack_4 & 0xffffff00;
                  if (ppiStack_478 != (int **)0x0) {
                    ppppiStack_4c4 = (int ****)0x0;
                    ppppiStack_4c8 = (int ****)((iStack_470 - (int)ppiStack_478 >> 2) << 2);
                    ppiStack_4cc = ppiStack_478;
                    pppiStack_4d0 = (int ***)0x43e6f4;
                    FUN_005d0370();
                  }
                  uStack_4 = 0xffffffff;
                  ppppiStack_4c4 = (int ****)0x43e70b;
                  FUN_0076e220();
                  ExceptionList = pvStack_c;
                  return 1;
                }
              }
              uStack_4 = uStack_4 & 0xffffff00;
              ppppiStack_4c4 = (int ****)0x43e1f3;
              FUN_0042ebb0();
            }
          }
        }
        uStack_4 = 0xffffffff;
        ppppiStack_4c4 = (int ****)0x43e20a;
        FUN_0076e220();
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

