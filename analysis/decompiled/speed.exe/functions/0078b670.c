/* speed.exe 0078b670 FUN_0078b670; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_0078b670(int param_1)

{
  if (param_1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement(&DAT_009b4438);
    FUN_00460ca0(&DAT_009b479c,param_1,0x3ff);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
  }
  return;
}

