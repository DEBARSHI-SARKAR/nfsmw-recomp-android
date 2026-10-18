/* speed.exe 007f08e8 FUN_007f08e8; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000002a FindClose
 */

void FUN_007f08e8(int param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 8));
  }
  return;
}

