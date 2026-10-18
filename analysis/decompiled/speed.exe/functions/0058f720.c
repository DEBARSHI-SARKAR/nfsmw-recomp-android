/* speed.exe 0058f720 FUN_0058f720; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 005252d0 FUN_005252d0
 * calls 00524850 FUN_00524850
 * calls 005bcc10 FUN_005bcc10
 * calls 00585b50 FUN_00585b50
 * calls 00460c50 FUN_00460c50
 * calls 005251a0 FUN_005251a0
 * calls 005251e0 FUN_005251e0
 * calls 00515b90 FUN_00515b90
 * calls 00525220 FUN_00525220
 * calls 00514c70 FUN_00514c70
 * calls 00515f20 FUN_00515f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058f720(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x266) == '\0') {
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x1e2640fa,param_1 + 0x34);
  }
  else {
    FUN_005251e0(*(undefined4 *)(param_1 + 0x10),0x1e2640fa);
    FUN_005bcc10(param_1 + 0x34);
  }
  iVar3 = *(int *)(param_1 + 0x260);
  if (iVar3 == 3) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xf9363f30,*(undefined4 *)(param_1 + 0x238));
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xfb8b67d1,*(undefined4 *)(param_1 + 0x240));
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xfde09072,*(undefined4 *)(param_1 + 0x248));
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar3 == 2) {
      FUN_00515f20(uVar2,0xb8a7c6ce,0);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
      FUN_00514c70(uVar2);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfde09072,&DAT_00890978);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xf9363f30,*(undefined4 *)(param_1 + 0x238));
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xfb8b67d1,*(undefined4 *)(param_1 + 0x240));
    }
    else if (iVar3 == 1) {
      FUN_00515f20(uVar2,0xb8a7c6ce,0);
      FUN_00515f20(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd,0);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
      FUN_00514c70(uVar2);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
      FUN_00514c70(uVar2);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfde09072,&DAT_00890978);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfb8b67d1,&DAT_00890978);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xf9363f30,*(undefined4 *)(param_1 + 0x238));
    }
    else {
      FUN_00515f20(uVar2,0xb8a7c6cc,0);
      FUN_00515f20(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd,0);
      FUN_00515f20(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce,0);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cc);
      FUN_00514c70(uVar2);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
      FUN_00514c70(uVar2);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
      FUN_00514c70(uVar2);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7f9dca9);
      FUN_00514c70(uVar2);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xf9363f30,&DAT_00890978);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfb8b67d1,&DAT_00890978);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfde09072,&DAT_00890978);
    }
  }
  iVar3 = FUN_00585b50(0x545570c6);
  fVar1 = *(float *)(iVar3 + 0x24);
  iVar3 = FUN_00460c50(param_1 + 0x34);
  fVar1 = (float)iVar3 * fVar1;
  if (_DAT_0089b86c <= fVar1) {
    if (_DAT_0089b868 <= fVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x792bc959;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0xa13adcaf;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x79b0c1c7;
  }
  FUN_00516c90(uVar4,uVar2,0);
  switch(*(undefined4 *)(param_1 + 0x234)) {
  case 0:
  case 2:
  case 5:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0xdbe419d4);
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xd4f4069,0x1a7afe27);
    FUN_00515b90(uVar2);
    uVar2 = 0x1a7afe27;
    break;
  case 1:
  case 4:
    if (DAT_00925e90 == 6) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x2bd146d3;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x6fd91524;
    }
    FUN_00525220(uVar2,0x42adb44c,uVar4);
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xd4f4069,0x6948e2b3);
    FUN_00515b90(uVar2);
    uVar2 = 0x6948e2b3;
    break;
  case 3:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0x60249a74);
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xd4f4069,0x39949433);
    FUN_00515b90(uVar2);
    uVar2 = 0x39949433;
    break;
  default:
    goto switchD_0058f9ea_default;
  }
  uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xfac88427,uVar2);
  FUN_00515b90(uVar2);
switchD_0058f9ea_default:
  return;
}

