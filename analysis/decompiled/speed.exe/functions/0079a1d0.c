/* speed.exe 0079a1d0 FUN_0079a1d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00798800 FUN_00798800
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079a1d0(undefined1 *param_1)

{
  *(undefined1 *)(DAT_0091cf90 + 0x178) = *param_1;
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  FUN_00798800(0);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

