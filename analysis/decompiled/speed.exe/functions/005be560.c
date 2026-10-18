/* speed.exe 005be560 FUN_005be560; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005be560(undefined4 *param_1)

{
  FUN_005bc050();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_008a2e3c;
  param_1[6] = 0xc;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 1;
  param_1[0x1c] = 1;
  param_1[0x1d] = 1;
  return param_1;
}

