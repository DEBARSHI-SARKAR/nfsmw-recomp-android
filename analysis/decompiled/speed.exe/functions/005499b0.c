/* speed.exe 005499b0 FUN_005499b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_005499b0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = param_1 + 0x54;
  *param_1 = &PTR_FUN_0089e7ac;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    thunk_FUN_007c7250(piVar2);
    piVar2 = (int *)*piVar1;
  }
  return;
}

