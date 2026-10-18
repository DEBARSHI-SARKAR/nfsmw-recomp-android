/* speed.exe 0083d990 FUN_0083d990; analysis pseudocode, not buildable source.
 * calls 0083d010 FUN_0083d010
 */

void FUN_0083d990(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 2) {
    FUN_0083d010((undefined1 *)(param_1 + 0x2c),PTR_s__BLCK__0090d320);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}

