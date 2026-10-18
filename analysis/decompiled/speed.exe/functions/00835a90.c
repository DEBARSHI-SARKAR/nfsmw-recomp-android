/* speed.exe 00835a90 FUN_00835a90; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00840590 FUN_00840590
 */

void FUN_00835a90(undefined4 *param_1)

{
  FUN_00840590(*param_1,param_1[0x19]);
  FUN_00840590(*param_1,param_1[0x1a]);
  thunk_FUN_004655f0(param_1);
  return;
}

