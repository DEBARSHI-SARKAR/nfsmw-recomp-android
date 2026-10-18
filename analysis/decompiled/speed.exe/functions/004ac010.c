/* speed.exe 004ac010 FUN_004ac010; analysis pseudocode, not buildable source.
 * calls 00465280 FUN_00465280
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_004ac010(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00465280(DAT_008ee558);
    FUN_004655f0(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}

