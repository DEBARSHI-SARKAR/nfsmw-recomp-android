/* speed.exe 0079e610 FUN_0079e610; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0079c910 FUN_0079c910
 * calls 00841400 FUN_00841400
 * calls 0078c730 FUN_0078c730
 * calls 0079c840 FUN_0079c840
 * calls 0078b260 FUN_0078b260
 * calls 0079e230 FUN_0079e230
 * calls 0079ca30 FUN_0079ca30
 * calls 0079d550 FUN_0079d550
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00844340 FUN_00844340
 * calls 0079bac0 FUN_0079bac0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0079bd50 FUN_0079bd50
 * calls 00798ec0 FUN_00798ec0
 * calls 0079a6d0 FUN_0079a6d0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079e610(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(char *)(param_1 + 0x71) != '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00841400(*(int *)(param_1 + 0x38));
      FUN_0079bd50();
    }
    if (param_2 == '\x01') {
      uVar1 = FUN_00844340(1000);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      FUN_0079ca30();
      FUN_0079c910();
      FUN_0079a6d0();
      FUN_00798ec0();
      FUN_0079bac0();
      FUN_0079c840();
      if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
        FUN_0078c730();
        FUN_0079e230();
      }
    }
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  iVar2 = FUN_0078b260();
  if (iVar2 == 0) {
    FUN_0079d550(0,0);
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

