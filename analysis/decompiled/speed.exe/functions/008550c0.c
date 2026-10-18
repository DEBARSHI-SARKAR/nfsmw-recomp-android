/* speed.exe 008550c0 FUN_008550c0; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00859ba0 FUN_00859ba0
 */

void FUN_008550c0(undefined4 *param_1)

{
  FUN_00859ba0(*param_1);
  thunk_FUN_004655f0(param_1[0x18a]);
  thunk_FUN_004655f0(param_1);
  return;
}

