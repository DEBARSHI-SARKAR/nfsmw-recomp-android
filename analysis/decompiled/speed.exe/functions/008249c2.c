/* speed.exe 008249c2 FUN_008249c2; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 */

void FUN_008249c2(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_0081eae9(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

