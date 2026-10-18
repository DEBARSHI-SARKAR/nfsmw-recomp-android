/* speed.exe 00464e10 FUN_00464e10; analysis pseudocode, not buildable source.
 * calls 007ec1b2 FUN_007ec1b2
 * calls 007c7250 FUN_007c7250
 * calls 004648a0 FUN_004648a0
 * calls 00463da0 FUN_00463da0
 */

void __fastcall FUN_00464e10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    FUN_004648a0(0,0x7fffffff);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x14);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    piVar3 = (int *)piVar2[1];
    iVar4 = *piVar2;
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    FUN_00463da0();
    FUN_007c7250(piVar2);
    piVar2 = (int *)*piVar1;
  }
  FUN_007ec1b2();
  return;
}

