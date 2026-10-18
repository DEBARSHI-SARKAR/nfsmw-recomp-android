/* speed.exe 004b4430 FUN_004b4430; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_004b4430(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00896c60;
  DAT_00912100 = 0;
  thunk_FUN_007c7250(param_1[1]);
  thunk_FUN_007c7250(param_1[0x23]);
  param_1[0x25] = 0;
  *param_1 = &PTR_LAB_008967fc;
  return;
}

