/* speed.exe 0074c7a0 FUN_0074c7a0; analysis pseudocode, not buildable source.
 * calls 007454d0 FUN_007454d0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0074c7a0(int *param_1)

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
    FUN_007454d0();
    FUN_005d0370(piVar1,0xf0,0);
    piVar1 = (int *)*param_1;
  }
  return;
}

