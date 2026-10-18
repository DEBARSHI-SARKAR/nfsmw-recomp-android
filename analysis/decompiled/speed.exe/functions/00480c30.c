/* speed.exe 00480c30 FUN_00480c30; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0047bd50 FUN_0047bd50
 */

void __fastcall FUN_00480c30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008950fc;
  FUN_0047bd50();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

