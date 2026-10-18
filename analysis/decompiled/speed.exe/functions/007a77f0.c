/* speed.exe 007a77f0 FUN_007a77f0; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 005251a0 FUN_005251a0
 * calls 0056bc30 FUN_0056bc30
 * calls 00573140 FUN_00573140
 * calls 00515b90 FUN_00515b90
 * calls 00515ef0 FUN_00515ef0
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a77f0(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_100 [256];
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    pcVar11 = (char *)(param_1 + 0x7c);
    iVar6 = 1;
    do {
      piVar3 = &DAT_00905ee0;
      if (*pcVar11 == '\0') {
        iVar8 = 0;
        do {
          if (*piVar3 == *(int *)(pcVar11 + -8)) {
            puVar10 = &DAT_00905ee0 + iVar8 * 7;
            goto LAB_007a7867;
          }
          piVar3 = piVar3 + 7;
          iVar8 = iVar8 + 1;
        } while ((int)piVar3 < 0x90612c);
        puVar10 = (undefined4 *)0x0;
LAB_007a7867:
        uVar5 = puVar10[2];
      }
      else {
        iVar8 = 0;
        do {
          if (*piVar3 == *(int *)(pcVar11 + -8)) {
            uVar5 = (&DAT_00905ee4)[iVar8 * 7];
            break;
          }
          piVar3 = piVar3 + 7;
          iVar8 = iVar8 + 1;
          uVar5 = _DAT_00000004;
        } while ((int)piVar3 < 0x90612c);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_00573140("BUTTON_%d",iVar6);
      uVar5 = FUN_005251a0(uVar7,uVar4,uVar5);
      FUN_00515b90(uVar5);
      pcVar11 = pcVar11 + 0xc;
      bVar2 = iVar6 < *(int *)(param_1 + 0x2c);
      iVar6 = iVar6 + 1;
    } while (bVar2);
  }
  iVar6 = FUN_00515ef0(*(undefined4 *)(param_1 + 0x10));
  if (iVar6 == 0) {
switchD_007a78c6_caseD_cda0a66b:
    iVar6 = 0;
  }
  else {
    switch(*(undefined4 *)(iVar6 + 0x10)) {
    default:
      goto switchD_007a78c6_caseD_cda0a66b;
    case 0xcda0a66c:
      iVar6 = 1;
      break;
    case 0xcda0a66d:
      iVar6 = 2;
      break;
    case 0xcda0a66e:
      iVar6 = 3;
      break;
    case 0xcda0a66f:
      iVar6 = 4;
      break;
    case 0xcda0a670:
      iVar6 = 5;
    }
  }
  piVar3 = (int *)(param_1 + 0x74 + iVar6 * 0xc);
  iVar6 = *piVar3;
  iVar8 = piVar3[1];
  if (((char)piVar3[2] == '\0') || (iVar6 == 0)) {
    iVar8 = 0;
    piVar3 = &DAT_00905ee0;
    do {
      if (*piVar3 == iVar6) {
        puVar10 = &DAT_00905ee0 + iVar8 * 7;
        goto LAB_007a79c8;
      }
      piVar3 = piVar3 + 7;
      iVar8 = iVar8 + 1;
    } while ((int)piVar3 < 0x90612c);
    puVar10 = (undefined4 *)0x0;
LAB_007a79c8:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4960f369,puVar10[4]);
    iVar8 = 0;
    piVar3 = &DAT_00905ee0;
    do {
      if (*piVar3 == iVar6) {
        puVar10 = &DAT_00905ee0 + iVar8 * 7;
        goto LAB_007a79f9;
      }
      piVar3 = piVar3 + 7;
      iVar8 = iVar8 + 1;
    } while ((int)piVar3 < 0x90612c);
    puVar10 = (undefined4 *)0x0;
LAB_007a79f9:
    uVar5 = puVar10[6];
    uVar7 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    iVar9 = 0;
    piVar3 = &DAT_00905ee0;
    do {
      if (*piVar3 == iVar6) {
        puVar10 = &DAT_00905ee0 + iVar9 * 7;
        goto LAB_007a7934;
      }
      piVar3 = piVar3 + 7;
      iVar9 = iVar9 + 1;
    } while ((int)piVar3 < 0x90612c);
    puVar10 = (undefined4 *)0x0;
LAB_007a7934:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4960f369,puVar10[3]);
    iVar9 = 0;
    piVar3 = &DAT_00905ee0;
    do {
      if (*piVar3 == iVar6) {
        puVar10 = &DAT_00905ee0 + iVar9 * 7;
        goto LAB_007a7961;
      }
      piVar3 = piVar3 + 7;
      iVar9 = iVar9 + 1;
    } while ((int)piVar3 < 0x90612c);
    puVar10 = (undefined4 *)0x0;
LAB_007a7961:
    uVar5 = puVar10[5];
    if (iVar6 == 0x13) {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_0056bc10(uVar5,iVar8);
      FUN_005252d0(uVar7,0xeb0a8abd,uVar5);
      goto LAB_007a7a0e;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_00525220(uVar7,0xeb0a8abd,uVar5);
LAB_007a7a0e:
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar8 = 0;
  if (0 < iVar6) {
    pcVar11 = (char *)(param_1 + 0x7c);
    do {
      if (*(int *)(pcVar11 + -8) != 0) {
        iVar8 = iVar8 + (uint)(*pcVar11 != '\0');
      }
      pcVar11 = pcVar11 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_0056bc10(0x5bb3a130,2 - iVar8);
  FUN_005252d0(uVar5,0x38deac6b,uVar7);
  bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  FUN_0056bc30(local_100,0x100,0xae5bc899);
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar8 = 0;
  if (0 < iVar6) {
    pcVar11 = (char *)(param_1 + 0x7c);
    do {
      if (*(int *)(pcVar11 + -8) != 0) {
        iVar8 = iVar8 + (uint)(*pcVar11 != '\0');
      }
      pcVar11 = pcVar11 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_00573140("BLACKLIST_RIVAL_%02d_AKA",bVar1 + 1);
  uVar7 = FUN_0056bc10(uVar7);
  FUN_005252d0(uVar5,0xd6c0e097,local_100,2 - iVar8,uVar7);
  return;
}

