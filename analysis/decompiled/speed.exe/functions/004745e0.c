/* speed.exe 004745e0 FUN_004745e0; analysis pseudocode, not buildable source.
 * calls 004689e0 FUN_004689e0
 * calls 0045f340 FUN_0045f340
 * calls 00468a90 FUN_00468a90
 * calls 00474560 FUN_00474560
 * calls 004744b0 FUN_004744b0
 * calls 0045f640 FUN_0045f640
 * calls 005c5e80 FUN_005c5e80
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0076e2d0 FUN_0076e2d0
 * calls 0046b590 FUN_0046b590
 * calls 0076e220 FUN_0076e220
 * calls 0045da30 FUN_0045da30
 * calls 007862d0 FUN_007862d0
 * calls 0077bba0 FUN_0077bba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004745e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float local_3f0;
  float local_3ec;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  float local_3c4;
  undefined4 local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_390;
  float local_38c;
  float local_388;
  float local_380;
  float local_37c;
  float local_378;
  float local_370;
  float local_36c;
  float local_368;
  float local_360;
  float local_35c;
  float local_358;
  float local_350;
  undefined4 local_34c;
  undefined4 local_348;
  float local_340;
  undefined4 local_33c;
  undefined4 local_338;
  float local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_320;
  float local_31c;
  undefined4 local_318;
  char local_2b8;
  undefined4 local_290;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086a39b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_0077b9e0();
  local_14 = 0;
  FUN_0076e2d0(1);
  local_290 = 2;
  if (DAT_00911056 == '\0') {
    cVar3 = FUN_00474560(*(undefined4 *)(param_1 + 0x10));
    if ((cVar3 != '\0') && (cVar3 = FUN_004744b0(*(undefined4 *)(param_1 + 0xa0)), cVar3 != '\0')) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
  }
  else {
    DAT_00911056 = '\0';
    *(undefined4 *)(param_1 + 0xd4) = 2;
  }
  local_3f0 = *(float *)(&DAT_00894714 + *(int *)(param_1 + 0xd4) * 4);
  iVar5 = *(int *)(param_1 + 0xa0);
  local_3ec = 1.5;
  if (_DAT_008910bc < local_3f0 * *(float *)(iVar5 + 0x10)) {
    local_3f0 = _DAT_008910bc / *(float *)(iVar5 + 0x10);
  }
  if (_DAT_008910bc < _DAT_00890d44 * *(float *)(iVar5 + 0x10)) {
    local_3ec = _DAT_008910bc / *(float *)(iVar5 + 0x10);
  }
  FUN_0045f640(&local_320,iVar5 + 0x20,iVar5,0x3dcccccd);
  local_340 = -local_31c;
  local_33c = local_318;
  local_338 = local_320;
  FUN_0045f640(&local_360,*(int *)(param_1 + 0xa0) + 0x20,*(int *)(param_1 + 0xa0),local_3f0);
  local_38c = local_35c;
  local_36c = local_35c;
  local_390 = local_360;
  local_370 = local_360;
  local_388 = local_358;
  local_368 = local_358;
  FUN_0045f640(&local_380,*(int *)(param_1 + 0xa0) + 0x20,*(int *)(param_1 + 0xa0),local_3ec);
  local_3b0 = local_380;
  local_3a0 = local_380;
  iVar5 = *(int *)(param_1 + 0xa0);
  local_3a8 = local_378;
  local_398 = local_378;
  local_3ac = local_37c;
  local_39c = local_37c;
  local_348 = *(undefined4 *)(iVar5 + 0x20);
  local_350 = -*(float *)(iVar5 + 0x24);
  local_34c = *(undefined4 *)(iVar5 + 0x28);
  local_330 = -*(float *)(iVar5 + 0x54);
  local_32c = *(undefined4 *)(iVar5 + 0x58);
  local_328 = *(undefined4 *)(iVar5 + 0x50);
  local_3d0 = 0.0;
  local_3b4 = 0.0;
  local_3b8 = 0.0;
  local_3bc = 0.0;
  FUN_007862d0(&local_350,&local_330,1,0x3f800000);
  if (local_2b8 != '\0') {
    FUN_0077bba0(*(float *)(*(int *)(param_1 + 0xa0) + 0x10) * local_3f0,&DAT_008a2fb4,0);
    fVar8 = (float10)FUN_005c5e80((local_25c - local_268) * (local_25c - local_268) +
                                  (local_264 - local_270) * (local_264 - local_270));
    fVar4 = _DAT_00894604;
    if (_DAT_0089481c < (float)fVar8) {
      fVar4 = (_DAT_0089481c / (float)fVar8) * _DAT_00894604;
    }
    fVar7 = (local_264 - local_270) * fVar4 + local_270;
    fVar6 = (local_260 - local_26c) * fVar4 + local_26c;
    fVar4 = (local_25c - local_268) * fVar4 + local_268;
    FUN_0046b590();
    local_3c0 = 0x3f800000;
    local_3cc = fVar7;
    local_3c8 = fVar6;
    local_3c4 = fVar4;
    cVar3 = FUN_004689e0(&local_3cc,&local_350);
    if (cVar3 == '\0') {
LAB_00474a25:
      local_38c = -fVar7;
      local_390 = fVar4;
      local_388 = fVar6;
      fVar8 = (float10)FUN_0045f340(&DAT_009110b0,&local_390);
      if ((float10)_DAT_008945ec < fVar8) {
        fVar8 = (float10)FUN_0045f340(&local_360,&local_390);
        local_3bc = (float)fVar8;
      }
    }
    else {
      local_3c0 = 0x3f800000;
      local_3cc = fVar7;
      local_3c8 = fVar6;
      local_3c4 = fVar4;
      cVar3 = FUN_004689e0(&local_3cc,&local_340);
      if ((cVar3 == '\0') && (*(int *)(param_1 + 0xd4) != 2)) goto LAB_00474a25;
    }
    fVar8 = (float10)FUN_005c5e80((local_250 - local_268) * (local_250 - local_268) +
                                  (local_258 - local_270) * (local_258 - local_270));
    fVar4 = _DAT_00894604;
    if (_DAT_0089481c < (float)fVar8) {
      fVar4 = (_DAT_0089481c / (float)fVar8) * _DAT_00894604;
    }
    fVar7 = (local_258 - local_270) * fVar4 + local_270;
    fVar6 = (local_254 - local_26c) * fVar4 + local_26c;
    fVar4 = (local_250 - local_268) * fVar4 + local_268;
    FUN_0046b590();
    local_3c0 = 0x3f800000;
    local_3cc = fVar7;
    local_3c8 = fVar6;
    local_3c4 = fVar4;
    cVar3 = FUN_004689e0(&local_3cc,&local_350);
    if (cVar3 != '\0') {
      local_3c0 = 0x3f800000;
      local_3cc = fVar7;
      local_3c8 = fVar6;
      local_3c4 = fVar4;
      cVar3 = FUN_004689e0(&local_3cc,&local_340);
      if ((cVar3 != '\0') || (*(int *)(param_1 + 0xd4) == 2)) goto LAB_00474c46;
    }
    local_36c = -fVar7;
    local_370 = fVar4;
    local_368 = fVar6;
    fVar8 = (float10)FUN_0045f340(&DAT_009110b0,&local_370);
    if ((float10)_DAT_008945ec < fVar8) {
      fVar8 = (float10)FUN_0045f340(&local_360,&local_370);
      local_3b8 = (float)fVar8;
    }
  }
LAB_00474c46:
  FUN_0045f640(&local_3b0,&local_380,*(int *)(param_1 + 0xa0) + 0x60,0x40800000);
  fVar7 = local_3a8;
  fVar6 = local_3b0;
  fVar4 = -local_3ac;
  FUN_0046b590();
  local_3c8 = fVar7;
  local_3c4 = fVar6;
  local_3c0 = 0x3f800000;
  local_3cc = fVar4;
  local_3a8 = fVar7;
  cVar3 = FUN_004689e0(&local_3cc,&local_350);
  if (cVar3 == '\0') {
LAB_00474d39:
    fVar8 = (float10)FUN_0045f340(&DAT_009110b0,&local_3b0);
    if ((float10)_DAT_008945ec < fVar8) {
      fVar8 = (float10)FUN_0045f340(&local_380,&local_3b0);
      local_3b4 = (float)(fVar8 * (float10)_DAT_00890cd4);
    }
  }
  else {
    local_3c8 = fVar7;
    local_3c4 = fVar6;
    local_3c0 = 0x3f800000;
    local_3cc = fVar4;
    cVar3 = FUN_004689e0(&local_3cc,&local_340);
    if ((cVar3 == '\0') && (*(int *)(param_1 + 0xd4) != 2)) goto LAB_00474d39;
  }
  FUN_0045f640(&local_3a0,&local_380,*(int *)(param_1 + 0xa0) + 0x60,0xc0800000);
  fVar7 = local_398;
  fVar6 = local_3a0;
  fVar4 = -local_39c;
  FUN_0046b590();
  local_3c8 = fVar7;
  local_3c4 = fVar6;
  local_3c0 = 0x3f800000;
  local_3cc = fVar4;
  local_398 = fVar7;
  cVar3 = FUN_004689e0(&local_3cc,&local_350);
  if (cVar3 != '\0') {
    local_3c8 = fVar7;
    local_3c4 = fVar6;
    local_3c0 = 0x3f800000;
    local_3cc = fVar4;
    cVar3 = FUN_004689e0(&local_3cc,&local_340);
    if ((cVar3 != '\0') || (*(int *)(param_1 + 0xd4) == 2)) goto LAB_00474ea8;
  }
  fVar8 = (float10)FUN_0045f340(&DAT_009110b0,&local_3a0);
  if ((float10)_DAT_008945ec < fVar8) {
    fVar8 = (float10)FUN_0045f340(&local_380,&local_3a0);
    local_3d0 = (float)(fVar8 * (float10)_DAT_00890cd4);
  }
LAB_00474ea8:
  if ((((_DAT_00890968 < local_3bc) || (_DAT_00890968 < local_3b8)) || (_DAT_00890968 < local_3b4))
     || (_DAT_00890968 < local_3d0)) {
    if (local_3b4 + local_3bc <= local_3d0 + local_3b8) {
      fVar4 = local_39c;
      fVar6 = local_398;
      fVar7 = local_3a0;
      if (local_3d0 < local_3b8) {
        fVar4 = local_36c;
        fVar6 = local_368;
        fVar7 = local_370;
      }
    }
    else {
      fVar4 = local_3ac;
      fVar6 = local_3a8;
      fVar7 = local_3b0;
      if (local_3b4 < local_3bc) {
        fVar4 = local_38c;
        fVar6 = local_388;
        fVar7 = local_390;
      }
    }
    *(float *)(param_1 + 0x80) = fVar7;
    *(float *)(param_1 + 0x84) = fVar4;
    *(float *)(param_1 + 0x88) = fVar6;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(iVar5 + 0x48);
    uVar1 = *(undefined4 *)(iVar5 + 0x44);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar5 + 0x40);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + _DAT_00890d3c;
    cVar3 = FUN_00468a90((undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0xa0) + 0x20);
    if (cVar3 != '\0') {
      *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) - _DAT_00890d3c;
    }
  }
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + _DAT_00894594;
  _DAT_009110b8 = *(undefined4 *)(param_1 + 0x88);
  _DAT_009110b0 = *(undefined4 *)(param_1 + 0x80);
  _DAT_009110b4 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 200) = 0x3ed70a3d;
  *(undefined2 *)(param_1 + 0xce) = 1;
  iVar5 = FUN_0045da30(0x13);
  local_3d0 = (float)(iVar5 + 0x1a);
  iVar5 = FUN_0045da30(2);
  if (iVar5 != 0) {
    local_3d0 = (float)-(int)local_3d0;
  }
  *(float *)(param_1 + 0xa4) = (float)(int)local_3d0;
  if ((float)(int)local_3d0 != *(float *)(param_1 + 0xac)) {
    *(undefined2 *)(param_1 + 0xcc) = 2;
  }
  fVar4 = _DAT_00890968;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (fVar4 != *(float *)(param_1 + 0xa4)) {
    *(undefined2 *)(param_1 + 0xcc) = 2;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (DAT_00911020 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = 0;
    }
    if (DAT_00911020 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0;
    }
  }
  local_14 = 0xffffffff;
  FUN_0076e220();
  ExceptionList = local_1c;
  return;
}

