/* speed.exe 005400b0 FUN_005400b0; analysis pseudocode, not buildable source.
 * calls 00797080 FUN_00797080
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 0083c880 FUN_0083c880
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 * calls 00516be0 FUN_00516be0
 * calls 005b8550 FUN_005b8550
 * calls 0083a980 FUN_0083a980
 * calls 0056bc10 FUN_0056bc10
 * calls 00591d90 FUN_00591d90
 * calls 00796d30 FUN_00796d30
 * calls 0078c8d0 FUN_0078c8d0
 * calls 00514c70 FUN_00514c70
 * calls 0078c730 FUN_0078c730
 * calls 00515e90 FUN_00515e90
 * calls 0083d820 FUN_0083d820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005400b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_c8;
  undefined4 local_c7;
  
  if (DAT_0091ca8c == 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_0056bc10(0x76be33ff,*(int *)(param_1 + 0x34) + 0xc1);
    FUN_005252d0(uVar3,0x63023aae,uVar1);
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0xea19fbdb);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x1835d907);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x2ddf58c);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x16a259);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x949f4946);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x1744b3);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_0056bc10(0x4f876b6f);
    FUN_005252d0(uVar3,0xf9363f30,uVar1);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_0056bc10(0x2c119933);
    FUN_005252d0(uVar3,0xfb8b67d1,uVar1);
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0xfde09072);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x16a259);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    FUN_00572070(uVar3);
    iVar2 = FUN_00591d90(uVar3);
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x94);
      iVar6 = 0;
      if (iVar5 != 0) {
        piVar4 = *(int **)(iVar2 + 0x90);
        do {
          if (*(int *)(*piVar4 + 0x10) == -0x47583932) {
            iVar6 = *piVar4;
          }
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar6 != 0) {
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x4000000;
        }
      }
    }
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
  }
  if (DAT_0091ca8c != 1) goto LAB_0054053e;
  local_c8 = 0;
  puVar7 = &local_c7;
  for (iVar2 = 0x2f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  FUN_0083c880(&local_c8,0xc0,"MYMSG","I wanna talk to you!!!");
  FUN_00796d30();
  iVar2 = FUN_00797080();
  FUN_0083a980(&local_c8,0xc0,"INTHOSTNAME",*(undefined4 *)(iVar2 + 0x220));
  FUN_0083a980(&local_c8,0xc0,"EXTHOSTNAME",*(undefined4 *)(iVar2 + 0x20));
  FUN_0083c880(&local_c8,0xc0,"DIRTYADDR",iVar2 + 0x1e0);
  FUN_0078c730(&DAT_0091c39c,0x766f6970,&local_c8,0);
  uVar3 = FUN_0078c8d0();
  FUN_0083d820(uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_0056bc10(0x695d0495,&DAT_0091c39c);
  FUN_005252d0(uVar3,0x63023aae,uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0xea19fbdb);
      if (iVar2 != 0) {
        iVar2 = FUN_005b1360(0x1835d907);
        if (iVar2 != 0) {
          FUN_005b8400(iVar2,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0x2ddf58c);
      if (iVar2 != 0) {
        iVar2 = FUN_005b1360(0x16a259);
        if (iVar2 != 0) {
          FUN_005b8400(iVar2,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
      }
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_0056bc10(0x1a294dad);
  FUN_005252d0(uVar3,0xfde09072,uVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  FUN_00572070(uVar3);
  iVar2 = FUN_00591d90(uVar3);
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x94);
    iVar6 = 0;
    if (iVar5 != 0) {
      piVar4 = *(int **)(iVar2 + 0x90);
      do {
        if (*(int *)(*piVar4 + 0x10) == -0x47583934) {
          iVar6 = *piVar4;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x4000000;
      }
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_005404a1:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_005404a1;
    iVar2 = FUN_005b8550(0xf9363f30);
    if (iVar2 == 0) goto LAB_005404a1;
  }
  FUN_00514c70(iVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  FUN_00572070(uVar3);
  iVar2 = FUN_00591d90(uVar3);
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x94);
    iVar6 = 0;
    if (iVar5 != 0) {
      piVar4 = *(int **)(iVar2 + 0x90);
      do {
        if (*(int *)(*piVar4 + 0x10) == -0x47583933) {
          iVar6 = *piVar4;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x4000000;
      }
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00540521:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00540521;
    iVar2 = FUN_005b8550(0xfb8b67d1);
    if (iVar2 == 0) goto LAB_00540521;
  }
  FUN_00514c70(iVar2);
  FUN_00515e90(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_0054053e:
  FUN_00516be0(0x8cb81f09,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  FUN_00572070(uVar3);
  iVar2 = FUN_00591d90(uVar3);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(iVar2 + 0x8c) + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = _DAT_00000010;
  return;
}

