/* speed.exe 005bee20 FUN_005bee20; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bee20(undefined4 *param_1)

{
  FUN_005bc050();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_008a2e4c;
  param_1[6] = 10;
  return param_1;
}

