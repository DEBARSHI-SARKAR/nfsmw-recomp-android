/* speed.exe 0057aee0 FUN_0057aee0; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 005155e0 FUN_005155e0
 * calls 00515d70 FUN_00515d70
 * calls 00514d10 FUN_00514d10
 * calls 00515140 FUN_00515140
 * calls 00524e20 FUN_00524e20
 * calls 004ae8f0 FUN_004ae8f0
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 * calls 00524cc0 FUN_00524cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057aee0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x70),0x5079c8f8);
    if (cVar2 != '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x70),0x33113ac,1);
    }
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x74),0x33113ac);
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x74),0x16a259), cVar2 == '\0')) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x74),0x33113ac,1);
    }
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x80),0x5079c8f8);
    if ((cVar2 != '\0') ||
       (cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x80),0x13f51124), cVar2 != '\0')) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x80),0x33113ac,1);
    }
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x78),0x5079c8f8);
    if (cVar2 == '\0') {
      return;
    }
    FUN_00514d10(*(undefined4 *)(param_1 + 0x78),0x33113ac,1);
    return;
  }
  cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x70),0x5079c8f8);
  if (cVar2 == '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x70),0x5079c8f8,1);
  }
  FUN_007c4b80();
  FUN_006547a0(local_10,4);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x88),&DAT_008941f8,local_10);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x9c),&DAT_0089c2d0,*(undefined4 *)(param_1 + 0x6c));
  cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x7c),0x5079c8f8);
  if (cVar2 == '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x7c),0x5079c8f8,1);
  }
  if (*(float *)(param_1 + 0x40) < _DAT_00890da8 != (*(float *)(param_1 + 0x40) == _DAT_00890da8)) {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x80),0x13f51124);
    if (cVar2 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x74),0x92975065,1);
      FUN_004ae8f0(0xc);
    }
    FUN_00514fd0(*(undefined4 *)(param_1 + 0xb4),&local_18,&local_1c);
    uVar4 = *(undefined4 *)(param_1 + 0xb4);
    local_1c = (_DAT_0089096c - *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54)) *
               *(float *)(param_1 + 0xd4);
    FUN_00515520(uVar4,local_14,&local_20);
    FUN_005155e0(uVar4,local_1c,local_20);
    uVar4 = *(undefined4 *)(param_1 + 0xb4);
    FUN_00514fd0(uVar4,local_14,&local_1c);
    FUN_00524cc0(uVar4,local_18,local_1c);
    if (_DAT_00890968 < *(float *)(param_1 + 0x3c)) {
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xbc),0x5079c8f8);
      if (cVar2 != '\0') {
        return;
      }
      FUN_00514d10(*(undefined4 *)(param_1 + 0xbc),0x5079c8f8,1);
      return;
    }
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xbc),0x5079c8f8);
    if (cVar2 == '\0') {
      return;
    }
    FUN_00514d10(*(undefined4 *)(param_1 + 0xbc),0x33113ac,1);
    return;
  }
  cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x80),0x13f51124);
  if (cVar2 == '\0') {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x74),0x16a259);
    if ((cVar2 != '\0') ||
       (cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x74),0x33113ac), cVar2 != '\0')) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x74),0x5079c8f8,1);
    }
  }
  else {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x80),0x92975065,1);
    FUN_004ae8f0(0xc);
  }
  cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xbc),0x5079c8f8);
  if (cVar2 != '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0xbc),0x33113ac,1);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar3 = iVar3 + -1;
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x90),&DAT_0089c2d0,iVar3);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x94),&DAT_0089c2d0,*(undefined4 *)(param_1 + 0x5c));
  FUN_00515d70(*(undefined4 *)(param_1 + 0x98),&DAT_0089c2d0,*(undefined4 *)(param_1 + 0x60));
  if (*(float *)(param_1 + 0x44) <= _DAT_00890968) {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb8),0x33113ac);
    if (cVar2 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xb8),0x33113ac,1);
    }
  }
  else {
    if (*(float *)(param_1 + 0x44) <= _DAT_00890bf8) {
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb8),0x26ded57);
      if (cVar2 == '\0') {
        uVar4 = *(undefined4 *)(param_1 + 0xb8);
        uVar5 = 0x26ded57;
        goto LAB_0057b23a;
      }
    }
    else {
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb8),0x5079c8f8);
      if (cVar2 == '\0') {
        uVar4 = *(undefined4 *)(param_1 + 0xb8);
        uVar5 = 0x5079c8f8;
LAB_0057b23a:
        FUN_00514d10(uVar4,uVar5,1);
      }
    }
    FUN_007c4b80();
    FUN_006547a0(local_10,4);
    FUN_00515d70(*(undefined4 *)(param_1 + 0x8c),&DAT_008941f8,local_10);
  }
  FUN_00515140(*(undefined4 *)(param_1 + 0xa0),&local_20,local_14);
  local_1c = _DAT_00890968;
  if (_DAT_008933d4 < *(float *)(param_1 + 0x40)) {
    fVar1 = *(float *)(param_1 + 0x40) - _DAT_008933d4;
    local_1c = fVar1 + fVar1;
  }
  local_1c = local_1c * *(float *)(param_1 + 0xc0);
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  FUN_00515520(uVar4,local_14,&local_18);
  FUN_005155e0(uVar4,local_1c,local_18);
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  FUN_00515140(uVar4,local_14,&local_18);
  FUN_00524e20(uVar4,local_20,local_18);
  if (*(float *)(param_1 + 0x40) <= _DAT_008933d4) {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xa0),0x1744b3);
    if (cVar2 == '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0xa0);
      uVar5 = 0x1744b3;
      goto LAB_0057b3a3;
    }
  }
  else {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xa0),0x26ded57);
    if (cVar2 == '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0xa0);
      uVar5 = 0x26ded57;
LAB_0057b3a3:
      FUN_00514d10(uVar4,uVar5,1);
    }
  }
  FUN_00515140(*(undefined4 *)(param_1 + 0xa4),&local_20,local_14);
  local_1c = _DAT_00899124;
  if ((*(float *)(param_1 + 0x40) <= _DAT_008933d4) &&
     (local_1c = _DAT_00890968, _DAT_0089f24c < *(float *)(param_1 + 0x40))) {
    local_1c = (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40)) - _DAT_0089f24c;
  }
  local_1c = local_1c * *(float *)(param_1 + 0xc4);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  FUN_00515520(uVar4,local_14,&local_18);
  FUN_005155e0(uVar4,local_1c,local_18);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  FUN_00515140(uVar4,local_14,&local_18);
  FUN_00524e20(uVar4,local_20,local_18);
  if ((_DAT_0089f24c <= *(float *)(param_1 + 0x40)) || (*(float *)(param_1 + 0x40) <= _DAT_00891698)
     ) {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xa8),0x1ca7c0);
    if (cVar2 != '\0') goto LAB_0057b4ce;
    uVar4 = *(undefined4 *)(param_1 + 0xa8);
    uVar5 = 0x1ca7c0;
  }
  else {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xa8),0x3826a28);
    if (cVar2 != '\0') goto LAB_0057b4ce;
    uVar4 = *(undefined4 *)(param_1 + 0xa8);
    uVar5 = 0x3826a28;
  }
  FUN_00514d10(uVar4,uVar5,1);
LAB_0057b4ce:
  FUN_00514fd0(*(undefined4 *)(param_1 + 0xac),&local_20,local_14);
  local_1c = _DAT_0089096c;
  if ((_DAT_00891068 <= *(float *)(param_1 + 0x40)) &&
     (local_1c = _DAT_00890968, *(float *)(param_1 + 0x40) < _DAT_00891698)) {
    local_1c = *(float *)(param_1 + 0x40) * _DAT_00890e94 - _DAT_0089f24c;
  }
  local_1c = local_1c * *(float *)(param_1 + 0xcc);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  FUN_00515520(uVar4,local_14,&local_18);
  FUN_005155e0(uVar4,local_1c,local_18);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  FUN_00514fd0(uVar4,local_14,&local_18);
  FUN_00524cc0(uVar4,local_20,local_18);
  FUN_00514fd0(*(undefined4 *)(param_1 + 0xb0),&local_20,local_14);
  local_1c = _DAT_00890968;
  if (*(float *)(param_1 + 0x40) < _DAT_00891068) {
    local_1c = (*(float *)(param_1 + 0x40) + _DAT_008933d4) * _DAT_00890e94;
  }
  local_1c = local_1c * *(float *)(param_1 + 0xd0);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  FUN_00515520(uVar4,local_14,&local_18);
  FUN_005155e0(uVar4,local_1c,local_18);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  FUN_00514fd0(uVar4,local_14,&local_18);
  FUN_00524cc0(uVar4,local_20,local_18);
  if (_DAT_00891068 <= *(float *)(param_1 + 0x40)) {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb0),0x1744b3);
    if (cVar2 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xb0),0x1744b3,1);
      return;
    }
  }
  else {
    cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb0),0x26ded57);
    if (cVar2 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xb0),0x26ded57,1);
      return;
    }
  }
  return;
}

