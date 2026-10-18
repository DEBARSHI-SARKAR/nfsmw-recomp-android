/* speed.exe 008443d0 FUN_008443d0; analysis pseudocode, not buildable source.
 * calls 00856340 FUN_00856340
 * calls 0078af20 thunk_FUN_004655f0
 */

void FUN_008443d0(int param_1)

{
  DAT_009c36e8 = DAT_009c36e8 + -1;
  if (DAT_009c36e8 < 1) {
    FUN_00856340(*(undefined4 *)(param_1 + 0x1c));
    thunk_FUN_004655f0(param_1);
    DAT_009c36e4 = 0;
    DAT_009c36e8 = 0;
  }
  return;
}

