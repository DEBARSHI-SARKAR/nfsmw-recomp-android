/* speed.exe 004769e0 FUN_004769e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0046b7e0 FUN_0046b7e0
 * calls 004700d0 FUN_004700d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004769e0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_78;
  undefined1 local_50 [76];
  
  fVar3 = _DAT_00890968;
  iVar5 = *(int *)(param_1 + 0x80);
  pfVar1 = (float *)(param_1 + 0x90);
  if (iVar5 != 2) {
    local_78 = 1.0;
    fVar2 = param_2 + *(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0x134) = fVar2;
    if ((fVar3 < *(float *)(param_1 + 0x138)) && (fVar2 < *(float *)(param_1 + 0x138))) {
      local_78 = fVar2 / *(float *)(param_1 + 0x138);
    }
    fVar6 = (float10)fcos(((float10)*(int *)(param_1 + 0x130) + (float10)_DAT_00894594) *
                          (float10)local_78 * (float10)local_78 * (float10)_DAT_00894edc);
    fVar8 = (float10)1.4426950408889634 *
            -((float10)local_78 * (float10)local_78 * (float10)*(float *)(param_1 + 300));
    fVar7 = ROUND(fVar8);
    fVar8 = (float10)f2xm1(fVar8 - fVar7);
    fVar7 = (float10)fscale((float10)1 + fVar8,fVar7);
    fVar6 = (float10)_DAT_0089096c - fVar7 * fVar6;
    if (iVar5 == 1) {
      fVar3 = param_2 * _DAT_00894ed8;
      *(float *)(param_1 + 0x94) = fVar3 * *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x94);
      fVar2 = fVar3 * *(float *)(param_1 + 0x124) + *pfVar1;
      fVar4 = fVar2;
      if (((DAT_00926134 == '\0') && (fVar4 = _DAT_008947f0, fVar2 <= _DAT_008947f0)) &&
         (fVar4 = fVar2, fVar2 < _DAT_008947f4)) {
        fVar4 = _DAT_008947f4;
      }
      *pfVar1 = fVar4;
      fVar3 = fVar3 * *(float *)(param_1 + 0x120) * _DAT_008947ec + *(float *)(param_1 + 0x98);
      fVar2 = fVar3;
      if (((DAT_00926134 == '\0') && (fVar2 = _DAT_008947f8, fVar3 <= _DAT_008947f8)) &&
         (fVar2 = fVar3, fVar3 < _DAT_008947fc)) {
        fVar2 = _DAT_008947fc;
      }
      *(float *)(param_1 + 0x98) = fVar2;
      fVar7 = (float10)_DAT_0089096c;
      *(float *)(param_1 + 0x9c) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xfc) +
                  (fVar7 - fVar6) * (float10)*(float *)(param_1 + 0xcc));
      *(float *)(param_1 + 0xa0) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0x100) +
                  (fVar7 - fVar6) * (float10)*(float *)(param_1 + 0xd0));
      *(float *)(param_1 + 0xb8) =
           (float)(fVar6 * (float10)(*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0xe8)) +
                  (float10)*(float *)(param_1 + 0xe8));
      *(float *)(param_1 + 0xb0) =
           (float)(((float10)*(float *)(param_1 + 0x110) - (float10)*(float *)(param_1 + 0xe0)) *
                  fVar6) + *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0xb4) =
           (float)(((float10)*(float *)(param_1 + 0x114) - (float10)*(float *)(param_1 + 0xe4)) *
                  fVar6) + *(float *)(param_1 + 0xe4);
      if (_DAT_00890960 < *(float *)(param_1 + 0x94)) {
        *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - _DAT_00890960;
      }
      if (*(float *)(param_1 + 0x94) < _DAT_00890968) {
        *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + _DAT_00890960;
      }
    }
    else if (iVar5 == 0) {
      fVar7 = (float10)_DAT_0089096c - fVar6;
      *pfVar1 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xf0) +
                       fVar7 * (float10)*(float *)(param_1 + 0xc0));
      *(float *)(param_1 + 0x94) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xf4) +
                  fVar7 * (float10)*(float *)(param_1 + 0xc4));
      *(float *)(param_1 + 0x98) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xf8) +
                  fVar7 * (float10)*(float *)(param_1 + 200));
      *(float *)(param_1 + 0x9c) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xfc) +
                  fVar7 * (float10)*(float *)(param_1 + 0xcc));
      *(float *)(param_1 + 0xa0) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0x100) +
                  fVar7 * (float10)*(float *)(param_1 + 0xd0));
      *(float *)(param_1 + 0xb8) =
           (float)(fVar6 * (float10)(*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0xe8)) +
                  (float10)*(float *)(param_1 + 0xe8));
      *(float *)(param_1 + 0xb0) =
           (float)(((float10)*(float *)(param_1 + 0x110) - (float10)*(float *)(param_1 + 0xe0)) *
                  fVar6) + *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0xb4) =
           (float)(((float10)*(float *)(param_1 + 0x114) - (float10)*(float *)(param_1 + 0xe4)) *
                  fVar6) + *(float *)(param_1 + 0xe4);
      if (_DAT_00890960 < *(float *)(param_1 + 0x94)) {
        *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - _DAT_00890960;
      }
      if (*(float *)(param_1 + 0x94) < _DAT_00890968) {
        *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + _DAT_00890960;
      }
      if (_DAT_00890960 < *(float *)(param_1 + 0x9c)) {
        *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - _DAT_00890960;
      }
      if (*(float *)(param_1 + 0x9c) < _DAT_00890968) {
        *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + _DAT_00890960;
      }
      if ((*(int *)(param_1 + 0x80) == 0) && (_DAT_0089096c <= local_78)) {
        *(undefined4 *)(param_1 + 0x80) = 2;
      }
    }
  }
  FUN_0046b7e0(local_50,pfVar1);
  if (DAT_00911020 == 0) {
    iVar5 = FUN_007c4b80();
    *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) =
         (short)((ulonglong)((longlong)iVar5 * 0xb60b60b7) >> 0x28) -
         ((short)(char)((char)(iVar5 / 0x1680000) + (char)(iVar5 >> 0x1f)) >> 0xf);
    if (DAT_00911020 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb0) = *(undefined4 *)(param_1 + 0x98);
    }
  }
  FUN_004700d0(local_50,param_2);
  return;
}

