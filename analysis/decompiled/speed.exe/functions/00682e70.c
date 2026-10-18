/* speed.exe 00682e70 FUN_00682e70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006813d0 FUN_006813d0
 */

void __fastcall FUN_00682e70(int *param_1)

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
    FUN_006813d0();
    FUN_005d0370(piVar1,0x1c,0);
    piVar1 = (int *)*param_1;
  }
  return;
}

