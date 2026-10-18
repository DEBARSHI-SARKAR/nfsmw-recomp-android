/* speed.exe 007983d0 FUN_007983d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078fd60 FUN_0078fd60
 * calls 00795880 FUN_00795880
 * calls 00840530 FUN_00840530
 * calls 007958f0 FUN_007958f0
 * calls 00794f80 FUN_00794f80
 * calls 00790750 FUN_00790750
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_007983d0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00795880();
  piVar1 = param_1 + 4;
  piVar2 = (int *)param_1[4];
  while (piVar2 != piVar1) {
    iVar4 = piVar2[2];
    FUN_007ec1bd();
    InterlockedIncrement(&DAT_009b4438);
    iVar4 = FUN_007958f0(piVar2 + 3,iVar4,1);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    if (iVar4 < 0) {
      iVar4 = *(int *)*piVar1;
      piVar3 = (int *)((int *)*piVar1)[1];
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      FUN_00790750();
      thunk_FUN_007c7250(piVar2);
    }
    piVar2 = (int *)*piVar1;
  }
  FUN_0078fd60(FUN_007959b0,param_1);
  iVar4 = FUN_00794f80();
  if (*(int *)(iVar4 + 0x38) != 0) {
    iVar4 = FUN_00794f80(1,0,0);
    FUN_00840530(*(undefined4 *)(iVar4 + 0x38));
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

