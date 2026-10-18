/* speed.exe 005bcc50 FUN_005bcc50; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bcc50(undefined4 *param_1)

{
  FUN_005bc050();
  *param_1 = &PTR_FUN_008a2e0c;
  param_1[6] = 3;
  return param_1;
}

