/* speed.exe 0078afa0 FUN_0078afa0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0078afa0(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 0x1c));
  FUN_007ec1c8();
  return;
}

