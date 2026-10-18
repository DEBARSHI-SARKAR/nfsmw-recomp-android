/* speed.exe 005b0440 FUN_005b0440; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005b0440(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008a2c68;
  thunk_FUN_007c7250(param_1[1]);
  thunk_FUN_007c7250(param_1[2]);
  *param_1 = &PTR_LAB_0089b064;
  return;
}

