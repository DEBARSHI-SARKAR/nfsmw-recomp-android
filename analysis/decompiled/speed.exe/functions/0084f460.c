/* speed.exe 0084f460 FUN_0084f460; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bcf0 FUN_0084bcf0
 * calls 0084ed50 FUN_0084ed50
 */

void FUN_0084f460(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 3) {
    FUN_0084ed50(0x14);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 4;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0084af40(*(int *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_0084bcf0(param_1 + 0x1f0);
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xb0));
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xc4));
  thunk_FUN_004655f0(param_1);
  return;
}

