/* speed.exe 005b5ec0 FUN_005b5ec0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005af940 FUN_005af940
 */

void __fastcall FUN_005b5ec0(int param_1)

{
  if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffffe;
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 100) != 0) {
      thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_005af940();
    return;
  }
  return;
}

