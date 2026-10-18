/* speed.exe 0078af80 FUN_0078af80; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __fastcall FUN_0078af80(int param_1)

{
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)(param_1 + 0x1c));
  return;
}

