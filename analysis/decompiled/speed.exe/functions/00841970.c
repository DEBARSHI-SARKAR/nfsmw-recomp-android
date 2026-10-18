/* speed.exe 00841970 FUN_00841970; analysis pseudocode, not buildable source.
 * calls 008519a0 FUN_008519a0
 * calls 008443d0 FUN_008443d0
 * calls 0078af60 thunk_FUN_004655f0
 * calls 008449b0 FUN_008449b0
 * calls 00841160 FUN_00841160
 */

void FUN_00841970(undefined4 *param_1)

{
  FUN_00841160(0x7465726d,0);
  FUN_008449b0(param_1);
  if (param_1[1] != 0) {
    FUN_008443d0(param_1[1]);
  }
  FUN_008519a0(*param_1);
  thunk_FUN_004655f0(param_1);
  return;
}

