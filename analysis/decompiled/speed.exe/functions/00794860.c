/* speed.exe 00794860 FUN_00794860; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 007932c0 FUN_007932c0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void FUN_00794860(void)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  FUN_007932c0();
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

