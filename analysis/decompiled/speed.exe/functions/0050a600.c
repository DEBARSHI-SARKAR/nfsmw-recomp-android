/* speed.exe 0050a600 FUN_0050a600; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 005094c0 FUN_005094c0
 */

void __fastcall FUN_0050a600(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_005094c0();
    FUN_00463ca0(DAT_00916068,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

