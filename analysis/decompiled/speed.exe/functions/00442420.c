/* speed.exe 00442420 FUN_00442420; analysis pseudocode, not buildable source.
 * calls 007749a0 FUN_007749a0
 * calls 00441c80 FUN_00441c80
 * calls 00401180 FUN_00401180
 * calls 0076e220 FUN_0076e220
 * calls 006e8de0 FUN_006e8de0
 * calls 00778250 FUN_00778250
 * calls 00408b00 FUN_00408b00
 * calls 0077bba0 FUN_0077bba0
 * calls 00410180 FUN_00410180
 * calls 004100a0 FUN_004100a0
 * calls 005c5e80 FUN_005c5e80
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0040fe20 FUN_0040fe20
 * calls 00410220 FUN_00410220
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00442420(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int *piVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 unaff_EBX;
  float10 fVar13;
  undefined3 uStack_3e8;
  undefined2 uStack_3e6;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  char cStack_390;
  undefined1 auStack_2f4 [152];
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 auStack_238 [556];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086986b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar9 = (int *)FUN_005d59f0(&LAB_004039c0);
  pfVar10 = (float *)(**(code **)(*piVar9 + 4))();
  fStack_3dc = *pfVar10 - *(float *)(param_1 + 0x1d8);
  fStack_3d8 = pfVar10[1] - *(float *)(param_1 + 0x1dc);
  fStack_3d4 = pfVar10[2] - *(float *)(param_1 + 0x1e0);
  fStack_3e0 = fStack_3dc * fStack_3dc + fStack_3d8 * fStack_3d8 + fStack_3d4 * fStack_3d4;
  fVar13 = (float10)FUN_005c5e80(fStack_3e0);
  if (((float10)_DAT_00890560 <= fVar13) || (*(char *)(param_1 + 400) == '\0')) {
LAB_004424ca:
    uStack_3e6 = uStack_3e6 & 0xff;
  }
  else {
    _uStack_3e8 = CONCAT13(1,uStack_3e8);
    if (*(char *)(param_1 + 0x478) == '\0') goto LAB_004424ca;
  }
  fVar13 = (float10)FUN_006e8de0();
  if ((uStack_3e6._1_1_ != '\0') &&
     (fVar13 - (float10)*(float *)(param_1 + 0x110) < (float10)_DAT_00892b64)) {
    ExceptionList = pvStack_c;
    return;
  }
  piVar11 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  (**(code **)(*piVar11 + 0x68))(&fStack_3c0);
  FUN_005c5e80(fStack_3c4 * fStack_3c4 + fStack_3c0 * fStack_3c0 + fStack_3bc * fStack_3bc);
  piVar11 = (int *)FUN_005d59f0(&LAB_004037e0);
  if ((piVar11 == (int *)0x0) || (cVar7 = (**(code **)(*piVar11 + 0x24))(), cVar7 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar5 = true;
    bVar6 = true;
    if (DAT_009b3829 != '\0') {
      uVar8 = 1;
      goto LAB_00442578;
    }
  }
  bVar5 = bVar6;
  uVar8 = 0;
LAB_00442578:
  *(undefined1 *)(param_1 + 0x191) = uVar8;
  if ((bVar5) && (DAT_009b3829 != '\0')) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  *(undefined1 *)(param_1 + 0x479) = uVar8;
  fVar13 = (float10)FUN_006e8de0();
  if (((char)((uint)unaff_EBX >> 0x18) == '\0') ||
     ((float10)_DAT_00890694 <= fVar13 - (float10)*(float *)(param_1 + 0x10c))) {
    fVar13 = (float10)FUN_006e8de0();
    *(float *)(param_1 + 0x10c) = (float)fVar13;
    puVar12 = (undefined4 *)(**(code **)(*piVar9 + 4))();
    uStack_39c = *puVar12;
    uStack_398 = puVar12[1];
    uStack_394 = puVar12[2];
    if (fStack_3e0 < _DAT_0089096c) {
      pfVar10 = (float *)(**(code **)(*piVar9 + 0x98))();
      fStack_3c0 = *pfVar10;
      fStack_3bc = pfVar10[1];
      fStack_3b8 = pfVar10[2];
      fVar13 = (float10)FUN_00410180(&fStack_3c0);
      fStack_3e0 = (float)fVar13;
    }
    fVar1 = _DAT_0089096c / fStack_3e0;
    fStack_3cc = fStack_3c0 * fVar1;
    fStack_3c8 = fStack_3bc * fVar1;
    fStack_3c4 = fStack_3b8 * fVar1;
    fVar2 = fVar1 + fVar1;
    if (fVar1 + fVar1 < _DAT_0089096c) {
      fVar2 = _DAT_0089096c;
    }
    fStack_3d0 = fVar1 * _DAT_00892fa8;
    if (fVar1 * _DAT_00892fa8 < _DAT_00890d3c) {
      fStack_3d0 = _DAT_00890d3c;
    }
    fStack_3d0 = fStack_3d0 * fStack_3e0;
    cStack_390 = (char)uStack_3e6;
    cVar7 = FUN_00441c80(&uStack_39c,&fStack_3cc,fVar2 * fStack_3e0,fStack_3d0,
                         *(undefined2 *)(param_1 + 0x13c),(int)*(short *)(param_1 + 0x13e));
    if (cVar7 != '\0') {
      if (((char)uStack_3e6 == '\0') || (DAT_009b3829 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 0x191) = uVar8;
      *(undefined1 *)(param_1 + 0x192) = 0;
      *(undefined1 *)(param_1 + 0x193) = 0;
      if (((char)uStack_3e6 == '\0') || (DAT_009b3829 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 0x479) = uVar8;
      *(undefined1 *)(param_1 + 0x47a) = 0;
      *(undefined1 *)(param_1 + 0x47b) = 0;
      FUN_00408b00(param_1 + 0x140);
      FUN_00408b00(param_1 + 0x428);
      *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)(param_1 + 0x4b6);
      *(short *)(param_1 + 0x13e) = (short)*(char *)(param_1 + 0x4b4);
      FUN_0077b9e0();
      uStack_4 = 0;
      FUN_00408b00(auStack_2f4);
      *(undefined4 *)(param_1 + 0x130) = uStack_25c;
      *(undefined4 *)(param_1 + 0x134) = uStack_258;
      *(undefined4 *)(param_1 + 0x138) = uStack_254;
      FUN_0040fe20(auStack_238,param_1 + 0x124);
      uStack_4 = 0xffffffff;
      FUN_0076e220();
    }
  }
  else {
    fVar13 = (float10)FUN_006e8de0();
    *(float *)(param_1 + 0x110) = (float)fVar13;
    FUN_0040fe20(param_1 + 0x1fc,&fStack_3ac);
    fStack_3c8 = -fStack_3ac;
    fStack_3b8 = fStack_3a4;
    fStack_3d0 = fStack_3a4;
    fStack_3cc = 0.0;
    fStack_3b4 = 0.0;
    fStack_3b0 = fStack_3c8;
    FUN_00410220(&fStack_3b8);
    fVar1 = fStack_3e0 * fStack_3ac + fStack_3d8 * fStack_3a4 + fStack_3a8 * fStack_3dc;
    if (_DAT_00890ea8 < fVar1) {
      fVar13 = (float10)FUN_007749a0(fStack_3b8 * fStack_3e0 +
                                     fStack_3b4 * fStack_3dc + fStack_3b0 * fStack_3d8 +
                                     *(float *)(param_1 + 0x404));
      fStack_3d4 = (float)fVar13;
      FUN_00778250(fStack_3d4,0);
      FUN_0077bba0(fVar1,param_1 + 0x1fc,0);
    }
    fVar13 = (float10)FUN_00410180(&fStack_3c4);
    fStack_3d0 = (float)fVar13;
    fVar13 = (float10)FUN_004100a0((float *)(param_1 + 0x4c0),(float *)(param_1 + 0x1d8));
    fVar1 = (float)((float10)fStack_3d0 - fVar13);
    if ((float10)_DAT_00890ea8 < (float10)fStack_3d0 - fVar13) {
      fStack_3dc = *(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x4c0);
      fStack_3d8 = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x4c4);
      fStack_3d4 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x4c8);
      fStack_3cc = fStack_3dc;
      fStack_3c8 = fStack_3d8;
      fStack_3c4 = fStack_3d4;
      FUN_00410220(&fStack_3dc);
      FUN_0040fe20(param_1 + 0x4e4,&fStack_3a8);
      pfVar10 = (float *)FUN_00401180(&fStack_3cc,fStack_3a0,0,-fStack_3a8);
      fStack_3b4 = *pfVar10;
      fStack_3b0 = pfVar10[1];
      fStack_3ac = pfVar10[2];
      fVar13 = (float10)FUN_007749a0(*(float *)(param_1 + 0x6ec) +
                                     ((fStack_3b4 * fStack_3c0 +
                                      fStack_3b0 * fStack_3bc + fStack_3ac * fStack_3b8) /
                                     fStack_3e0) * fVar1);
      fStack_3d0 = (float)fVar13;
      fVar2 = fStack_3d8 * fStack_3a4;
      fVar4 = fStack_3d4 * fStack_3a0;
      fVar3 = fStack_3dc * fStack_3a8;
      FUN_00778250(fStack_3d0,0);
      FUN_0077bba0((fVar3 + fVar4 + fVar2) * fVar1,&fStack_3dc,0);
      ExceptionList = pvStack_c;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

