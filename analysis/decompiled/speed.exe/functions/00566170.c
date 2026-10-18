/* speed.exe 00566170 FUN_00566170; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 005cc240 FUN_005cc240
 * calls 00514e20 FUN_00514e20
 * calls 006bf530 FUN_006bf530
 * calls 00524c00 FUN_00524c00
 * calls 00469da0 FUN_00469da0
 * calls 00514d10 FUN_00514d10
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00566170(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_1c [7];
  
  iVar4 = FUN_006bf530();
  if ((iVar4 == 2) && (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x39) != '\0')) {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x16a259);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x4c),0x16a259,1);
    }
    if ((*(char *)(param_1 + 100) == '\0') || (*(char *)(param_1 + 0x65) != '\0')) {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x1744b3);
      if (cVar3 == '\0') {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        uVar6 = 0x1744b3;
        goto LAB_0056620f;
      }
    }
    else {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x16a259);
      if (cVar3 == '\0') {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        uVar6 = 0x16a259;
LAB_0056620f:
        FUN_00514d10(uVar5,uVar6,1);
      }
    }
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x50),0x5079c8f8);
    if (cVar3 != '\0') goto LAB_00566382;
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = 0x5079c8f8;
  }
  else {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x50),0x16a259);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x50),0x16a259,1);
    }
    if ((*(char *)(param_1 + 100) == '\0') || (*(char *)(param_1 + 0x65) != '\0')) {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x5079c8f8);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x4c),0x5079c8f8,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x5079c8f8);
      if (cVar3 != '\0') goto LAB_00566382;
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      uVar6 = 0x5079c8f8;
    }
    else {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x1744b3);
      if (cVar3 == '\0') {
        cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x33113ac);
        if ((cVar3 == '\0') &&
           (cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x16a259), cVar3 == '\0')) {
          uVar5 = 0x33113ac;
          goto LAB_005662cd;
        }
      }
      else {
        uVar5 = 0x16a259;
LAB_005662cd:
        FUN_00514d10(*(undefined4 *)(param_1 + 0x4c),uVar5,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x1744b3);
      if (cVar3 == '\0') {
        cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x33113ac);
        if ((cVar3 != '\0') ||
           (cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x4c),0x16a259), cVar3 != '\0'))
        goto LAB_00566382;
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        uVar6 = 0x33113ac;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        uVar6 = 0x16a259;
      }
    }
  }
  FUN_00514d10(uVar5,uVar6,1);
LAB_00566382:
  if ((*(float *)(param_1 + 0x54) <= _DAT_00890968) ||
     ((*(char *)(param_1 + 100) != '\0' && (*(char *)(param_1 + 0x65) == '\0')))) {
    if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 0x7fffffff)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    local_1c[0] = 0;
    local_1c[1] = 0x3f800000;
    FUN_00524c00(*(undefined4 *)(param_1 + 0x3c),local_1c,0);
    FUN_00524c00(*(undefined4 *)(param_1 + 0x40),local_1c,0);
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),0x16a259);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x44),0x16a259,1);
    }
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x1744b3);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x1744b3,1);
    }
  }
  else {
    fVar1 = _DAT_008f3aa8;
    if (_DAT_008f3aa8 < *(float *)(param_1 + 0x54)) {
      fVar1 = *(float *)(param_1 + 0x54);
    }
    if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x68) == 0x7fffffff)) {
      *(int *)(param_1 + 0x68) = DAT_00925ae8;
    }
    fVar2 = *(float *)(param_1 + 0x60) + _DAT_0089f24c;
    *(float *)(param_1 + 0x60) = fVar2;
    if (_DAT_0089096c < fVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    }
    local_1c[0] = DAT_00925ae8 - *(int *)(param_1 + 0x68);
    if (fVar1 * _DAT_0089f250 < (float)local_1c[0] * _DAT_00890984) {
      *(int *)(param_1 + 0x68) = DAT_00925ae8;
      *(undefined4 *)(param_1 + 0x60) = 0x3e99999a;
      uVar5 = FUN_005cc240(&DAT_00894b1c);
      iVar4 = FUN_00469da0(0);
      *(undefined4 *)(iVar4 + 4) = uVar5;
      FUN_0065faf0();
    }
    local_1c[0] = *(int *)(param_1 + 0x60);
    local_1c[1] = 0x3f800000;
    FUN_00524c00(*(undefined4 *)(param_1 + 0x3c),local_1c,0);
    FUN_00524c00(*(undefined4 *)(param_1 + 0x40),local_1c,0);
    FUN_00514e20(*(undefined4 *)(param_1 + 0x44),*(float *)(param_1 + 0x58) * _DAT_00890974);
    if (*(int *)(param_1 + 0x5c) == 2) {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),0xfa44e387);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x44),0xfa44e387,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0xfa44e387);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0xfa44e387,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x3c),0xfa44e387);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x3c),0xfa44e387,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),0xfa44e387);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0xfa44e387,1);
        return;
      }
    }
    else {
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),0x1744b3);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x44),0x1744b3,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x1744b3);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x1744b3,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x3c),0x1744b3);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x3c),0x1744b3,1);
      }
      cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),0x1744b3);
      if (cVar3 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0x1744b3,1);
        return;
      }
    }
  }
  return;
}

