/* speed.exe 005bc1f0 FUN_005bc1f0; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bc1f0(undefined4 *param_1)

{
  FUN_005bc050();
  *param_1 = &PTR_FUN_008a2df8;
  param_1[0x17] = 0;
  param_1[6] = 7;
  return param_1;
}

