/* speed.exe 005a19c0 FUN_005a19c0; analysis pseudocode, not buildable source.
 * calls 0057d570 FUN_0057d570
 * calls 00524a10 FUN_00524a10
 * calls 00514c70 FUN_00514c70
 * calls 00524920 FUN_00524920
 * calls 00573140 FUN_00573140
 * calls 00514cc0 FUN_00514cc0
 * calls 005972e0 FUN_005972e0
 * calls 00524850 FUN_00524850
 * calls 005964a0 FUN_005964a0
 * calls 005dbed0 FUN_005dbed0
 * calls 005970e0 FUN_005970e0
 */

void __fastcall FUN_005a19c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1cc)) {
    do {
      iVar5 = FUN_005dbed0(iVar8);
      if ((*(char *)(iVar5 + 0x21) != '\0') && (*(int *)(iVar5 + 0x10) == 1)) {
        *(int *)(param_1 + 0x1d0) = iVar8;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x1cc));
  }
  if (0 < *(int *)(param_1 + 0x1ec)) {
    iVar8 = 1;
    do {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = FUN_00573140("LINE%d_GROUP",iVar8,0x16a259,1);
      FUN_00524920(uVar7,uVar6);
      if ((*(int *)(param_1 + 0x1e4) == 1) ||
         ((*(int *)(param_1 + 0x1e4) == 2 && (*(int *)(param_1 + 0x1e0) == 4)))) {
        uVar7 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = FUN_00573140("COLUMN2_DATA%d",iVar8);
        uVar7 = FUN_00524850(uVar7,uVar6);
        FUN_00514c70(uVar7);
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = FUN_00573140("COLUMN2_DATA%d",iVar8);
        uVar7 = FUN_00524850(uVar7,uVar6);
        FUN_00514cc0(uVar7);
      }
      bVar3 = iVar8 < *(int *)(param_1 + 0x1ec);
      iVar8 = iVar8 + 1;
    } while (bVar3);
  }
  uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
  FUN_00514c70(uVar7);
  uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x44ac8987);
  FUN_00514c70(uVar7);
  uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
  FUN_00514c70(uVar7);
  iVar8 = *(int *)(param_1 + 0x1e4);
  if (iVar8 == 0) {
    piVar1 = *(int **)(param_1 + 0x1b0);
    while (piVar1 != (int *)(param_1 + 0x1b0)) {
      iVar8 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar8;
      *(int **)(iVar8 + 4) = piVar2;
      if (piVar1 + -1 != (int *)0x0) {
        (**(code **)piVar1[-1])(1);
      }
      piVar1 = *(int **)(param_1 + 0x1b0);
    }
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    FUN_005964a0();
    uVar7 = *(undefined4 *)(param_1 + 0x1cc);
  }
  else if (iVar8 == 1) {
    iVar8 = param_1 + 0x2c + *(int *)(param_1 + 0x1d4) * 0x18;
    piVar1 = *(int **)(iVar8 + 4);
    while (piVar1 != (int *)(iVar8 + 4)) {
      iVar5 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar5;
      *(int **)(iVar5 + 4) = piVar2;
      if (piVar1 + -1 != (int *)0x0) {
        (**(code **)piVar1[-1])(1);
      }
      piVar1 = *(int **)(iVar8 + 4);
    }
    *(undefined4 *)(iVar8 + 0xc) = 1;
    uVar7 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
    FUN_005970e0(*(undefined4 *)(param_1 + 0x1d4),uVar7);
    uVar7 = *(undefined4 *)(param_1 + 0x1cc);
  }
  else {
    if (iVar8 != 2) goto LAB_005a1c29;
    iVar8 = param_1 + 0x2c + *(int *)(param_1 + 0x1d4) * 0x18;
    piVar1 = *(int **)(iVar8 + 4);
    while (piVar1 != (int *)(iVar8 + 4)) {
      iVar5 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar5;
      *(int **)(iVar5 + 4) = piVar2;
      if (piVar1 + -1 != (int *)0x0) {
        (**(code **)piVar1[-1])(1);
      }
      piVar1 = *(int **)(iVar8 + 4);
    }
    *(undefined4 *)(iVar8 + 0xc) = 1;
    uVar7 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
    FUN_005972e0(*(undefined4 *)(param_1 + 0x1d4),uVar7);
    uVar7 = *(undefined4 *)(param_1 + 0x1cc);
  }
  FUN_0057d570(uVar7);
LAB_005a1c29:
  if ((((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
      ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) &&
     (cVar4 = FUN_00524a10(*(undefined4 *)(param_1 + 0x10),0x445a862b,0x5079c8f8), cVar4 == '\0')) {
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x445a862b,0x5079c8f8,1);
  }
  return;
}

