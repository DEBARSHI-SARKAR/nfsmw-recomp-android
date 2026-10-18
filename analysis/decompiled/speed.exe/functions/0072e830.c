/* speed.exe 0072e830 FUN_0072e830; analysis pseudocode, not buildable source.
 * calls 0072d8c0 FUN_0072d8c0
 * calls 004655f0 FUN_004655f0
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0072e830(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x838) != 0) {
    iVar1 = *(int *)(param_1 + 0x844);
    if (iVar1 != 0) {
      FUN_0072d8c0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
    FUN_004655f0(*(undefined4 *)(param_1 + 0x838));
    *(undefined4 *)(param_1 + 0x838) = 0;
    *(undefined4 *)(param_1 + 0x83c) = 0;
  }
  return;
}

