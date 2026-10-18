/* speed.exe 008519a0 FUN_008519a0; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00859ba0 FUN_00859ba0
 */

void FUN_008519a0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00859ba0(*param_1);
  }
  if (param_1[0x1f] != 0) {
    thunk_FUN_004655f0(param_1[0x1f]);
  }
  if (param_1[0x1c] != 0) {
    thunk_FUN_004655f0(param_1[0x1c]);
  }
  thunk_FUN_004655f0(param_1);
  return;
}

