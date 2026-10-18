/* speed.exe 00839320 FUN_00839320; analysis pseudocode, not buildable source.
 * calls 008491c0 FUN_008491c0
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00838930 FUN_00838930
 * calls 008368f0 FUN_008368f0
 */

void FUN_00839320(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00838930(param_1);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_008491c0(*(int *)(param_1 + 8));
    }
    FUN_008368f0(param_1);
    thunk_FUN_004655f0(param_1);
  }
  return;
}

