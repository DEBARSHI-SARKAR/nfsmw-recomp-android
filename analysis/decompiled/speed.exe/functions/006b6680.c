/* speed.exe 006b6680 FUN_006b6680; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b1650 FUN_006b1650
 */

void __fastcall FUN_006b6680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008ac648;
  FUN_006b1650();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

