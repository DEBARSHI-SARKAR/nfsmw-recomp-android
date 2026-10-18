/* speed.exe 0072ec80 FUN_0072ec80; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0072d5a0 FUN_0072d5a0
 */

void __fastcall FUN_0072ec80(int *param_1)

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
    FUN_0072d5a0();
    FUN_00463ca0(DAT_009a3a00,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

