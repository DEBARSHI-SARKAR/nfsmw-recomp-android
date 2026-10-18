/* speed.exe 0078bba0 FUN_0078bba0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_0078bba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *param_1 = param_2;
  param_1[1] = param_3;
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

