/* speed.exe 00790b80 FUN_00790b80; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0078c500 FUN_0078c500
 */

void FUN_00790b80(undefined4 param_1)

{
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  FUN_0078c500(param_1);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

