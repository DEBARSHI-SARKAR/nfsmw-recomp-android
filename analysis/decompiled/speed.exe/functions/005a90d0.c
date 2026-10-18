/* speed.exe 005a90d0 FUN_005a90d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528e30 FUN_00528e30
 */

void __fastcall FUN_005a90d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008a2a74;
  if (param_1[0x4a] != 0) {
    thunk_FUN_007c7250(param_1[0x4a]);
  }
  FUN_00528e30();
  return;
}

