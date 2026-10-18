/* speed.exe 007bea80 FUN_007bea80; analysis pseudocode, not buildable source.
 * calls 007b5a50 FUN_007b5a50
 * calls 00739940 FUN_00739940
 * calls 007b4020 FUN_007b4020
 * calls 00747e30 FUN_00747e30
 * calls 0056f250 FUN_0056f250
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00739680 FUN_00739680
 * calls 00466440 FUN_00466440
 * calls 005816b0 FUN_005816b0
 * calls 00739860 FUN_00739860
 * calls 00747e10 FUN_00747e10
 * calls 007af110 FUN_007af110
 * calls 00460bf0 FUN_00460bf0
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007bea80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar5 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  if (*(char *)(iVar5 + 0x10) != -1) {
    piVar1 = (int *)(param_1 + 0x68);
    piVar2 = *(int **)(param_1 + 0x68);
    while (piVar2 != piVar1) {
      piVar2 = (int *)*piVar1;
      iVar5 = *piVar2;
      piVar3 = (int *)piVar2[1];
      *piVar3 = iVar5;
      *(int **)(iVar5 + 4) = piVar3;
      FUN_00466440(piVar2);
      piVar2 = (int *)*piVar1;
    }
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x48);
    FUN_00739680(uVar4);
    FUN_00460bf0("CARPARTNAME_ANY");
    uVar6 = FUN_005816b0();
    for (iVar5 = FUN_00747e10(uVar6,uVar4,0,0xffffffff); iVar5 != 0;
        iVar5 = FUN_00747e30(iVar5,uVar6,uVar4,0,0xffffffff)) {
      FUN_007b4020(iVar5);
    }
    piVar2 = (int *)*piVar1;
    *(int **)(param_1 + 0x70) = piVar2;
    for (; piVar2 != piVar1; piVar2 = (int *)*piVar2) {
      iVar5 = piVar2[2];
      FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
      uVar6 = uVar4;
      uVar7 = FUN_005816b0(uVar4);
      iVar8 = FUN_0056f250(uVar7,uVar6);
      if (iVar5 == iVar8) {
        *(int **)(param_1 + 0x70) = piVar2;
        break;
      }
    }
    FUN_007b5a50();
    iVar5 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if ((*(char *)(iVar5 + 0x10) != -1) && ((int *)*piVar1 != piVar1)) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 8);
      uVar6 = FUN_00739860();
      FUN_00739940(uVar6);
      FUN_007af110(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x48),uVar4);
    }
  }
  return;
}

