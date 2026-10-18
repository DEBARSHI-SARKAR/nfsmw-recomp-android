/* speed.exe 006b0b40 FUN_006b0b40; analysis pseudocode, not buildable source.
 * calls 00696b10 FUN_00696b10
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006b0b40(int *param_1)

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
    FUN_00696b10();
    FUN_005d0370(piVar1,0x18,0);
    piVar1 = (int *)*param_1;
  }
  return;
}

