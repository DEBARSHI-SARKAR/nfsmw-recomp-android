/* speed.exe 007eccd3 FUN_007eccd3; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000006 CloseHandle
 */

void FUN_007eccd3(int param_1)

{
  CloseHandle(*(HANDLE *)(param_1 + 4));
  return;
}

