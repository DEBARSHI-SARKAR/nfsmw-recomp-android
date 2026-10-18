/* speed.exe 0048cc20 FUN_0048cc20; analysis pseudocode, not buildable source.
 * calls 0048ca40 FUN_0048ca40
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0048cc20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -1 != (int *)0x0) {
      FUN_0048ca40();
      FUN_005d0370(piVar1 + -1,0x4c,0);
    }
    piVar1 = (int *)*param_1;
  }
  return;
}

