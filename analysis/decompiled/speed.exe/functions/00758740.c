/* speed.exe 00758740 FUN_00758740; analysis pseudocode, not buildable source.
 * calls 00755800 FUN_00755800
 * calls 007517d0 FUN_007517d0
 */

void __fastcall FUN_00758740(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x84) != 0) {
      FUN_007517d0();
    }
    FUN_00755800();
    return;
  }
  return;
}

