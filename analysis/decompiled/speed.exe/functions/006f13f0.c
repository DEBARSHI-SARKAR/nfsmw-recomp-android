/* speed.exe 006f13f0 FUN_006f13f0; analysis pseudocode, not buildable source.
 * calls 005fba00 FUN_005fba00
 * calls 005fa9a0 FUN_005fa9a0
 * calls 005eda20 FUN_005eda20
 * calls 006eba10 FUN_006eba10
 * calls 006eb9f0 FUN_006eb9f0
 * calls 006eb9d0 FUN_006eb9d0
 * calls 005fbb60 FUN_005fbb60
 * calls 00609c20 FUN_00609c20
 * calls 005fc260 FUN_005fc260
 * calls 006f00c0 FUN_006f00c0
 * calls 0040e540 FUN_0040e540
 * calls 006ebb90 FUN_006ebb90
 * calls 0056dc00 FUN_0056dc00
 * calls 005fb990 FUN_005fb990
 * calls 0056a440 FUN_0056a440
 * calls 005e46d0 FUN_005e46d0
 * calls 006e9830 FUN_006e9830
 * calls 006004d0 FUN_006004d0
 * calls 006e9860 FUN_006e9860
 * calls 006eba90 FUN_006eba90
 * calls 005dbed0 FUN_005dbed0
 * calls 0040e4a0 FUN_0040e4a0
 * calls 006ebb30 FUN_006ebb30
 * calls 005edc00 FUN_005edc00
 * calls 005ddec0 FUN_005ddec0
 * calls 005e8b20 FUN_005e8b20
 * calls 00735620 FUN_00735620
 * calls 006eba50 FUN_006eba50
 * calls 006ebab0 FUN_006ebab0
 * calls 0041eba0 FUN_0041eba0
 * calls 005fe090 FUN_005fe090
 * calls 006ee360 FUN_006ee360
 * calls 0040e440 FUN_0040e440
 * calls 006ebb10 FUN_006ebb10
 * calls 006ebad0 FUN_006ebad0
 * calls 004684d0 FUN_004684d0
 * calls 006ebaf0 FUN_006ebaf0
 * calls 00404a70 FUN_00404a70
 * calls 0040e180 FUN_0040e180
 * calls 005e55a0 FUN_005e55a0
 * calls 0056dea0 FUN_0056dea0
 * calls 006ebb70 FUN_006ebb70
 * calls 006ebbf0 FUN_006ebbf0
 * calls 00629be0 FUN_00629be0
 * calls 006ebbd0 FUN_006ebbd0
 * calls 006eba70 FUN_006eba70
 * calls 006ebbb0 FUN_006ebbb0
 * calls 006ebb50 FUN_006ebb50
 * calls 006eba30 FUN_006eba30
 * calls 005dbef0 FUN_005dbef0
 * calls 005fbe70 FUN_005fbe70
 * calls 005dda70 FUN_005dda70
 * calls 005d59f0 FUN_005d59f0
 * calls 0066ed60 FUN_0066ed60
 * calls 005ee220 FUN_005ee220
 * calls 0050e1b0 FUN_0050e1b0
 * calls 006ebc10 FUN_006ebc10
 * calls 006ede30 FUN_006ede30
 * calls 006e9890 FUN_006e9890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f13f0(int *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined2 extraout_var;
  uint3 uVar12;
  undefined4 *puVar11;
  byte bVar13;
  int *extraout_ECX;
  int unaff_EDI;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  int *piStack_68;
  float fStack_64;
  int *piStack_60;
  uint uStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  float **ppfStack_4c;
  int *piStack_30;
  int *piStack_2c;
  float fStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int *piStack_10;
  int *piStack_c;
  float *pfStack_8;
  int *piStack_4;
  
  if (param_1[0x1d] == 0) {
    return;
  }
  iVar4 = (**(code **)(param_1[0xb] + 0xc))();
  if (iVar4 == 0) {
    return;
  }
  ppfStack_4c = (float **)0x6f1427;
  piVar5 = (int *)FUN_005d59f0();
  if (piVar5 == (int *)0x0) {
    return;
  }
  ppfStack_4c = (float **)0x6f1442;
  piStack_14 = piVar5;
  piStack_4 = (int *)FUN_005d59f0();
  if (piStack_4 == (int *)0x0) {
    return;
  }
  ppfStack_4c = (float **)0x6f145b;
  iVar4 = FUN_005d59f0();
  if (iVar4 == 0) {
    return;
  }
  ppfStack_4c = (float **)0x6f146f;
  cVar3 = FUN_0040e4a0();
  if (cVar3 == '\0') {
    return;
  }
  ppfStack_4c = (float **)0x6f1483;
  FUN_006eb9d0();
  ppfStack_4c = (float **)0x6f148f;
  FUN_00609c20();
  ppfStack_4c = (float **)0x6f149b;
  FUN_006eb9f0();
  ppfStack_4c = (float **)0x6f14a7;
  cVar3 = FUN_0040e440();
  if (cVar3 == '\0') {
    return;
  }
  ppfStack_4c = (float **)0x6f14bb;
  piVar6 = (int *)(**(code **)(*piVar5 + 0xac))();
  ppfStack_4c = (float **)0x6f14c5;
  piVar6 = (int *)(**(code **)(*piVar6 + 0xa0))();
  ppfStack_4c = (float **)&piStack_30;
  piStack_50 = (int *)0x6f14d7;
  piStack_18 = piVar6;
  FUN_0040e180();
  ppfStack_4c = (float **)&piStack_1c;
  piStack_50 = (int *)0x6f14e4;
  cVar3 = FUN_006eba10();
  if (cVar3 != '\0') {
    iVar4 = *piStack_1c;
    ppfStack_4c = (float **)0x6f14f9;
    fVar15 = (float10)(**(code **)(*piVar5 + 0x90))();
    ppfStack_4c = (float **)(float)fVar15;
    piStack_50 = (int *)0x6f1504;
    (**(code **)(iVar4 + 4))();
  }
  ppfStack_4c = (float **)&piStack_10;
  piStack_50 = (int *)0x6f1515;
  cVar3 = FUN_006eba30();
  piVar10 = piStack_20;
  if (cVar3 != '\0') {
    ppfStack_4c = (float **)0x6f1529;
    cVar3 = (**(code **)(*piVar5 + 0x20))();
    ppfStack_4c = (float **)0x6f1536;
    fVar15 = (float10)(**(code **)(*piStack_2c + 4))();
    fStack_28 = (float)fVar15;
    if (cVar3 == '\0') {
      ppfStack_4c = (float **)0x6f154a;
      iVar4 = (**(code **)(*piVar5 + 0x30))();
      if (iVar4 != 1) {
        ppfStack_4c = (float **)&piStack_1c;
        piStack_50 = (int *)0x6f155b;
        cVar3 = FUN_006eba50();
        if (cVar3 != '\0') {
          ppfStack_4c = (float **)0x6f1568;
          fVar15 = (float10)(**(code **)(*piStack_1c + 4))();
          fStack_28 = (float)fVar15;
        }
      }
    }
    piVar14 = piStack_10;
    ppfStack_4c = (float **)fStack_28;
    piStack_50 = (int *)0x6f157c;
    (**(code **)(*piStack_10 + 4))();
    iVar4 = *piVar14;
    piStack_50 = (int *)0x6f1587;
    fVar15 = (float10)(**(code **)(*piStack_30 + 0xc))();
    piStack_50 = (int *)(float)fVar15;
    piStack_54 = (int *)0x6f1594;
    fVar15 = (float10)(**(code **)(*piStack_30 + 8))();
    piStack_54 = (int *)(float)fVar15;
    piStack_58 = (int *)0x6f159d;
    (**(code **)(iVar4 + 8))();
    iVar4 = *piVar14;
    piStack_58 = (int *)0x1;
    uStack_5c = 0x6f15a8;
    uStack_5c = (**(code **)(*piVar10 + 0x2c))();
    piStack_60 = (int *)0x6f15b0;
    piStack_60 = (int *)(**(code **)(*piVar10 + 4))();
    fStack_64 = 1.0201528e-38;
    (**(code **)(iVar4 + 0xc))();
    iVar4 = *piVar14;
    fStack_64 = 1.0201541e-38;
    fStack_64 = (float)(**(code **)(*piVar10 + 0x10))();
    piStack_68 = (int *)0x6f15c5;
    (**(code **)(iVar4 + 0x10))();
    piStack_68 = (int *)0x0;
    (**(code **)(*piVar14 + 0x14))();
    cVar3 = (**(code **)(*param_1 + 0x20))();
    piVar5 = param_1;
    if (cVar3 != '\0') {
      ppfStack_4c = (float **)&piStack_10;
      piStack_50 = (int *)0x6f15ec;
      cVar3 = FUN_0066ed60();
      if (cVar3 != '\0') {
        ppfStack_4c = (float **)&piStack_1c;
        piStack_1c = (int *)0x0;
        piStack_50 = (int *)0x6f1606;
        fVar15 = (float10)(**(code **)(*piStack_10 + 4))();
        piStack_20 = (int *)(float)fVar15;
        if ((((_DAT_00890968 < (float)piStack_1c) && (_DAT_00890968 < (float)piStack_20)) &&
            ((float)piStack_20 <= fStack_28)) &&
           (fStack_28 <= (float)piStack_20 + (float)piStack_1c)) {
          ppfStack_4c = (float **)0x1;
          piStack_50 = (int *)0x6f1657;
          (**(code **)(*piVar14 + 0x14))();
        }
      }
    }
  }
  ppfStack_4c = (float **)&piStack_10;
  piStack_50 = (int *)0x6f1668;
  cVar3 = FUN_006eba70();
  piVar14 = piStack_24;
  if (cVar3 != '\0') {
    ppfStack_4c = (float **)0x6f1678;
    cVar3 = (**(code **)(*piVar5 + 0x20))();
    piVar5 = piStack_10;
    iVar4 = *piStack_10;
    piStack_1c = (int *)CONCAT31(piStack_1c._1_3_,'\x01' - (cVar3 != '\0'));
    ppfStack_4c = (float **)piStack_1c;
    piStack_50 = (int *)0x6f1695;
    piStack_50 = (int *)(**(code **)(*piVar10 + 0x2c))();
    piStack_54 = (int *)0x6f169d;
    piStack_54 = (int *)(**(code **)(*piVar10 + 0x28))();
    piStack_58 = (int *)0x6f16a5;
    piStack_58 = (int *)(**(code **)(*piVar10 + 4))();
    uStack_5c = 0x6f16ab;
    (**(code **)(iVar4 + 4))();
    piVar14 = piStack_24;
    if (piStack_24 != (int *)0x0) {
      iVar4 = *piVar5;
      ppfStack_4c = (float **)0x6f16bd;
      fVar15 = (float10)(**(code **)(*piStack_24 + 8))();
      ppfStack_4c = (float **)(float)fVar15;
      piStack_50 = (int *)0x6f16c6;
      (**(code **)(iVar4 + 0xc))();
    }
    if (piStack_c != (int *)0x0) {
      iVar4 = *piVar5;
      ppfStack_4c = (float **)0x6f16d6;
      ppfStack_4c = (float **)(**(code **)(*piStack_c + 4))();
      piStack_50 = (int *)0x6f16dc;
      (**(code **)(iVar4 + 8))();
    }
  }
  pfVar1 = pfStack_8;
  if (pfStack_8 != (float *)0x0) {
    iVar4 = *(int *)param_1[0x1d];
    ppfStack_4c = (float **)0x6f16f5;
    iVar7 = (**(code **)((int)*pfStack_8 + 4))();
    ppfStack_4c = (float **)CONCAT31((int3)((uint)iVar7 >> 8),iVar7 != 0);
    piStack_50 = (int *)0x6f1701;
    (**(code **)(iVar4 + 0x20))();
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f170e;
    cVar3 = FUN_006eba90();
    piVar14 = piStack_24;
    if (cVar3 != '\0') {
      pfStack_8 = (float *)*pfStack_8;
      ppfStack_4c = (float **)0x6f1724;
      fVar15 = (float10)(**(code **)((int)*pfVar1 + 0xc))();
      ppfStack_4c = (float **)(float)fVar15;
      piStack_50 = (int *)0x6f1731;
      (*(code *)pfStack_8[1])();
      piVar14 = piStack_24;
    }
  }
  if (piVar14 != (int *)0x0) {
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f1746;
    cVar3 = FUN_006ebab0();
    if (cVar3 != '\0') {
      pfStack_8 = (float *)*pfStack_8;
      ppfStack_4c = (float **)0x6f175c;
      fVar15 = (float10)(**(code **)(*piVar14 + 8))();
      ppfStack_4c = (float **)(float)fVar15;
      piStack_50 = (int *)0x6f1769;
      (*(code *)pfStack_8[1])();
    }
  }
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f1776;
  cVar3 = FUN_006ebad0();
  if (cVar3 != '\0') {
    ppfStack_4c = (float **)0x6f1783;
    fVar15 = (float10)(**(code **)(*piStack_2c + 0x1c))();
    piStack_1c = (int *)(float)fVar15;
    if ((((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
        ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) &&
       (*(char *)(DAT_0091cf90 + 0x142) == '\0')) {
      piStack_1c = (int *)0x0;
    }
    ppfStack_4c = (float **)piStack_1c;
    piStack_50 = (int *)0x6f17c4;
    (**(code **)((int)*pfStack_8 + 4))();
  }
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f17d1;
  cVar3 = FUN_006ebaf0();
  if (cVar3 != '\0') {
    ppfStack_4c = (float **)param_1[0x21];
    piStack_50 = (int *)0x6f17e5;
    (**(code **)((int)*pfStack_8 + 4))();
  }
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f17f2;
  FUN_006ebb10();
  piVar5 = piStack_30;
  if (DAT_0091e000[0x658] == 0) {
LAB_006f181c:
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f1829;
    uVar8 = FUN_006ebb30();
    if ((char)uVar8 != '\0') {
      if (piVar6 == (int *)0x0) {
LAB_006f184d:
        ppfStack_4c = (float **)(uVar8 & 0xffffff00);
      }
      else {
        ppfStack_4c = (float **)0x6f183c;
        uVar8 = (**(code **)(*piVar6 + 0x2c))();
        if ((char)uVar8 != '\0') goto LAB_006f184d;
        ppfStack_4c = (float **)CONCAT31((int3)(uVar8 >> 8),1);
      }
      piStack_50 = (int *)0x6f185c;
      uVar8 = (**(code **)(*(int *)param_1[0x1d] + 0x1c))();
      if (piVar6 == (int *)0x0) {
LAB_006f186f:
        piStack_50 = (int *)(uVar8 & 0xffffff00);
      }
      else {
        piStack_50 = (int *)0x6f1867;
        uVar8 = (**(code **)(*piVar6 + 0x2c))();
        if ((char)uVar8 != '\0') goto LAB_006f186f;
        piStack_50 = (int *)CONCAT31((int3)(uVar8 >> 8),1);
      }
      piVar10 = piStack_c;
      piStack_54 = (int *)0x6f187d;
      (**(code **)(*piStack_c + 4))();
      if (piVar6 != (int *)0x0) {
        iVar4 = *piVar10;
        ppfStack_4c = (float **)0x6f188e;
        ppfStack_4c = (float **)(**(code **)(*piVar6 + 0x28))();
        piStack_50 = (int *)0x6f1894;
        (**(code **)(iVar4 + 0x18))();
        iVar4 = *piVar10;
        piStack_50 = (int *)0x6f189d;
        fVar15 = (float10)(**(code **)(*piVar6 + 0x18))();
        piStack_50 = (int *)(float)fVar15;
        piStack_54 = (int *)0x6f18a6;
        (**(code **)(iVar4 + 0x1c))();
        iVar4 = *piVar10;
        piStack_54 = (int *)0x6f18af;
        fVar15 = (float10)(**(code **)(*piVar6 + 0x20))();
        piStack_54 = (int *)(float)fVar15;
        piStack_58 = (int *)0x6f18b8;
        (**(code **)(iVar4 + 0x20))();
        iVar4 = *piVar10;
        piStack_58 = (int *)0x6f18c1;
        fVar15 = (float10)(**(code **)(*piVar6 + 0x24))();
        piStack_58 = (int *)(float)fVar15;
        uStack_5c = 0x6f18ca;
        (**(code **)(iVar4 + 0x24))();
        iVar4 = *piVar10;
        uStack_5c = 0x6f18d6;
        uStack_5c = (**(code **)(*piVar6 + 0xd0))();
        piStack_60 = (int *)0x6f18dc;
        (**(code **)(iVar4 + 0x28))();
        iVar4 = *piVar10;
        piStack_60 = (int *)0x6f18e8;
        piStack_60 = (int *)(**(code **)(*piVar6 + 0xd8))();
        fStack_64 = 1.020269e-38;
        fStack_64 = (float)(**(code **)(*piVar6 + 0xd4))();
        piStack_68 = extraout_ECX;
        (**(code **)(*piVar6 + 0xdc))(&piStack_68);
        uVar9 = (**(code **)(*piVar6 + 0x98))();
        (**(code **)(iVar4 + 0x2c))(uVar9);
        iVar4 = *piVar10;
        uVar9 = (**(code **)(*piVar6 + 0x94))();
        (**(code **)(iVar4 + 0x30))(uVar9);
        iVar4 = *piVar10;
        uVar9 = (**(code **)(*piVar6 + 0xa0))();
        (**(code **)(iVar4 + 0x34))(uVar9);
        iVar4 = *piVar10;
        uVar9 = (**(code **)(*piVar6 + 0x88))();
        (**(code **)(iVar4 + 0x38))(uVar9);
        iVar4 = *piVar10;
        uVar9 = (**(code **)(*piVar6 + 0x74))();
        fVar15 = (float10)(**(code **)(*piVar6 + 0x60))(uVar9);
        (**(code **)(iVar4 + 0x10))((float)fVar15);
        iVar4 = *piVar10;
        fVar15 = (float10)(**(code **)(*piVar6 + 0x118))();
        (**(code **)(iVar4 + 0x14))((float)fVar15);
        if (piVar5 != (int *)0x0) {
          piStack_1c = (int *)0x0;
          iVar4 = *piVar10;
          ppfStack_4c = (float **)&piStack_1c;
          piStack_50 = (int *)0x6f1990;
          piStack_50 = (int *)(**(code **)(*piVar5 + 0x34))();
          piStack_54 = (int *)0x6f1996;
          (**(code **)(iVar4 + 8))();
          piStack_54 = piStack_24;
          piStack_58 = (int *)0x6f19a2;
          (**(code **)(*piVar10 + 0xc))();
          iVar4 = *piVar10;
          piStack_58 = (int *)0x6f19ac;
          piStack_14 = (int *)(**(code **)(*piVar5 + 0x44))();
          piStack_58 = (int *)0x6f19b8;
          iVar7 = (**(code **)(*piVar5 + 0x40))();
          piStack_58 = (int *)((int)piStack_14 + iVar7);
          uStack_5c = 0x6f19c4;
          (**(code **)(iVar4 + 0x3c))();
          piVar5 = piStack_30;
        }
      }
    }
  }
  else {
    ppfStack_4c = (float **)0x6f1810;
    cVar3 = FUN_005fbe70();
    if (cVar3 != '\0') goto LAB_006f181c;
  }
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f19d9;
  cVar3 = FUN_006ebb50();
  pfVar1 = pfStack_8;
  if (cVar3 != '\0') {
    piVar10 = DAT_0091e000;
    if (DAT_0091e000 == (int *)0x0) {
LAB_006f1c02:
      if (piVar6 == (int *)0x0) goto LAB_006f1c15;
      ppfStack_4c = (float **)0x6f1c0d;
      piVar10 = (int *)(**(code **)(*piVar6 + 0x2c))();
      if ((char)piVar10 != '\0') goto LAB_006f1c15;
      ppfStack_4c = (float **)CONCAT31((int3)((uint)piVar10 >> 8),1);
    }
    else {
      if (DAT_0091e000[0x65a] != 0) {
        ppfStack_4c = (float **)0x6f1a07;
        piVar10 = (int *)FUN_005fbe70();
        if ((char)piVar10 != '\0') {
          ppfStack_4c = (float **)0x6f1a1a;
          piVar10 = (int *)FUN_0056dc00();
          if ((char)piVar10 == '\0') {
            ppfStack_4c = (float **)0x1;
            piStack_50 = (int *)0x6f1a2b;
            (**(code **)((int)*pfVar1 + 0xc))();
            piStack_50 = (int *)0x1;
            piStack_54 = (int *)0x6f1a34;
            (**(code **)((int)*pfVar1 + 8))();
            fVar2 = *pfVar1;
            piStack_54 = (int *)0x1;
            piStack_58 = (int *)0x6f1a3f;
            piStack_58 = (int *)FUN_005fa9a0();
            uStack_5c = 0x6f1a4b;
            piStack_54 = (int *)FUN_0056dea0();
            piStack_58 = (int *)0x0;
            uStack_5c = 0x6f1a53;
            (**(code **)((int)fVar2 + 0x10))();
            fVar2 = *pfVar1;
            uStack_5c = 0x6f1a5c;
            uStack_5c = FUN_005fa9a0();
            piStack_60 = (int *)0x0;
            fStack_64 = 1.0203207e-38;
            (**(code **)((int)fVar2 + 0x14))();
            fVar2 = *pfVar1;
            fStack_64 = 1.020322e-38;
            fVar15 = (float10)FUN_005fbb60();
            fStack_64 = (float)fVar15;
            piStack_68 = (int *)0x0;
            (**(code **)((int)fVar2 + 0x18))();
            fVar2 = *pfVar1;
            fStack_28 = DAT_0091e00c;
            uVar9 = FUN_005fa9a0();
            fVar15 = (float10)FUN_005edc00(uVar9);
            (**(code **)((int)fVar2 + 0x20))(0,(float)fVar15);
            fVar2 = *pfVar1;
            uVar9 = FUN_005fb990();
            (**(code **)((int)fVar2 + 0x24))(0,uVar9);
            uVar9 = FUN_005fa9a0();
            fVar15 = (float10)FUN_005edc00(uVar9);
            fVar16 = (float10)FUN_005fbb60();
            fVar15 = (float10)(float)fVar15;
            uVar12 = (uint3)(CONCAT22(extraout_var,
                                      (ushort)(fVar16 < fVar15) << 8 |
                                      (ushort)(NAN(fVar16) || NAN(fVar15)) << 10 |
                                      (ushort)(fVar16 == fVar15) << 0xe) >> 8);
            if (fVar16 < fVar15 == (fVar16 == fVar15)) {
              piVar10 = (int *)(**(code **)((int)*pfVar1 + 0x1c))(0,(uint)uVar12 << 8);
              piVar5 = piStack_30;
            }
            else {
              piVar10 = (int *)(**(code **)((int)*pfVar1 + 0x1c))(0,CONCAT31(uVar12,1));
              piVar5 = piStack_30;
            }
            goto LAB_006f1c02;
          }
        }
      }
      if (piVar6 != (int *)0x0) {
        ppfStack_4c = (float **)0x6f1b0d;
        piVar10 = (int *)(**(code **)(*piVar6 + 0x2c))();
        if ((char)piVar10 == '\0') {
          ppfStack_4c = (float **)(uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
          piStack_50 = (int *)0x0;
          piStack_54 = (undefined4 *)0x6f1b37;
          pfStack_8 = (float *)ppfStack_4c;
          puVar11 = (undefined4 *)FUN_005e46d0();
          bVar13 = 0;
          while (puVar11 != (undefined4 *)0x0) {
            piStack_50 = (int *)*puVar11;
            fVar2 = *pfVar1;
            ppfStack_4c = (float **)0x1;
            piVar5 = (int *)(uint)bVar13;
            piStack_54 = (int *)0x6f1b5c;
            ppfStack_4c = (float **)FUN_0056dea0();
            piStack_54 = (int *)0x6f1b63;
            piStack_50 = piVar5;
            (**(code **)((int)fVar2 + 0x10))();
            piStack_54 = (int *)*puVar11;
            uStack_5c = 0x6f1b6e;
            piStack_58 = piVar5;
            (**(code **)((int)*pfVar1 + 0x14))();
            uStack_5c = puVar11[3];
            fStack_64 = 1.0203597e-38;
            piStack_60 = piVar5;
            (**(code **)((int)*pfVar1 + 0x18))();
            fVar2 = *pfVar1;
            fStack_64 = 1.020361e-38;
            fVar15 = (float10)FUN_005ee220();
            fStack_64 = (float)fVar15;
            piStack_68 = piVar5;
            (**(code **)((int)fVar2 + 0x20))();
            fVar2 = *pfVar1;
            uVar9 = FUN_005e55a0();
            (**(code **)((int)fVar2 + 0x24))(piVar5,uVar9);
            if ((*(char *)(puVar11 + 2) == '\x03') || (uVar9 = 0, *(char *)(puVar11 + 2) == '\x04'))
            {
              uVar9 = 1;
            }
            (**(code **)((int)*pfVar1 + 0x1c))(piVar5,uVar9);
            ppfStack_4c = (float **)pfStack_8;
            piStack_50 = (int *)0x0;
            piStack_58 = (int *)0x6f1bd2;
            piStack_54 = puVar11;
            puVar11 = (undefined4 *)FUN_005dda70();
            bVar13 = bVar13 + 1;
            piVar6 = piStack_18;
          }
          ppfStack_4c = (float **)(uint)bVar13;
          piStack_50 = (int *)0x6f1bf5;
          (**(code **)((int)*pfVar1 + 0xc))();
          piStack_50 = (int *)0x0;
          piStack_54 = (int *)0x6f1bfe;
          piVar10 = (int *)(**(code **)((int)*pfVar1 + 8))();
          piVar5 = piStack_30;
        }
        goto LAB_006f1c02;
      }
LAB_006f1c15:
      ppfStack_4c = (float **)((uint)piVar10 & 0xffffff00);
    }
    piStack_50 = (int *)0x6f1c1f;
    (**(code **)((int)*pfVar1 + 4))();
  }
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f1c30;
  uVar8 = FUN_006ebb70();
  if ((char)uVar8 != '\0') {
    if (piVar6 == (int *)0x0) {
LAB_006f1c47:
      ppfStack_4c = (float **)(uVar8 & 0xffffff00);
    }
    else {
      ppfStack_4c = (float **)0x6f1c3f;
      uVar8 = (**(code **)(*piVar6 + 0x2c))();
      if ((char)uVar8 != '\0') goto LAB_006f1c47;
      ppfStack_4c = (float **)CONCAT31((int3)(uVar8 >> 8),1);
    }
    pfVar1 = pfStack_8;
    piStack_50 = (int *)0x6f1c55;
    (**(code **)((int)*pfStack_8 + 4))();
    if (piVar6 != (int *)0x0) {
      fVar2 = *pfVar1;
      ppfStack_4c = (float **)0x6f1c62;
      fVar15 = (float10)(**(code **)(*piVar6 + 0x60))();
      ppfStack_4c = (float **)(float)fVar15;
      piStack_50 = (int *)0x6f1c6b;
      (**(code **)((int)fVar2 + 0xc))();
      fVar2 = *pfVar1;
      piStack_50 = (int *)0x6f1c74;
      piStack_50 = (int *)(**(code **)(*piVar6 + 0x74))();
      piStack_54 = (int *)0x6f1c7a;
      (**(code **)((int)fVar2 + 0x10))();
      if (piVar5 != (int *)0x0) {
        ppfStack_4c = &pfStack_8;
        pfStack_8 = (float *)0x0;
        fVar2 = *pfVar1;
        piStack_50 = (int *)0x6f1c95;
        piStack_50 = (int *)(**(code **)(*piVar5 + 0x34))();
        piStack_54 = (int *)0x6f1c9b;
        (**(code **)((int)fVar2 + 8))();
      }
    }
  }
  ppfStack_4c = (float **)0x6f1ca0;
  cVar3 = FUN_0050e1b0();
  if (cVar3 != '\0') {
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f1cb5;
    cVar3 = FUN_00629be0();
    if (cVar3 != '\0') {
      fVar2 = *pfStack_8;
      ppfStack_4c = (float **)0x6f1cca;
      fVar15 = (float10)FUN_005fe090();
      ppfStack_4c = (float **)(float)fVar15;
      piStack_50 = (int *)0x6f1cd3;
      (**(code **)((int)fVar2 + 4))();
    }
  }
  if (DAT_0091e000[0x658] == 1) {
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f1cf7;
    cVar3 = FUN_006ebb90();
    pfVar1 = pfStack_8;
    piVar5 = DAT_0091e000;
    if (cVar3 != '\0') {
      fVar2 = *pfStack_8;
      ppfStack_4c = (float **)0x6f1d12;
      ppfStack_4c = (float **)FUN_005dbef0();
      piStack_50 = (int *)0x6f1d18;
      (**(code **)((int)fVar2 + 4))();
      fVar2 = *pfVar1;
      piStack_50 = (int *)0x6f1d25;
      piStack_50 = (int *)FUN_005fba00();
      piStack_54 = (int *)0x6f1d2b;
      (**(code **)((int)fVar2 + 8))();
      piStack_54 = (int *)0x6f1d38;
      ppfStack_4c = (float **)(**(code **)(*(int *)(unaff_EDI + 0x2c) + 0xc))();
      piStack_50 = (int *)0x6f1d40;
      piVar10 = (int *)FUN_005e8b20();
      piStack_1c = piVar10;
      if (piVar10 != (int *)0x0) {
        ppfStack_4c = (float **)piVar10[4];
        piStack_50 = (int *)0x6f1d59;
        (**(code **)((int)*pfVar1 + 0xc))();
        piStack_50 = (int *)(piVar10[10] + 1);
        piStack_54 = (int *)0x6f1d65;
        (**(code **)((int)*pfVar1 + 0x10))();
        piStack_54 = (int *)0x6f1d6c;
        iVar4 = FUN_00404a70();
        if ((iVar4 < 6) || (7 < iVar4)) {
          piStack_10 = (int *)*pfVar1;
          piStack_54 = (int *)0x6f1dbb;
          fVar15 = (float10)FUN_006004d0();
          piStack_54 = (int *)(float)fVar15;
          piStack_58 = (int *)0x6f1dc8;
          (*(code *)piStack_10[7])();
        }
        else {
          piStack_54 = (int *)0x6f1d7d;
          fVar15 = (float10)FUN_005fe090();
          piStack_10 = (int *)(float)fVar15;
          piStack_54 = (int *)0x6f1d8c;
          fVar15 = (float10)FUN_005fc260();
          piStack_54 = (int *)(float)(((float10)_DAT_0089096c - (float10)(float)piStack_10 / fVar15)
                                     * (float10)_DAT_00890fc8);
          piStack_58 = (int *)0x6f1dac;
          piStack_10 = piStack_54;
          (**(code **)((int)*pfVar1 + 0x1c))();
        }
        piStack_58 = (int *)0x6f1dd3;
        cVar3 = FUN_004684d0();
        if (cVar3 == '\0') {
          piStack_14 = (int *)*pfVar1;
          piStack_58 = (int *)0x6f1e05;
          fVar15 = (float10)FUN_005ddec0();
          piStack_58 = (int *)(float)fVar15;
          uStack_5c = 0x6f1e12;
          (*(code *)piStack_14[5])();
          uStack_5c = 0;
        }
        else {
          fVar2 = *pfVar1;
          piStack_58 = (int *)0x6f1de0;
          fVar15 = (float10)FUN_005fe090();
          piStack_58 = (int *)(float)fVar15;
          uStack_5c = 0x6f1de9;
          (**(code **)((int)fVar2 + 0x14))();
          uStack_5c = (uint)*(byte *)(piVar5 + 0x662);
        }
        piStack_60 = (int *)0x6f1e1b;
        (**(code **)((int)*pfVar1 + 0x18))();
        ppfStack_4c = (float **)0x6f1e20;
        cVar3 = FUN_0050e1b0();
        if (cVar3 != '\0') {
          ppfStack_4c = (float **)piStack_1c[0xc];
          if (*(char *)((int)piStack_1c + 0x21) != '\0') {
            ppfStack_4c = (float **)((int)ppfStack_4c + 1);
          }
          piStack_50 = (int *)0x6f1e3b;
          (**(code **)((int)*pfVar1 + 0x20))();
          piStack_50 = (int *)(piVar5[0x668] + 1);
          piStack_54 = (int *)0x6f1e4a;
          (**(code **)((int)*pfVar1 + 0x24))();
        }
      }
    }
  }
  if (DAT_0091e000[0x658] == 1) {
    ppfStack_4c = &pfStack_8;
    piStack_50 = (int *)0x6f1e6e;
    cVar3 = FUN_006ebbb0();
    pfVar1 = pfStack_8;
    if (cVar3 != '\0') {
      fVar2 = *pfStack_8;
      piStack_24 = DAT_0091e000;
      ppfStack_4c = (float **)0x6f1e8d;
      ppfStack_4c = (float **)FUN_005dbef0();
      piStack_50 = (int *)0x6f1e93;
      (**(code **)((int)fVar2 + 4))();
      fVar2 = *pfVar1;
      piStack_50 = (int *)0x6f1ea0;
      piStack_50 = (int *)FUN_005fba00();
      piStack_54 = (int *)0x6f1ea6;
      (**(code **)((int)fVar2 + 8))();
      piStack_54 = (int *)0x6f1eb9;
      ppfStack_4c = (float **)(**(code **)(*(int *)(unaff_EDI + 0x2c) + 0xc))();
      piStack_50 = (int *)0x6f1ec1;
      piStack_c = (int *)FUN_005e8b20();
      piVar5 = (int *)0x0;
      do {
        piStack_20 = (int *)((int)piVar5 + 1);
        piStack_1c = (int *)0xffffffff;
        piStack_2c = (int *)0x0;
        ppfStack_4c = (float **)0x6f1ee5;
        iVar4 = FUN_005dbef0();
        if (0 < iVar4) {
          do {
            ppfStack_4c = (float **)piStack_2c;
            piStack_50 = (int *)0x6f1efc;
            iVar4 = FUN_005dbed0();
            if (*(int **)(iVar4 + 0x10) == piStack_20) {
              piStack_1c = piStack_2c;
              break;
            }
            piStack_2c = (int *)((int)piStack_2c + 1);
            ppfStack_4c = (float **)0x6f1f15;
            iVar4 = FUN_005dbef0();
          } while ((int)piStack_2c < iVar4);
        }
        ppfStack_4c = (float **)0x0;
        piStack_54 = (int *)0x6f1f2f;
        piStack_50 = piVar5;
        (**(code **)((int)*pfVar1 + 0x24))();
        if (-1 < (int)piStack_1c) {
          ppfStack_4c = (float **)piStack_1c;
          piStack_50 = (int *)0x6f1f43;
          piVar6 = (int *)FUN_005dbed0();
          ppfStack_4c = (float **)0x6f1f4f;
          cVar3 = FUN_00735620();
          if (cVar3 != '\0') {
            ppfStack_4c = (float **)0x6f1f5a;
            piVar10 = (int *)FUN_0041eba0();
            if (piVar10 != (int *)0x0) {
              ppfStack_4c = (float **)0x6f1f65;
              iVar4 = (**(code **)(*piVar10 + 0x20))();
              if (iVar4 != 0) {
                ppfStack_4c = &pfStack_8;
                piStack_50 = (int *)0x6f1f75;
                cVar3 = FUN_0040e540();
                if (cVar3 != '\0') {
                  ppfStack_4c = (float **)0x6f1f82;
                  iVar4 = (**(code **)((int)*pfStack_8 + 8))();
                  if (iVar4 != 0) {
                    ppfStack_4c = (float **)(uint)*(byte *)(iVar4 + 0xf9e);
                    piStack_54 = (int *)0x6f1f96;
                    piStack_50 = piVar5;
                    (**(code **)((int)*pfVar1 + 0x24))();
                  }
                }
              }
            }
          }
          if (piVar6 == piStack_c) {
            piStack_50 = (int *)0x6f1fa4;
            ppfStack_4c = (float **)piVar5;
            (**(code **)((int)*pfVar1 + 0xc))();
          }
          ppfStack_4c = (float **)piVar6[2];
          piStack_54 = (int *)0x6f1fb0;
          piStack_50 = piVar5;
          (**(code **)((int)*pfVar1 + 0x10))();
          piStack_54 = (int *)piVar6[4];
          uStack_5c = 0x6f1fbc;
          piStack_58 = piVar5;
          (**(code **)((int)*pfVar1 + 0x14))();
          uStack_5c = piVar6[0x48];
          fStack_64 = 1.0205145e-38;
          piStack_60 = piVar5;
          (**(code **)((int)*pfVar1 + 0x18))();
          fVar2 = *pfVar1;
          fStack_64 = (float)((int)ppfStack_4c + 0x4c);
          piStack_68 = (int *)0x6f1fe0;
          fVar15 = (float10)FUN_005ddec0();
          piStack_68 = (int *)(float)fVar15;
          fVar15 = (float10)FUN_006004d0();
          (**(code **)((int)fVar2 + 0x20))(piVar5,(float)fVar15);
          iVar4 = piVar6[10];
          fVar2 = *pfVar1;
          fVar15 = (float10)FUN_005ddec0(uStack_5c + 0x4c);
          (**(code **)((int)fVar2 + 0x1c))(piVar5,iVar4,(float)fVar15);
          (**(code **)((int)*pfVar1 + 0x28))(piVar5,*(undefined1 *)((int)piVar6 + 0x1f));
          (**(code **)((int)*pfVar1 + 0x2c))(piVar5,(char)piVar6[7]);
          piVar6 = piStack_18;
        }
        piVar5 = piStack_20;
      } while ((int)piStack_20 < 4);
    }
  }
  ppfStack_4c = (float **)&piStack_18;
  piStack_50 = (int *)0x6f2062;
  cVar3 = FUN_006ebbd0();
  if (cVar3 != '\0') {
    if (piVar6 != (int *)0x0) {
      ppfStack_4c = (float **)0x6f2071;
      cVar3 = (**(code **)(*piVar6 + 0x2c))();
      piVar5 = piStack_18;
      if (cVar3 == '\0') {
        ppfStack_4c = (float **)0x1;
        piStack_50 = (int *)0x6f2082;
        (**(code **)(*piStack_18 + 8))();
        piStack_54 = (int *)0x6f2088;
        piStack_50 = piVar6;
        iVar4 = FUN_006f00c0();
        if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != param_1[0x22])) {
          piStack_50 = (int *)0x0;
          piStack_54 = (int *)0x6f20a5;
          (**(code **)(*piVar5 + 4))();
          param_1[0x22] = *(int *)(iVar4 + 8);
        }
        iVar4 = *piVar5;
        piStack_50 = (int *)0x6f20ba;
        piStack_50 = (int *)(**(code **)(*piVar6 + 0xe0))();
        piStack_54 = (int *)0x6f20c0;
        (**(code **)(iVar4 + 4))();
        goto LAB_006f20cd;
      }
    }
    ppfStack_4c = (float **)0x0;
    piStack_50 = (int *)0x6f20cd;
    (**(code **)(*piStack_18 + 8))();
  }
LAB_006f20cd:
  ppfStack_4c = &pfStack_8;
  piStack_50 = (int *)0x6f20da;
  cVar3 = FUN_006ebbf0();
  if (cVar3 != '\0') {
    fVar2 = *pfStack_8;
    ppfStack_4c = (float **)0x6f20ed;
    ppfStack_4c = (float **)(**(code **)(*piStack_4 + 0x24))();
    piStack_50 = (int *)0x6f20f3;
    (**(code **)((int)fVar2 + 4))();
  }
  ppfStack_4c = (float **)&piStack_4;
  piStack_50 = (int *)0x6f2100;
  uVar8 = FUN_006ebc10();
  if (((char)uVar8 != '\0') && (piStack_30 != (int *)0x0)) {
    ppfStack_4c = (float **)0x6f2113;
    fVar15 = (float10)(**(code **)(*piStack_30 + 4))();
    pfVar1 = (float *)(float)fVar15;
    piStack_50 = (int *)0x6f2125;
    ppfStack_4c = (float **)pfVar1;
    pfStack_8 = pfVar1;
    (**(code **)(*piStack_4 + 4))();
    piStack_50 = (int *)0x8b0608;
    piStack_54 = (int *)0x6f2136;
    ppfStack_4c = (float **)pfVar1;
    uVar8 = FUN_005eda20();
  }
  if (piVar6 == (int *)0x0) {
LAB_006f214e:
    piStack_18 = (int *)((uint)piStack_18 & 0xffffff00);
  }
  else {
    ppfStack_4c = (float **)0x6f2144;
    uVar8 = (**(code **)(*piVar6 + 0x114))();
    piStack_18 = (int *)CONCAT31(piStack_18._1_3_,1);
    if (uVar8 != 2) goto LAB_006f214e;
  }
  if (piVar6 != (int *)0x0) {
    ppfStack_4c = (float **)0x6f215e;
    uVar8 = (**(code **)(*piVar6 + 0x2c))();
    if ((char)uVar8 == '\0') {
      piStack_50 = (int *)CONCAT31((int3)(uVar8 >> 8),1);
      goto LAB_006f2168;
    }
  }
  piStack_50 = (int *)(uVar8 & 0xffffff00);
LAB_006f2168:
  ppfStack_4c = (float **)piStack_18;
  piStack_54 = (int *)0x6f2175;
  FUN_006ede30();
  if ((int *)param_1[0x1d] != (int *)0x0) {
    ppfStack_4c = (float **)param_2;
    piStack_50 = param_1 + 0x13;
    piStack_54 = (int *)0x6f218a;
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  if (piVar6 != (int *)0x0) {
    ppfStack_4c = (float **)0x6f2199;
    cVar3 = (**(code **)(*piVar6 + 0x2c))();
    if (cVar3 == '\0') {
      ppfStack_4c = (float **)0x6f21ab;
      fVar15 = (float10)(**(code **)(*piVar6 + 0x128))();
      if (fVar15 < (float10)_DAT_008b01b8) {
        ppfStack_4c = (float **)0x6f21c8;
        fVar15 = (float10)(**(code **)(*piStack_14 + 0x90))();
        piStack_14 = (int *)CONCAT31(piStack_14._1_3_,1);
        if (fVar15 <= (float10)_DAT_008a3814) {
          piStack_14 = (int *)((uint)piStack_14._1_3_ << 8);
        }
        piStack_18 = (int *)CONCAT31(piStack_18._1_3_,1);
        if (fVar15 <= (float10)_DAT_008a380c) {
          piStack_18 = (int *)((uint)piStack_18._1_3_ << 8);
        }
        param_2 = CONCAT31(param_2._1_3_,1);
        if (fVar15 <= (float10)_DAT_008a3810) {
          param_2 = (uint)param_2._1_3_ << 8;
        }
        ppfStack_4c = (float **)param_2;
        piStack_50 = (int *)0x6f221d;
        FUN_006e9890();
        ppfStack_4c = (float **)piStack_14;
        piStack_50 = (int *)0x6f222d;
        FUN_006e9860();
        ppfStack_4c = (float **)piStack_18;
        piStack_50 = (int *)0x6f223d;
        FUN_006e9830();
      }
    }
  }
  if (DAT_0091e000[0x658] == 0) {
    ppfStack_4c = (float **)0x6f2253;
    FUN_006ee360();
  }
  ppfStack_4c = (float **)0xffffffff;
  piStack_50 = piStack_30;
  piStack_58 = (int *)0x6f2261;
  piStack_54 = piVar6;
  FUN_0056a440();
  return;
}

