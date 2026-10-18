/* speed.exe 005bc6c0 FUN_005bc6c0; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bc6c0(undefined4 *param_1)

{
  FUN_005bc050();
  *param_1 = &PTR_FUN_008a2e04;
  param_1[6] = 0xb;
  return param_1;
}

