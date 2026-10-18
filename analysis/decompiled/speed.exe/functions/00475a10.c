/* speed.exe 00475a10 FUN_00475a10; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00475a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00894da8;
  thunk_FUN_007c7250(param_1[0x22]);
  thunk_FUN_007c7250(param_1[0x23]);
  thunk_FUN_007c7250(param_1[0x24]);
  FUN_00470a10();
  return;
}

