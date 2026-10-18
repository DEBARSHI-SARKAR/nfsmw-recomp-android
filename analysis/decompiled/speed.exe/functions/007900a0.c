/* speed.exe 007900a0 FUN_007900a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078fbc0 FUN_0078fbc0
 * calls 008414b0 FUN_008414b0
 */

void __fastcall FUN_007900a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x28);
    if (iVar1 != -1) {
      FUN_008414b0(*(undefined4 *)(param_1 + 0x38),iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

