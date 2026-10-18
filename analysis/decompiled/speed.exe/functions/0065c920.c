/* speed.exe 0065c920 FUN_0065c920; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0065a9c0 FUN_0065a9c0
 */

void __fastcall FUN_0065c920(int *param_1)

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
    FUN_0065a9c0();
    FUN_00463ca0(DAT_00925900,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

