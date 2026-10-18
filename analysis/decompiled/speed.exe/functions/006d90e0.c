/* speed.exe 006d90e0 FUN_006d90e0; analysis pseudocode, not buildable source.
 * calls 006ca630 FUN_006ca630
 * calls 006c9f80 FUN_006c9f80
 * calls 006ca6c0 FUN_006ca6c0
 */

void __fastcall FUN_006d90e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x4470);
  iVar3 = 2;
  do {
    if (*piVar4 != 0) {
      iVar2 = FUN_006ca6c0(piVar4);
      if (iVar2 != 100) {
        FUN_006ca630(piVar4,100);
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)(param_1 + 0x47e8);
  iVar3 = 2;
  do {
    iVar2 = 8;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)(param_1 + 0x4868);
  iVar3 = 2;
  do {
    iVar2 = 8;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)(param_1 + 0x48e8);
  iVar3 = 2;
  do {
    iVar2 = 8;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)(param_1 + 0x4768);
  iVar3 = 2;
  do {
    iVar2 = 8;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_006c9f80();
  return;
}

