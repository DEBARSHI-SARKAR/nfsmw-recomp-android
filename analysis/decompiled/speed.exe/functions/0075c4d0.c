/* speed.exe 0075c4d0 FUN_0075c4d0; analysis pseudocode, not buildable source.
 * calls 0075bad0 FUN_0075bad0
 * calls 007556c0 FUN_007556c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00781e70 FUN_00781e70
 */

void __fastcall FUN_0075c4d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_0075bad0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x304));
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        DAT_00903690 = DAT_00903690 | 1 << ((char)*(int *)(param_1 + 0x68) - 1U & 0x1f);
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    FUN_00781e70();
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 != 0) {
      FUN_007556c0();
      thunk_FUN_007c7250(iVar1);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

