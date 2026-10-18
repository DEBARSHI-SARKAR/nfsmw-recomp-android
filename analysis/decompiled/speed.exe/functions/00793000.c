/* speed.exe 00793000 FUN_00793000; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 008406c0 FUN_008406c0
 * calls 00790050 FUN_00790050
 * calls 007ec1bd FUN_007ec1bd
 * calls 008419b0 FUN_008419b0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __fastcall FUN_00793000(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(int *)(param_1 + 0x38) == 0) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return;
  }
  FUN_008419b0(*(int *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar2 = *(int **)(param_1 + 0x30);
    piVar1 = (int *)(param_1 + 0x30);
    if (piVar2 != piVar1) {
      iVar4 = *piVar2;
      piVar3 = (int *)piVar2[1];
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      *(int **)(param_1 + 0x40) = piVar2;
      iVar4 = FUN_008406c0(*(undefined4 *)(param_1 + 0x38),piVar2[2],piVar2[3],piVar2[4],piVar2[5]);
      if (iVar4 == -1) {
        piVar2 = *(int **)(param_1 + 0x40);
        iVar4 = *piVar1;
        *piVar1 = (int)piVar2;
        *(int **)(iVar4 + 4) = piVar2;
        piVar2[1] = (int)piVar1;
        *piVar2 = iVar4;
        *(undefined4 *)(param_1 + 0x40) = 0;
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        return;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 0x28) = iVar4;
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) == 0) {
        FUN_00790050(0,1);
      }
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

