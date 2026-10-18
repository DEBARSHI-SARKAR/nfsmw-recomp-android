/* speed.exe 00799fe0 FUN_00799fe0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00798800 FUN_00798800
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_00799fe0(void)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  FUN_00798800(0);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

