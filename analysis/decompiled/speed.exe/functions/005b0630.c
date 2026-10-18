/* speed.exe 005b0630 FUN_005b0630; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005b0630(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008a2c78;
  thunk_FUN_007c7250(param_1[8]);
  *param_1 = &PTR_FUN_008a2c2c;
  if (param_1[3] != 0) {
    thunk_FUN_007c7250(param_1[3]);
  }
  *param_1 = &PTR_LAB_008a2c14;
  return;
}

