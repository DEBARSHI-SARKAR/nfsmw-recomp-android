/* speed.exe 00791f10 FUN_00791f10; analysis pseudocode, not buildable source.
 * calls 0078e7d0 FUN_0078e7d0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __fastcall FUN_00791f10(int param_1)

{
  undefined1 extraout_DL;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  FUN_0078e7d0();
  FUN_0078e7d0();
  *(undefined1 *)(param_1 + 0x22c) = extraout_DL;
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

