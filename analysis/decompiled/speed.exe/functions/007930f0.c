/* speed.exe 007930f0 FUN_007930f0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007900a0 FUN_007900a0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078fbc0 FUN_0078fbc0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_007930f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(*(int *)(param_1 + 0x40) + 0x20) != param_2)) {
    for (piVar1 = *(int **)(param_1 + 0x30); piVar1 != (int *)(param_1 + 0x30);
        piVar1 = (int *)*piVar1) {
      if (piVar1[8] == param_2) {
        piVar2 = (int *)piVar1[1];
        iVar3 = *piVar1;
        *piVar2 = iVar3;
        *(int **)(iVar3 + 4) = piVar2;
        FUN_0078fbc0();
        thunk_FUN_007c7250(piVar1);
        break;
      }
    }
  }
  else {
    FUN_007900a0();
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

