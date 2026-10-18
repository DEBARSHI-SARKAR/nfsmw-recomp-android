/* speed.exe 005bdd70 FUN_005bdd70; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bdd70(undefined4 *param_1)

{
  FUN_005bc050();
  *param_1 = &PTR_FUN_008a2e24;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = &PTR_LAB_008a2c18;
  param_1[6] = 5;
  return param_1;
}

