/* speed.exe 0065c960 FUN_0065c960; analysis pseudocode, not buildable source.
 * calls 0065ab20 FUN_0065ab20
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_0065c960(int *param_1)

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
    FUN_0065ab20();
    FUN_00463ca0(DAT_00925914,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

