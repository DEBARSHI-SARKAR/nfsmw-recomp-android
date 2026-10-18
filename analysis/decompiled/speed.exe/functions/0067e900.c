/* speed.exe 0067e900 FUN_0067e900; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0067ae10 FUN_0067ae10
 */

void __fastcall FUN_0067e900(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008aa128;
  FUN_0067ae10();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

