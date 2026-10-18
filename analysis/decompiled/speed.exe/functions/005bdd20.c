/* speed.exe 005bdd20 FUN_005bdd20; analysis pseudocode, not buildable source.
 * calls 005bc0c0 FUN_005bc0c0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bdd20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008a2e1c;
  if (param_1[0x23] != 0) {
    thunk_FUN_007c7250(param_1[0x23]);
  }
  if (param_1[0x28] != 0) {
    thunk_FUN_007c7250(param_1[0x28]);
  }
  if (param_1[0x27] != 0) {
    thunk_FUN_007c7250(param_1[0x27]);
  }
  FUN_005bc0c0();
  return;
}

