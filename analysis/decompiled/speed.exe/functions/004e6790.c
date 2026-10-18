/* speed.exe 004e6790 FUN_004e6790; analysis pseudocode, not buildable source.
 * calls 004b0e30 FUN_004b0e30
 * calls 00831782 FUN_00831782
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004e6790(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x40);
  iVar3 = 2;
  do {
    piVar1 = (int *)piVar4[-2];
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar1);
    }
    piVar1 = (int *)*piVar4;
    piVar4[-2] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar1);
    }
    iVar2 = piVar4[2];
    *piVar4 = 0;
    if (iVar2 != 0) {
      FUN_004b0e30();
      thunk_FUN_007c7250(iVar2);
    }
    piVar1 = (int *)piVar4[4];
    piVar4[2] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar1);
    }
    piVar4[4] = 0;
    if ((undefined4 *)piVar4[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[6])(1);
    }
    piVar4[6] = 0;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

