/* speed.exe 005be510 FUN_005be510; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005be510(undefined4 *param_1)

{
  FUN_005bc050();
  *param_1 = &PTR_FUN_008a2e34;
  param_1[6] = 1;
  param_1[0x17] = 0;
  return param_1;
}

