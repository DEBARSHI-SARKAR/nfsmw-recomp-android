/* speed.exe 007bab60 FUN_007bab60; analysis pseudocode, not buildable source.
 * calls 007b5a50 FUN_007b5a50
 * calls 007c4b80 FUN_007c4b80
 * calls 00576ce0 FUN_00576ce0
 * calls 007a4c20 FUN_007a4c20
 * calls 0056f120 FUN_0056f120
 * calls 00576e30 FUN_00576e30
 * calls 007af110 FUN_007af110
 * calls 0056f270 FUN_0056f270
 * calls 0056f100 FUN_0056f100
 * calls 007af330 FUN_007af330
 * calls 00575b00 FUN_00575b00
 * calls 0056d7a0 FUN_0056d7a0
 */

void __fastcall FUN_007bab60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar7 = FUN_0056f120(*(undefined1 *)(*(int *)(param_1 + 4) + 0x11));
  iVar10 = *(int *)(param_1 + 0x1b4);
  do {
    while( true ) {
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar10 + -4;
      }
      piVar1 = (int *)(param_1 + 0x1b4);
      if (piVar1 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = param_1 + 0x1b0;
      }
      if (iVar10 == iVar8) {
        piVar4 = (int *)*piVar1;
        while (piVar4 != piVar1) {
          iVar10 = *piVar4;
          piVar5 = (int *)piVar4[1];
          *piVar5 = iVar10;
          *(int **)(iVar10 + 4) = piVar5;
          if (piVar4 + -1 != (int *)0x0) {
            (**(code **)piVar4[-1])(1);
          }
          piVar4 = (int *)*piVar1;
        }
        FUN_007b5a50();
        return;
      }
      if (*(char *)(iVar10 + 0x14) != '\0') break;
LAB_007bacd6:
      iVar10 = *(int *)(iVar10 + 4);
    }
    iVar8 = *(int *)(iVar10 + 0xc);
    if ((((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) &&
       (*(int *)(iVar8 + 0x10) != 0x72)) {
      cVar6 = FUN_00575b00();
      if (cVar6 == '\0') {
        iVar11 = *(int *)(*(int *)(iVar10 + 0xc) + 0x24);
        if (*(int *)(iVar10 + 0x10) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_007c4b80();
        }
        iVar11 = iVar11 - iVar9;
        if (iVar11 < 0) {
          *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4) =
               *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4) - iVar11;
        }
        else {
          FUN_0056d7a0(iVar11);
        }
      }
      else {
        iVar11 = *(int *)(iVar10 + 0xc);
        if (*(char *)(iVar11 + 0x1c) == '\0') {
          FUN_00576ce0(*(undefined4 *)(iVar11 + 0x10));
        }
        else {
          FUN_00576e30(*(undefined4 *)(iVar11 + 0x18));
        }
      }
    }
    if (*(char *)(iVar8 + 0x1c) == '\0') {
      uVar2 = *(undefined4 *)(iVar8 + 0xc);
      uVar3 = *(undefined4 *)(iVar8 + 0x10);
      FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
      FUN_0056f270(uVar3,uVar2);
      FUN_007af110(uVar3,uVar2);
      FUN_007af330(iVar8,uVar7);
      goto LAB_007bacd6;
    }
    FUN_007a4c20(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x14));
    iVar10 = *(int *)(iVar10 + 4);
  } while( true );
}

