/* speed.exe 00428720 FUN_00428720; analysis pseudocode, not buildable source.
 * calls 00734c90 FUN_00734c90
 * calls 00422080 FUN_00422080
 * calls 00425200 FUN_00425200
 * calls 0040e240 FUN_0040e240
 * calls 004141d0 FUN_004141d0
 * calls 004046b0 FUN_004046b0
 * calls 007c45f0 FUN_007c45f0
 * calls 00401930 FUN_00401930
 * calls 00410220 FUN_00410220
 * calls 00734cd0 FUN_00734cd0
 * calls 005c5e80 FUN_005c5e80
 * calls 00414b30 FUN_00414b30
 * calls 005d59f0 FUN_005d59f0
 * calls 004100a0 FUN_004100a0
 * calls 00401ae0 FUN_00401ae0
 * calls 005faf10 FUN_005faf10
 * calls 00788f30 FUN_00788f30
 * calls 00770090 FUN_00770090
 * calls 00407be0 FUN_00407be0
 * calls 00401b80 FUN_00401b80
 * calls 00414960 FUN_00414960
 * calls 006533b0 FUN_006533b0
 * calls 00778910 FUN_00778910
 * calls 00410180 FUN_00410180
 * calls 00409ef0 FUN_00409ef0
 * calls 007700b0 FUN_007700b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00428720(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  float *pfVar17;
  undefined4 uVar18;
  float *pfVar19;
  float unaff_EBX;
  float unaff_EBP;
  undefined4 unaff_ESI;
  float10 fVar20;
  float10 fVar21;
  float unaff_retaddr;
  uint uStack_6c;
  char cStack_68;
  float *pfStack_64;
  undefined4 uStack_60;
  float *pfStack_58;
  float *apfStack_50 [2];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  pfVar19 = pfStack_64;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x7c))();
  iVar11 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))();
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))();
  iVar12 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  fStack_14 = DAT_008a2fb8;
  fStack_18 = DAT_008a2fb4;
  fStack_10 = DAT_008a2fbc;
  pfVar13 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
  iVar14 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))();
  if ((iVar14 == 0) || (piVar15 = (int *)FUN_005d59f0(&LAB_00402840), piVar15 == (int *)0x0)) {
    if (*(char *)(param_1 + 100) == '\0') {
      *(uint *)(iVar12 + 0x80) = -(uint)(iVar11 == 1) & 2;
      if (((((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) &&
           (*(int *)(DAT_0091e000 + 0x1968) != 0)) &&
          ((cVar10 = FUN_005faf10(), cVar10 != '\0' &&
           (pfVar13 = (float *)(**(code **)(**(int **)(param_1 + 0x40) + 100))(),
           apfStack_50[0] = pfVar13, *(char *)(pfVar13 + 0xb) != '\0')))) &&
         (*(char *)(DAT_0091e000 + 0x4549) == '\0')) {
        pfVar17 = pfVar13 + 4;
        iVar11 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
        if ((*(int *)(iVar11 + 0x78) != 3) && (cVar10 = FUN_00770090(), cVar10 == '\0')) {
          fVar20 = (float10)FUN_00401930(pfVar17,(float *)(param_1 + 0x68));
          if (((float10)_DAT_0089096c <= fVar20) ||
             (cVar10 = FUN_007700b0(*(undefined2 *)(iVar11 + 0x2da),1), cVar10 == '\0')) {
            fStack_c = apfStack_50[0][8];
            fStack_8 = apfStack_50[0][9];
            fStack_4 = apfStack_50[0][10];
            FUN_00788f30(pfVar17,&fStack_c,0);
            *(float *)(param_1 + 0x68) = *pfVar17;
            *(float *)(param_1 + 0x6c) = pfVar13[5];
            *(float *)(param_1 + 0x70) = pfVar13[6];
          }
        }
      }
    }
    else {
      *(undefined4 *)(iVar12 + 0x80) = 0;
      cVar10 = FUN_00770090();
      if (cVar10 == '\0') {
        iVar11 = (**(code **)(**(int **)(param_1 + 0x40) + 100))();
        FUN_0040e240(apfStack_50);
        if (*(char *)(param_1 + 0x66) == '\0') {
          if (*(char *)(param_1 + 0x65) == '\0') {
            pfVar17 = (float *)(**(code **)((int)*apfStack_50[0] + 0xa8))();
            fStack_48 = *pfVar17;
            fStack_44 = pfVar17[1];
            fStack_40 = pfVar17[2];
          }
          else {
            fStack_48 = *(float *)(iVar11 + 0x10);
            fStack_44 = *(float *)(iVar11 + 0x14);
            fStack_40 = *(float *)(iVar11 + 0x18);
          }
        }
        else {
          piVar15 = (int *)FUN_00425200(1);
          if (piVar15 == (int *)0x0) {
            fStack_3c = *(float *)(iVar11 + 0x10);
            fStack_38 = *(float *)(iVar11 + 0x14);
            fStack_34 = *(float *)(iVar11 + 0x18);
            pfVar17 = (float *)FUN_00409ef0();
            fStack_24 = *pfVar17;
            fStack_20 = pfVar17[1];
            fStack_1c = pfVar17[2];
            fVar20 = (float10)FUN_00410220(&fStack_24);
            if (fVar20 < (float10)_DAT_008910cc) {
              iVar11 = **(int **)(iVar11 + 0x1c);
              goto LAB_0042890c;
            }
          }
          else {
            piVar16 = (int *)(**(code **)(*piVar15 + 4))();
            pfVar17 = (float *)(**(code **)(*piVar16 + 0x60))();
            fStack_3c = *pfVar17;
            fStack_38 = pfVar17[1];
            fStack_34 = pfVar17[2];
            piVar16 = (int *)(**(code **)(*piVar15 + 4))();
            (**(code **)(*piVar16 + 0x68))(&fStack_24);
            fVar20 = (float10)FUN_00410220(&fStack_24);
            if (fVar20 < (float10)_DAT_008910cc) {
              piVar15 = (int *)(**(code **)(*piVar15 + 4))();
              iVar11 = *piVar15;
LAB_0042890c:
              piVar15 = (int *)(**(code **)(iVar11 + 0x54))();
              (**(code **)(*piVar15 + 0x34))(&fStack_24);
            }
          }
          pfVar17 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
          fStack_c = fStack_3c - *pfVar17;
          fStack_8 = fStack_38 - pfVar17[1];
          fStack_4 = fStack_34 - pfVar17[2];
          fVar20 = (float10)FUN_00410180(&fStack_c);
          if ((float10)_DAT_00890dd0 < fVar20) {
            FUN_00401b80(&fStack_c,(float)((float10)_DAT_0089096c / fVar20),&fStack_24);
          }
          pfVar17 = (float *)(param_1 + 0x68);
          fStack_48 = fStack_24 * _DAT_00891650 + fStack_3c;
          fStack_44 = fStack_20 * _DAT_00891650 + fStack_38;
          fStack_40 = fStack_1c * _DAT_00891650 + fStack_34;
          fVar20 = (float10)FUN_004100a0(pfVar17,&fStack_48);
          if ((fVar20 < (float10)_DAT_008905f8) &&
             (fVar20 = (float10)FUN_004100a0(&fStack_3c,pfVar17), (float10)_DAT_0089164c < fVar20))
          {
            fStack_48 = *pfVar17;
            fStack_44 = *(float *)(param_1 + 0x6c);
            fStack_40 = *(float *)(param_1 + 0x70);
          }
        }
        *(float *)(param_1 + 0x68) = fStack_48;
        *(float *)(param_1 + 0x6c) = fStack_44;
        *(float *)(param_1 + 0x70) = fStack_40;
        FUN_00788f30(&fStack_48,0,0);
      }
      fStack_8 = *(float *)(param_1 + 0x6c);
      fStack_24 = *(float *)(param_1 + 0x68) - *pfVar13;
      fStack_20 = fStack_8 - pfVar13[1];
      fStack_1c = *(float *)(param_1 + 0x70) - pfVar13[2];
      fStack_18 = fStack_24;
      fStack_14 = fStack_20;
      fStack_10 = fStack_1c;
      fStack_4 = fStack_1c;
    }
  }
  else {
    iVar11 = (**(code **)(*piVar15 + 8))();
    if ((iVar11 != 0) && (*(char *)(iVar11 + 4000) != '\0')) {
      *(undefined4 *)(iVar12 + 0x80) = 0;
      cVar10 = FUN_00770090();
      if (cVar10 == '\0') {
        FUN_00734c90(param_1 + 0x68);
        FUN_00788f30(param_1 + 0x68,0,0);
      }
      FUN_00734cd0(&fStack_18);
    }
  }
  fVar20 = (float10)FUN_006533b0(*(undefined4 *)(param_1 + 0x58));
  pfVar13 = (float *)(float)fVar20;
  apfStack_50[0] = pfVar13;
  FUN_00414960(pfVar13,&fStack_18);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x70))(pfVar13);
  iVar11 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  apfStack_50[0] = (float *)(iVar11 + 0x98);
  pfStack_58 = apfStack_50[0];
  if ((*(char *)(iVar11 + 0x55) != '\0') &&
     ((*(int *)(iVar11 + 0x58) != 0 || (*(int *)(iVar11 + 0x5c) != 0)))) {
    pfStack_58 = (float *)(iVar11 + 0x164);
  }
  uVar18 = (**(code **)(**(int **)(param_1 + 0x48) + 0x24))();
  fVar20 = (float10)FUN_00778910(pfStack_64,uVar18);
  fVar21 = (float10)(**(code **)(**(int **)(param_1 + 0x40) + 0xcc))();
  fVar1 = (float)fVar21;
  fVar20 = (float10)FUN_004141d0((float)fVar20,fVar1,uStack_6c);
  *(float *)(param_1 + 0x5c) = (float)fVar20;
  fVar20 = (float10)(**(code **)(**(int **)(param_1 + 0x3c) + 0x90))();
  fVar2 = (float)fVar20;
  fVar20 = (float10)(**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
  iVar11 = (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  if ((*(char *)(iVar11 + 0x21) == '\0') || (uStack_60 = 1, (float)fVar20 <= _DAT_00890968)) {
    uStack_60 = 0;
  }
  pfStack_64 = *(float **)(param_1 + 0x58);
  if ((float)pfStack_64 < fVar2) {
    pfStack_64 = (float *)fVar2;
  }
  fVar20 = (float10)FUN_00422080(pfStack_64,fVar1,uStack_60,uStack_6c);
  fVar3 = (float)fVar20;
  fVar4 = *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x7c) = fVar2;
  fVar4 = (fVar2 - fVar4) / unaff_retaddr;
  bVar6 = fVar4 < _DAT_00890968;
  *(float *)(param_1 + 0x78) = fVar4;
  if (((bVar6) && (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x5c))) &&
     (fVar2 < *(float *)(param_1 + 0x58))) {
    fVar5 = fVar4 + fVar3;
    if (_DAT_00890968 <= fVar4 + fVar3) {
      fVar5 = _DAT_00890968;
    }
    *(float *)(param_1 + 0x58) = fVar5 * unaff_retaddr + *(float *)(param_1 + 0x58);
  }
  if (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x5c)) {
    FUN_00401ae0(*(undefined4 *)(param_1 + 0x58),0,*(undefined4 *)(param_1 + 0x5c));
    fVar20 = (float10)FUN_007c45f0();
    fVar20 = (float10)fVar3 - fVar20 * (float10)fVar4;
    if ((float10)fVar3 <= fVar20) {
      fVar20 = (float10)fVar3;
    }
    if (fVar20 < (float10)_DAT_00890968) {
      fVar20 = (float10)_DAT_00890968;
    }
    *(float *)(param_1 + 0x58) =
         (float)(fVar20 * (float10)unaff_retaddr + (float10)*(float *)(param_1 + 0x58));
  }
  fVar5 = _DAT_00890968;
  cVar10 = (char)((uint)unaff_EBX >> 0x18);
  if (cVar10 == '\0') {
    if ((_DAT_00890968 < *(float *)(param_1 + 0xa4)) && (_DAT_008910f4 < fVar2)) {
      fVar7 = *(float *)(param_1 + 0xa4) - unaff_retaddr;
      *(float *)(param_1 + 0xa4) = fVar7;
      if (fVar7 <= fVar5) {
        fVar7 = _DAT_00890968;
      }
      *(float *)(param_1 + 0xa4) = fVar7;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = 0x40200000;
  }
  fVar5 = *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x5c)) {
    fVar5 = *(float *)(param_1 + 0x58);
  }
  if (fVar5 < _DAT_00890968) {
    fVar5 = _DAT_00890968;
  }
  *(float *)(param_1 + 0x58) = fVar5;
  fStack_34 = *pfStack_58;
  fStack_30 = pfStack_58[1];
  fStack_2c = pfStack_58[2];
  if (cVar10 != '\0') {
    *(float *)(param_1 + 0x58) = fVar1 * _DAT_00890634 * _DAT_00890958 + _DAT_00891648;
    fStack_34 = *apfStack_50[0];
    fStack_30 = apfStack_50[0][1];
    fStack_2c = apfStack_50[0][2];
  }
  *(undefined1 *)(param_1 + 0x67) = 0;
  fVar20 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x2c))();
  if (((float10)_DAT_008915f4 < fVar20) && (*(char *)(param_1 + 100) != '\0')) {
    fStack_28 = fStack_34 - *pfVar19;
    fStack_24 = fStack_30 - pfVar19[1];
    fStack_20 = fStack_2c - pfVar19[2];
    pfVar19 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x24))();
    fVar5 = fStack_20 * pfVar19[2];
    fVar8 = fStack_24 * pfVar19[1];
    fVar7 = fStack_28 * *pfVar19;
    fVar20 = (float10)FUN_005c5e80(fStack_28 * fStack_28 +
                                   fStack_24 * fStack_24 + fStack_20 * fStack_20);
    apfStack_50[0] = (float *)(float)fVar20;
    fVar20 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x2c))();
    if ((float10)(fVar7 + fVar8 + fVar5) <
        fVar20 * (float10)(float)apfStack_50[0] * (float10)_DAT_00891644) {
      iVar11 = (**(code **)(**(int **)(param_1 + 0x40) + 0xb8))();
      fStack_34 = *(float *)(iVar11 + 0x98);
      fStack_30 = *(float *)(iVar11 + 0x9c);
      fStack_2c = *(float *)(iVar11 + 0xa0);
      *(undefined1 *)(param_1 + 0x67) = 1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(&fStack_34);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x38))(fVar1);
  *(float *)(param_1 + 0x60) = fVar4;
  uStack_6c = (uint)fVar4 & 0xffffff00;
  uVar9 = uStack_6c;
  fVar20 = (float10)FUN_00407be0(unaff_EBP,fVar1,fVar1);
  if ((((*(char *)(param_1 + 0x67) != '\0') || ((char)((uint)unaff_ESI >> 0x10) != '\0')) ||
      ((char)((uint)unaff_ESI >> 0x18) != '\0')) ||
     (((float)fVar20 <= _DAT_00890968 ||
      (cVar10 = (**(code **)(**(int **)(param_1 + 0x30) + 0x24))(), cVar10 != '\0')))) {
LAB_00429175:
    uStack_6c = uVar9;
    fVar1 = *(float *)(param_1 + 0xa8) - fStack_8;
    if (fVar1 < _DAT_00890968) goto LAB_00429197;
  }
  else {
    fVar21 = (float10)FUN_006533b0(fVar1);
    fVar5 = (float)fVar21;
    cVar10 = FUN_00414b30(unaff_EBP,fVar1,(float)fVar20,fVar1);
    if (cVar10 != '\0') {
      fVar5 = fVar5 + _DAT_0089096c;
    }
    cStack_68 = SUB41(fVar1,0);
    fVar1 = (*(float *)(param_1 + 0x5c) - unaff_EBP) * fVar5;
    fVar5 = (unaff_EBX - fVar2) * fVar5;
    uStack_6c._1_3_ = (uint3)((uint)fVar4 >> 8);
    if (cStack_68 == '\0') {
      if (((-(fVar3 * _DAT_00891640 + _DAT_00890560) <= *(float *)(param_1 + 0xa8)) ||
          (cVar10 = FUN_004046b0(), cVar10 != '\0')) ||
         ((fVar1 <= _DAT_00890dac || (fVar5 <= unaff_EBX * _DAT_00890634)))) goto LAB_00429175;
    }
    else if ((fVar3 + fVar3 + _DAT_00890d3c < *(float *)(param_1 + 0xa8)) &&
            ((fVar1 < _DAT_00890da4 || (fVar5 < unaff_EBX * _DAT_008910ec)))) {
      uStack_6c = (uint)uStack_6c._1_3_ << 8;
      uVar9 = uStack_6c;
      goto LAB_00429175;
    }
    uStack_6c = CONCAT31(uStack_6c._1_3_,1);
    fVar1 = fStack_8 + *(float *)(param_1 + 0xa8);
    if (_DAT_00890968 < fVar1) goto LAB_00429197;
  }
  fVar1 = _DAT_00890968;
LAB_00429197:
  *(float *)(param_1 + 0xa8) = fVar1;
  (**(code **)(**(int **)(param_1 + 0x50) + 0x20))(uStack_6c);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(7);
  return;
}

