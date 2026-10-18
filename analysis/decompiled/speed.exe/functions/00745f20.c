/* speed.exe 00745f20 FUN_00745f20; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0045dbd0 FUN_0045dbd0
 * calls 00454810 FUN_00454810
 * calls 00401dc0 FUN_00401dc0
 * calls 00401da0 FUN_00401da0
 * calls 00401d10 FUN_00401d10
 * calls 007c45f0 FUN_007c45f0
 * calls 00744c00 FUN_00744c00
 * calls 00402220 FUN_00402220
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00745f20(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  float10 fVar8;
  float10 extraout_ST1;
  
  fVar1 = _DAT_008f2260 * _DAT_008b2f58;
  if (((DAT_009885c8 == 0) && (cVar6 = FUN_00744c00(), cVar6 == '\0')) &&
     ((*(uint *)(param_1 + 0x3cc) < *(uint *)(param_1 + 0x3c8) ||
      ((*(uint *)(param_1 + 0x3cc) == 0 || (fVar1 < *(float *)(param_1 + 0x3d0))))))) {
    *(undefined4 *)(param_1 + 0x39c) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    return;
  }
  if (*(float *)(param_1 + 0x3d8) == _DAT_00890968) {
LAB_0074618f:
    *(undefined4 *)(param_1 + 0x3a4) = 0;
  }
  else {
    pfVar7 = *(float **)(param_1 + 0x38);
    fVar1 = pfVar7[2];
    fVar2 = pfVar7[1];
    fVar3 = *pfVar7;
    pfVar7 = (float *)FUN_00454810(0xda27cd35,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar4 = *pfVar7 * _DAT_008aae90;
    pfVar7 = (float *)FUN_00454810(0x24e25513,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar5 = *pfVar7 * _DAT_008aae90;
    if ((((fVar4 <= _DAT_00890968) || (fVar5 <= _DAT_00890968)) ||
        (*(int *)(param_3 + 0x78) + -2 < 0)) ||
       (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) <= _DAT_00890bf8)) {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      goto LAB_0074618f;
    }
    fVar8 = (float10)FUN_00402220(*(undefined4 *)(param_1 + 0x3c),param_1 + 0x330,0x3dcccccd,
                                  0x3f000000);
    fVar8 = (float10)FUN_00401d10((float)(fVar8 * (float10)_DAT_008b4bc0));
    FUN_00401ae0((float)fVar8);
    fVar8 = (float10)FUN_00401d10(*(undefined4 *)(param_1 + 0x3d8));
    fsin(fVar8 * (float10)_DAT_008933d4 * (float10)_DAT_008b2b8c);
    fVar8 = (float10)FUN_007c45f0();
    fVar2 = _DAT_00890968;
    fVar1 = (float)(fVar8 * extraout_ST1 * (float10)fVar5);
    *(float *)(param_1 + 0x3a4) = fVar1;
    if (*(float *)(param_1 + 0x3d8) <= fVar2) {
      if (*(float *)(param_1 + 0x3d8) < _DAT_00890968) {
        *(float *)(param_1 + 0x3a4) = fVar1 * _DAT_008910f0;
        fVar8 = (float10)FUN_00401da0((fVar4 / fVar5) * param_2 + *(float *)(param_1 + 0x3d8),0);
        *(float *)(param_1 + 0x3d8) = (float)fVar8;
      }
    }
    else {
      fVar8 = (float10)FUN_00401dc0(*(float *)(param_1 + 0x3d8) - (fVar4 / fVar5) * param_2,0);
      *(float *)(param_1 + 0x3d8) = (float)fVar8;
    }
  }
  fVar1 = *(float *)(param_3 + 0x7c) - *(float *)(param_1 + 0x39c);
  fVar2 = fVar1;
  if (fVar1 < _DAT_00890968) {
    fVar2 = -fVar1;
  }
  if (fVar2 < _DAT_008b2f60) {
    fVar1 = _DAT_00890968;
  }
  fVar2 = fVar1 + *(float *)(param_1 + 0x39c);
  fVar3 = _DAT_0089096c;
  if ((fVar2 < _DAT_0089096c) && (fVar3 = fVar2, fVar2 < _DAT_00890968)) {
    fVar3 = _DAT_00890968;
  }
  *(float *)(param_1 + 0x39c) = fVar3;
  fVar2 = _DAT_00890968;
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_3 + 0x94);
  if (*(float *)(param_3 + 0x98) != fVar2) {
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_3 + 0x98);
    goto LAB_00746360;
  }
  pfVar7 = (float *)FUN_00454810(0xe2c63383,0);
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)FUN_006269b0(4);
  }
  fVar2 = *(float *)(param_3 + 0x80) * *(float *)(param_3 + 0x7c) * *pfVar7 * _DAT_008aae90;
  pfVar7 = (float *)FUN_00454810(0xfaad3e61,0);
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)FUN_006269b0(4);
  }
  fVar3 = *pfVar7 * _DAT_008aae90;
  pfVar7 = (float *)FUN_00454810(0x564773be,0);
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)FUN_006269b0(4);
  }
  fVar8 = (float10)FUN_00401ae0((fVar1 / param_2) * *pfVar7,0,0x3e4ccccd);
  fVar1 = (float)(fVar8 * (float10)fVar2);
  fVar3 = fVar3 * param_2;
  if (fVar1 <= *(float *)(param_1 + 0x3a8)) {
    fVar3 = *(float *)(param_1 + 0x3a8) - fVar3;
    *(float *)(param_1 + 0x3a8) = fVar3;
    if (fVar3 <= fVar1) goto LAB_00746320;
  }
  else {
    fVar3 = fVar3 + *(float *)(param_1 + 0x3a8);
    *(float *)(param_1 + 0x3a8) = fVar3;
    if (fVar1 <= fVar3) {
LAB_00746320:
      fVar3 = fVar1;
    }
  }
  *(float *)(param_1 + 0x3a8) = fVar3;
  fVar1 = *(float *)(param_1 + 0x3a8);
  if (fVar2 <= *(float *)(param_1 + 0x3a8)) {
    fVar1 = fVar2;
  }
  if (fVar1 < _DAT_00890968) {
    fVar1 = _DAT_00890968;
  }
  *(float *)(param_1 + 0x3a8) = fVar1;
LAB_00746360:
  if (*(float *)(param_3 + 0x9c) == _DAT_00890968) {
    pfVar7 = (float *)FUN_00454810(0xf947fe58,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar1 = *pfVar7 * _DAT_008aae90;
    pfVar7 = (float *)FUN_00454810(0xe91f59bd,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar2 = *pfVar7 * _DAT_008aae90;
    pfVar7 = (float *)FUN_00454810(0x80e657ff,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar8 = (float10)FUN_0045dbd0(*(float *)(param_1 + 0x3a0) * *pfVar7 * _DAT_008b2b8c);
    *(float *)(param_1 + 0x3ac) =
         (float)(((float10)fVar1 * (float10)*(float *)(param_3 + 0x80) + (float10)fVar2) * fVar8 *
                (float10)*(float *)(param_3 + 0x80));
    return;
  }
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_3 + 0x9c);
  return;
}

