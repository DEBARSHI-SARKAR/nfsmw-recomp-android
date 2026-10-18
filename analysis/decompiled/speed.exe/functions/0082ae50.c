/* speed.exe 0082ae50 FUN_0082ae50; analysis pseudocode, not buildable source.
 * calls 0081c886 FUN_0081c886
 * calls 008294a0 FUN_008294a0
 * calls 0082d020 FUN_0082d020
 */

void __fastcall FUN_0082ae50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008c5f30;
  if (-1 < (int)param_1[1]) {
    FUN_0081c886(param_1[1]);
    if (param_1[0x41] != 0) {
      FUN_008294a0(param_1[0x41]);
    }
  }
  FUN_008294a0(param_1[0x42]);
  *param_1 = &PTR_FUN_008c5e08;
  FUN_008294a0(param_1[0x3f]);
  FUN_0082d020();
  return;
}

