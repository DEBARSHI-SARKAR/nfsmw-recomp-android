/* speed.exe 004beb40 FUN_004beb40; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 * calls 007c4b80 FUN_007c4b80
 * calls 004e4270 FUN_004e4270
 * calls 004b02b0 FUN_004b02b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004beb40(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  *(undefined1 *)(param_1 + 0x96) = 0;
  FUN_004b0320(param_2);
  if (*(char *)(param_1 + 0x94) == '\0') {
    if ((*(char *)(param_1 + 0x95) != '\0') && (*(char *)(param_1 + 0x90) != '\0')) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined1 *)(param_1 + 0x95) = 0;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xc0);
    }
  }
  else if ((*(char *)(param_1 + 0x90) != '\0') && (*(char *)(param_1 + 0x6c) == '\0')) {
    if (*(char *)(param_1 + 0x97) != '\0') {
      *(undefined1 *)(param_1 + 0x96) = 1;
    }
    *(undefined1 *)(param_1 + 0x95) = 1;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0xa0);
    FUN_004b02b0(0,0x3f800000,*(undefined4 *)(&DAT_008f2154 + *(int *)(param_1 + 0xa0) * 0x18),0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb8);
    iVar6 = *(int *)(param_1 + 0x98) * 0x18;
    iVar3 = FUN_007c4b80();
    iVar5 = *(int *)(&DAT_008f2140 + iVar6) + iVar3;
    if (iVar5 < -9999) {
      iVar5 = -10000;
    }
    else if (0 < iVar5) {
      iVar5 = 0;
    }
    iVar3 = *(int *)(&DAT_008f2148 + iVar6) + iVar3;
    if (iVar3 < -9999) {
      iVar3 = -10000;
    }
    else if (0 < iVar3) {
      iVar3 = 0;
    }
    fVar7 = (float10)FUN_004e4270(iVar5);
    *(float *)(param_1 + 0xb4) = (float)fVar7;
    fVar7 = (float10)FUN_004e4270(iVar3);
    *(float *)(param_1 + 0xb8) = (float)fVar7;
    fVar7 = (float10)FUN_004e4270(*(undefined4 *)(&DAT_008f2144 + *(int *)(param_1 + 0x98) * 0x18));
    *(float *)(param_1 + 0xbc) = (float)fVar7;
    fVar7 = (float10)FUN_004e4270(*(undefined4 *)(&DAT_008f214c + *(int *)(param_1 + 0x98) * 0x18));
    *(float *)(param_1 + 0xc0) = (float)fVar7;
  }
  if ((*(char *)(param_1 + 0x94) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
    fVar1 = *(float *)(param_1 + 0xb4);
    fVar2 = *(float *)(param_1 + 0xa4) + _DAT_008910f0;
    if ((fVar1 <= fVar2) && (fVar2 = *(float *)(param_1 + 0xa4) - _DAT_008910f0, fVar2 <= fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xa4) = fVar2;
    fVar1 = *(float *)(param_1 + 0xbc);
    fVar2 = *(float *)(param_1 + 0xa8) + _DAT_008910f0;
    if ((fVar1 <= fVar2) && (fVar2 = *(float *)(param_1 + 0xa8) - _DAT_008910f0, fVar2 <= fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xa8) = fVar2;
    fVar1 = *(float *)(param_1 + 0xb8);
    fVar2 = *(float *)(param_1 + 0xac) + _DAT_008910f0;
    if ((fVar1 <= fVar2) && (fVar2 = *(float *)(param_1 + 0xac) - _DAT_008910f0, fVar2 <= fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xac) = fVar2;
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xb0) + _DAT_008910f0;
    if ((fVar1 <= fVar2) && (fVar2 = *(float *)(param_1 + 0xb0) - _DAT_008910f0, fVar2 <= fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0xb0) = fVar2;
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 200) = uVar4;
    uVar4 = FUN_007c4b80();
  }
  else {
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 200) = uVar4;
    uVar4 = FUN_007c4b80();
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  uVar4 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  if (*(char *)(param_1 + 0xd4) == '\0') {
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xcc) + 1;
    *(int *)(param_1 + 0xcc) = iVar3;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    iVar5 = *(int *)(param_1 + 0xc4) + 1;
    *(int *)(param_1 + 0xcc) = iVar3;
    *(int *)(param_1 + 0xc4) = iVar5;
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined1 *)(param_1 + 0xd4) = 0;
    }
    else {
      if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      *(int *)(param_1 + 0xc4) = iVar5;
      *(undefined1 *)(param_1 + 0xd4) = 0;
    }
  }
  *(bool *)(param_1 + 0x6c) = *(char *)(param_1 + 0x90) == '\0';
  return;
}

