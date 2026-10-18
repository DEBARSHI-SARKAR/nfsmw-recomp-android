/* speed.exe 006b5620 FUN_006b5620; analysis pseudocode, not buildable source.
 * calls 006b1450 FUN_006b1450
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006b5620(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008ac148;
  FUN_006b1450();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

