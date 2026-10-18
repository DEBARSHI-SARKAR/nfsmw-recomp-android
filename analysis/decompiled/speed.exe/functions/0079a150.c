/* speed.exe 0079a150 FUN_0079a150; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls 00799d60 FUN_00799d60
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079a150(undefined4 param_1)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  FUN_00796d30(param_1);
  FUN_00799d60(param_1);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

