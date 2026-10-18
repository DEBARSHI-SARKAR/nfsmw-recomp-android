/* speed.exe 00793170 FUN_00793170; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007900a0 FUN_007900a0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078fbc0 FUN_0078fbc0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_00793170(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (((*(int *)(param_1 + 0x40) != 0) && (param_2 == *(int *)(*(int *)(param_1 + 0x40) + 0x18))) &&
     (FUN_007900a0(), param_3 == '\0')) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  while (piVar1 != (int *)(param_1 + 0x30)) {
    piVar3 = piVar1;
    if (piVar1[6] == param_2) {
      piVar3 = (int *)piVar1[1];
      iVar2 = *piVar1;
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      FUN_0078fbc0();
      thunk_FUN_007c7250(piVar1);
      if (param_3 == '\0') break;
    }
    piVar1 = (int *)*piVar3;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

