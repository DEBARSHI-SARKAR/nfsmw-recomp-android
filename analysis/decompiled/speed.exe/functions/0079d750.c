/* speed.exe 0079d750 FUN_0079d750; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 008443d0 FUN_008443d0
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 * calls 0078c730 FUN_0078c730
 * calls 00795060 FUN_00795060
 * calls 0079ca30 FUN_0079ca30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0079b780 FUN_0079b780
 * calls 0079c410 FUN_0079c410
 * calls 00790c80 FUN_00790c80
 * calls 008412e0 FUN_008412e0
 * calls 0079bac0 FUN_0079bac0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00799f50 FUN_00799f50
 * calls 0079a6d0 FUN_0079a6d0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0079d750(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(char *)(param_1 + 0x71) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_008412e0(*(int *)(param_1 + 0x38));
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_008443d0(*(int *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    FUN_0079ca30();
    FUN_0079c410();
    piVar1 = (int *)FUN_0079a6d0();
    iVar2 = FUN_00794f80();
    if ((*(int *)(iVar2 + 0x38) != 0) && (*piVar1 != 0)) {
      iVar2 = FUN_00794f80(0,*piVar1);
      FUN_00844b00(*(undefined4 *)(iVar2 + 0x38));
      *piVar1 = 0;
    }
    piVar1[1] = 0;
    piVar1[2] = 0;
    *(undefined1 *)(piVar1 + 3) = 0;
    FUN_0079bac0();
    FUN_0079b780();
    FUN_00799f50();
    FUN_00795060();
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      FUN_0078c730();
      FUN_00790c80();
    }
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

