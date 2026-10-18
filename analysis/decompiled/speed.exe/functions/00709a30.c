/* speed.exe 00709a30 FUN_00709a30; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_00709a30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008967fc;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_004ac0e0(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = param_1[4] & 1;
    return;
  }
  param_1[3] = 0;
  param_1[4] = param_1[4] & 1;
  return;
}

