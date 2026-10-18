/* speed.exe 006b5780 FUN_006b5780; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b1550 FUN_006b1550
 */

void __fastcall FUN_006b5780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008ac210;
  FUN_006b1550();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

