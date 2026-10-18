/* speed.exe 0079e100 FUN_0079e100; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0079d3f0 FUN_0079d3f0
 * calls 0085d320 FUN_0085d320
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0079e100(int *param_1)

{
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  if (*param_1 != 0) {
    FUN_00796d30();
    FUN_0079d3f0();
    FUN_0085d320(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

