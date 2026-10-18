/* speed.exe 007ecc6d FUN_007ecc6d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004e SetEvent
 */

void FUN_007ecc6d(int param_1)

{
  SetEvent(*(HANDLE *)(param_1 + 4));
  return;
}

