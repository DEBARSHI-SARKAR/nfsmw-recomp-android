/* speed.exe 007ecc96 FUN_007ecc96; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 */

void FUN_007ecc96(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return;
}

