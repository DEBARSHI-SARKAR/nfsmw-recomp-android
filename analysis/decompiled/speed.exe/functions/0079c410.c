/* speed.exe 0079c410 FUN_0079c410; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 */

void __fastcall FUN_0079c410(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00794f80();
  piVar1 = (int *)(iVar2 + 0x20);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (((code *)piVar3[2] != FUN_0079bde0 || ((undefined4 *)piVar3[3] != param_1))) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
    }
    iVar2 = *piVar3;
    piVar1 = (int *)piVar3[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

