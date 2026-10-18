/* speed.exe 008392e0 FUN_008392e0; analysis pseudocode, not buildable source.
 * calls 00838930 FUN_00838930
 * calls 00848c80 FUN_00848c80
 */

void FUN_008392e0(int param_1)

{
  if (param_1 != 0) {
    FUN_00838930(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00848c80(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

