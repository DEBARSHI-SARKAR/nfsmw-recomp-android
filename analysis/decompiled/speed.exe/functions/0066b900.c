/* speed.exe 0066b900 FUN_0066b900; analysis pseudocode, not buildable source.
 * calls 0045a5d0 FUN_0045a5d0
 */

void FUN_0066b900(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0045a5d0();
    return;
  }
  return;
}

