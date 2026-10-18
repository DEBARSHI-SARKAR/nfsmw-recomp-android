/* speed.exe 00782ee0 FUN_00782ee0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00781bf0 FUN_00781bf0
 */

void __fastcall FUN_00782ee0(int param_1)

{
  if (((*(uint *)(param_1 + 0x10) & 0x10000) == 0) && (*(int *)(param_1 + 0x18) != 0)) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x18));
  }
  if (DAT_009b3904 != 0) {
    FUN_00781bf0(param_1);
  }
  return;
}

