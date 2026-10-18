/* speed.exe 00758930 FUN_00758930; analysis pseudocode, not buildable source.
 * calls 00753650 FUN_00753650
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_00758930(int *param_1)

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
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

