/* speed.exe 0052ee50 FUN_0052ee50; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 005dd160 FUN_005dd160
 * calls 005dd1a0 FUN_005dd1a0
 * calls 00601020 FUN_00601020
 * calls 005e3980 FUN_005e3980
 * calls 005dd1d0 FUN_005dd1d0
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 00573140 FUN_00573140
 * calls 005fd160 FUN_005fd160
 * calls 00591d90 FUN_00591d90
 * calls 005dd1c0 FUN_005dd1c0
 * calls 005b5b70 FUN_005b5b70
 * calls 00590500 FUN_00590500
 * calls 00514c70 FUN_00514c70
 * calls 00572070 FUN_00572070
 * calls 00516be0 FUN_00516be0
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005dcf60 thunk_FUN_005d97a0
 * calls 005fb710 FUN_005fb710
 * calls 00514cc0 FUN_00514cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 005dd180 FUN_005dd180
 */

void __fastcall FUN_0052ee50(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined1 local_20 [32];
  
  FUN_005e3980(DAT_0091ca3c);
  iVar3 = FUN_005dd1d0();
  iVar4 = FUN_005dd1a0();
  iVar5 = FUN_005dd1c0();
  iVar6 = FUN_005dd180();
  iVar7 = FUN_00590500();
  iVar8 = FUN_005dd160();
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x15d80973,&DAT_0089d764,iVar3);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd802fba8,&DAT_0089d764,iVar5);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x322b18f9,&DAT_0089c2d0,iVar7);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xde7ad199,&DAT_0089d764,iVar4);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7242962e,&DAT_0089d764,iVar6);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x55c6e5f,&DAT_0089c2d0,iVar8);
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar3 < iVar4) {
    if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
       (iVar9 = FUN_005b8550(0x4c3b1536), iVar9 != 0)) {
      uVar14 = 0x16a259;
      goto LAB_0052efa4;
    }
  }
  else if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
          (iVar9 = FUN_005b8550(0x4c3b1536), iVar9 != 0)) {
    uVar14 = 0xe6361f46;
LAB_0052efa4:
    iVar9 = FUN_005b1360(uVar14);
    if (iVar9 != 0) {
      FUN_005b8400(iVar9,0);
      *(undefined4 *)(iVar9 + 0x10) = 0;
    }
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar5 < iVar6) {
    if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
       (iVar9 = FUN_005b8550(0x4c3b1537), iVar9 != 0)) {
      uVar14 = 0x16a259;
      goto LAB_0052f027;
    }
  }
  else if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
          (iVar9 = FUN_005b8550(0x4c3b1537), iVar9 != 0)) {
    uVar14 = 0xe6361f46;
LAB_0052f027:
    iVar9 = FUN_005b1360(uVar14);
    if (iVar9 != 0) {
      FUN_005b8400(iVar9,0);
      *(undefined4 *)(iVar9 + 0x10) = 0;
    }
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar7 < iVar8) {
    if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
       (iVar9 = FUN_005b8550(0x4c3b1538), iVar9 != 0)) {
      uVar14 = 0x16a259;
      goto LAB_0052f0ac;
    }
  }
  else if (((iVar9 != 0) && (iVar9 = FUN_00516af0(iVar9), iVar9 != 0)) &&
          (iVar9 = FUN_005b8550(0x4c3b1538), iVar9 != 0)) {
    uVar14 = 0xe6361f46;
LAB_0052f0ac:
    iVar9 = FUN_005b1360(uVar14);
    if (iVar9 != 0) {
      FUN_005b8400(iVar9,0);
      *(undefined4 *)(iVar9 + 0x10) = 0;
    }
  }
  if (*(char *)(param_1 + 0x148) == '\0') {
    uVar14 = FUN_0056bc10(0x3a64de21,DAT_0091ca3c);
  }
  else {
    uVar14 = FUN_0056bc10(0x96ca2471,DAT_0091ca3c);
  }
  FUN_00515e20(local_20,0x20,uVar14);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x242657ce,&DAT_008941f8,local_20);
  uVar14 = FUN_00573140("BLACKLIST_RIVAL_%02d_AKA",DAT_0091ca3c);
  uVar14 = FUN_0056bc10(uVar14);
  uVar10 = FUN_00573140("BLACKLIST_RIVAL_%02d_CHALLENGE",DAT_0091ca3c);
  uVar10 = FUN_0056bc10(uVar10);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ac3d0c9,&DAT_008941f8,uVar14);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x79cf0442,&DAT_008941f8,uVar10);
  uVar11 = thunk_FUN_005d97a0();
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  if (uVar11 != 0) {
    do {
      uVar14 = FUN_00601020(uVar13);
      FUN_005fb710(uVar14);
      bVar2 = FUN_005fd160(2);
      uVar13 = uVar13 + 1;
      *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) | bVar2;
    } while (uVar13 < uVar11);
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  if (((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xe & 1) != 0) ||
     ((int)(uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) < DAT_0091ca3c)) {
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  pcVar15 = *(char **)(param_1 + 0x10);
  if (pcVar15 == (char *)0x0) goto LAB_0052f2af;
  pcVar12 = pcVar15;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (pcVar12 == pcVar15 + 1) goto LAB_0052f2af;
  if (DAT_0091d218 < 1) {
    iVar9 = FUN_005b5b70(pcVar15);
    if (iVar9 == 0) {
      iVar9 = FUN_005b7580(pcVar15);
      if (iVar9 == 0) goto LAB_0052f2af;
      goto LAB_0052f26d;
    }
  }
  else {
    FUN_00572070();
    iVar9 = FUN_00591d90(pcVar15);
LAB_0052f26d:
    if (iVar9 == 0) goto LAB_0052f2af;
  }
  iVar9 = FUN_005b8550(0x34d4433b);
  if ((iVar9 != 0) &&
     (*(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x2400001, *(int *)(iVar9 + 0x18) == 5)) {
    iVar3 = *(int *)(iVar9 + 100);
    iVar9 = *(int *)(iVar9 + 0x60);
    if (0 < iVar9) {
      do {
        FUN_00514c70(iVar3);
        iVar3 = *(int *)(iVar3 + 4);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
LAB_0052f2af:
  if (*(char *)(param_1 + 0x14a) == '\0') {
    if (*(char *)(param_1 + 0x149) == '\0') {
      uVar14 = FUN_00573140("RIVAL_CHALLENGE_DEACTIVATED");
      FUN_00516be0(uVar14,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      if (((*(int *)(param_1 + 0x10) == 0) ||
          (iVar9 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar9 == 0)) ||
         (iVar9 = FUN_005b8550(0x55f6aa1a), iVar9 == 0)) {
        iVar9 = 0;
      }
      FUN_00514c70(iVar9);
    }
    else {
      uVar14 = FUN_00573140("RIVAL_CHALLENGE_ACTIVATED");
      FUN_00516be0(uVar14,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      if ((((*(int *)(param_1 + 0x10) != 0) &&
           (iVar9 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar9 != 0)) &&
          (iVar9 = FUN_005b8550(0x55f6aa1a), iVar9 != 0)) &&
         (((*(uint *)(iVar9 + 0x1c) & 0x40) == 0 &&
          (*(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffffe | 0x2400000,
          *(int *)(iVar9 + 0x18) == 5)))) {
        uVar14 = *(undefined4 *)(iVar9 + 100);
        iVar9 = *(int *)(iVar9 + 0x60);
        if (0 < iVar9) {
          do {
            FUN_00514cc0(uVar14);
            uVar14 = *(undefined4 *)(extraout_EDX_00 + 4);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
    }
  }
  else {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar9 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar9 != 0)) &&
        (iVar9 = FUN_005b8550(0x55f6aa1a), iVar9 != 0)) &&
       (*(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x2400001, *(int *)(iVar9 + 0x18) == 5))
    {
      iVar3 = *(int *)(iVar9 + 100);
      iVar9 = *(int *)(iVar9 + 0x60);
      if (0 < iVar9) {
        do {
          FUN_00514c70(iVar3);
          iVar3 = *(int *)(iVar3 + 4);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar9 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar9 != 0)) &&
       ((iVar9 = FUN_005b8550(0x34d4433b), iVar9 != 0 &&
        (((*(uint *)(iVar9 + 0x1c) & 0x40) == 0 &&
         (*(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffffe | 0x2400000,
         *(int *)(iVar9 + 0x18) == 5)))))) {
      uVar14 = *(undefined4 *)(iVar9 + 100);
      iVar9 = *(int *)(iVar9 + 0x60);
      if (0 < iVar9) {
        do {
          FUN_00514cc0(uVar14);
          uVar14 = *(undefined4 *)(extraout_EDX + 4);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    FUN_00516be0(0xb4c144b1,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
  }
  uVar14 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = FUN_00590500();
  uVar10 = FUN_0056bc10(0xce6b99b1,uVar10);
  FUN_005252d0(uVar14,0xb514e2d8,"%s %$d",uVar10);
  uVar14 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = FUN_0056bc10(0x73b79e0,*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(uVar14,0xf91a59f6,"%s %$d",uVar10);
  return;
}

