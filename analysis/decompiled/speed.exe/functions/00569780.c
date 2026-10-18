/* speed.exe 00569780 FUN_00569780; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00514c70 FUN_00514c70
 * calls 005af1c0 FUN_005af1c0
 * calls 00514d10 FUN_00514d10
 * calls 00515c00 FUN_00515c00
 * calls 00514cc0 FUN_00514cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00569780(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 < 3) || (*(char *)(param_1 + 0x5c) != '\0')) {
    FUN_00514c70(*(undefined4 *)(param_1 + 0x38));
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
LAB_005698cf:
    FUN_00514c70(uVar3);
  }
  else {
    if (iVar1 == 3) {
      uVar3 = FUN_005af1c0("PulseBlue");
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),uVar3);
      if (cVar2 == '\0') {
        pcVar4 = "PulseBlue";
LAB_0056989e:
        uVar3 = FUN_005af1c0(pcVar4,1);
        FUN_00514d10(*(undefined4 *)(param_1 + 0x38),uVar3);
      }
LAB_005698b3:
      FUN_00514cc0(*(undefined4 *)(param_1 + 0x38));
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      goto LAB_005698cf;
    }
    if (iVar1 == 4) {
      uVar3 = FUN_005af1c0("PulseGreen");
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),uVar3);
      if (cVar2 == '\0') {
        uVar3 = FUN_005af1c0("PulseGreen",1);
        FUN_00514d10(*(undefined4 *)(param_1 + 0x38),uVar3);
      }
      FUN_00514cc0(*(undefined4 *)(param_1 + 0x38));
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      goto LAB_005698cf;
    }
    if (iVar1 == 5) {
      if (*(float *)(param_1 + 0x60) <= _DAT_008f3c40) {
        uVar3 = FUN_005af1c0("PulseRed");
        cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),uVar3);
        if (cVar2 == '\0') {
          pcVar4 = "PulseRed";
          goto LAB_0056989e;
        }
        goto LAB_005698b3;
      }
      uVar3 = FUN_005af1c0("OVERHEAT_PULSE");
      cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0x3c),uVar3);
      if (cVar2 == '\0') {
        uVar3 = FUN_005af1c0("OVERHEAT_PULSE",1);
        FUN_00514d10(*(undefined4 *)(param_1 + 0x3c),uVar3);
      }
      FUN_00514c70(*(undefined4 *)(param_1 + 0x38));
      FUN_00514cc0(*(undefined4 *)(param_1 + 0x3c));
    }
  }
  if (*(int *)(param_1 + 0x4c) < 3) {
    return;
  }
  if (*(int *)(param_1 + 0x54) < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return;
  }
  if (iVar1 == 1) {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x44),0x2202b5b9);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x48),0x2202b5b9);
    pcVar4 = "EARLY";
  }
  else if (iVar1 == 2) {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x44),0x27d2dd45);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x48),0x27d2dd45);
    pcVar4 = "GOOD";
  }
  else if (iVar1 == 3) {
    FUN_00515c00(*(undefined4 *)(param_1 + 0x44),0x598b065);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x48),0x598b065);
    pcVar4 = "PERFECT";
  }
  else {
    if (iVar1 != 4) goto LAB_005699cd;
    FUN_00515c00(*(undefined4 *)(param_1 + 0x44),0xdf61b3e5);
    FUN_00515c00(*(undefined4 *)(param_1 + 0x48),0xdf61b3e5);
    pcVar4 = "OVERREV";
  }
  uVar3 = FUN_005af1c0(pcVar4,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x40),uVar3);
LAB_005699cd:
  FUN_00514c70(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

