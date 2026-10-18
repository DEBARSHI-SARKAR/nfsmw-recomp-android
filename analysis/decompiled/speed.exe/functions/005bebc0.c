/* speed.exe 005bebc0 FUN_005bebc0; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bebc0(undefined4 *param_1)

{
  FUN_005bc050();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_008a2e44;
  param_1[6] = 9;
  return param_1;
}

