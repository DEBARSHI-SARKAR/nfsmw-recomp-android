/* speed.exe 00705480 FUN_00705480; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_00705480(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_004ac0e0(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_1[3] & 1;
    return;
  }
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  return;
}

