/* speed.exe 008428e0 FUN_008428e0; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 008550c0 FUN_008550c0
 */

undefined4 FUN_008428e0(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1224) != 0) {
      FUN_008550c0(*(int *)(param_1 + 0x1224));
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      thunk_FUN_004655f0(*(int *)(param_1 + 0x108));
    }
  }
  return 0;
}

