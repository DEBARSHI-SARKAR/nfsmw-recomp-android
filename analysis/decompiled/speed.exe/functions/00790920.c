/* speed.exe 00790920 FUN_00790920; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078be70 FUN_0078be70
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_00790920(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_0078be70(param_1);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}

