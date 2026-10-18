/* speed.exe 00760a50 FUN_00760a50; analysis pseudocode, not buildable source.
 * calls 007ec1b2 FUN_007ec1b2
 * calls 00760a50 FUN_00760a50
 * calls 0075f190 FUN_0075f190
 * calls 0073fb50 FUN_0073fb50
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0074ca20 FUN_0074ca20
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00760a50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007ec1b2();
  if (*(int *)(param_1 + 0xf90) != 0) {
    FUN_005d0370(*(int *)(param_1 + 0xf90),0x1c,0);
  }
  if (*(int *)(param_1 + 0xf6c) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xf6c) + 4);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      iVar3 = piVar2[4];
      if (iVar3 != 0) {
        FUN_00760a50();
        thunk_FUN_007c7250(iVar3);
      }
      FUN_0073fb50();
      piVar1 = *(int **)(*(int *)(param_1 + 0xf6c) + 4);
    }
    iVar3 = *(int *)(param_1 + 0xf6c);
    FUN_0074ca20(*(undefined4 *)(*(int *)(iVar3 + 4) + 4));
    *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
    *(int *)(*(int *)(iVar3 + 4) + 8) = *(int *)(iVar3 + 4);
    iVar3 = *(int *)(param_1 + 0xf6c);
    if (iVar3 != 0) {
      FUN_0075f190();
      FUN_005d0370(iVar3,0xc,0);
    }
  }
  return;
}

