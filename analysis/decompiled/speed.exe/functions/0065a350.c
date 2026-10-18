/* speed.exe 0065a350 FUN_0065a350; analysis pseudocode, not buildable source.
 * calls 00659ff0 FUN_00659ff0
 */

float10 __fastcall FUN_0065a350(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00659ff0();
  }
  return (float10)*(float *)(param_1 + 0x20);
}

