/* speed.exe 0042e260 FUN_0042e260; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00425850 FUN_00425850
 */

void __fastcall FUN_0042e260(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00891820;
  FUN_00425850();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

