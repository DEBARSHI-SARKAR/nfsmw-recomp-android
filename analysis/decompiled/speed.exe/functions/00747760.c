/* speed.exe 00747760 FUN_00747760; analysis pseudocode, not buildable source.
 * calls 007513d0 FUN_007513d0
 */

void __fastcall FUN_00747760(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x18);
  while (piVar2 != piVar1) {
    if (*piVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1 + -0x10;
    }
    iVar3 = *(int *)(iVar4 + 0x10);
    piVar2 = *(int **)(iVar4 + 0x14);
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    FUN_007513d0();
    piVar2 = (int *)*piVar1;
  }
  return;
}

