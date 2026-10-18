/* speed.exe 0084e5b0 FUN_0084e5b0; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bcf0 FUN_0084bcf0
 */

void FUN_0084e5b0(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 4) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 5;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0084af40(*(int *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_0084bcf0(param_1 + 0x1ec);
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xb0));
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xcc));
  thunk_FUN_004655f0(param_1);
  return;
}

