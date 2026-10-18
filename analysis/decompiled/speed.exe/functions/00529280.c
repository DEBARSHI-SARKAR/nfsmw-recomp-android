/* speed.exe 00529280 FUN_00529280; analysis pseudocode, not buildable source.
 * calls 00528e30 FUN_00528e30
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00529280(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0089cf60;
  thunk_FUN_007c7250(param_1[0x4c]);
  thunk_FUN_007c7250(param_1[0x4d]);
  thunk_FUN_007c7250(param_1[0x4e]);
  thunk_FUN_007c7250(param_1[0x4f]);
  thunk_FUN_007c7250(param_1[0x50]);
  thunk_FUN_007c7250(param_1[0x51]);
  param_1[0x51] = 0;
  thunk_FUN_007c7250(param_1[0x53]);
  param_1[0x53] = 0;
  *DAT_0091ca20 = 0;
  FUN_00528e30();
  return;
}

