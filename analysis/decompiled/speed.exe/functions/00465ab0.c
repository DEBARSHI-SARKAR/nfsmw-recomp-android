/* speed.exe 00465ab0 FUN_00465ab0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 007ec1b2 FUN_007ec1b2
 */

void __fastcall FUN_00465ab0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_004655f0(param_1[2]);
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[0xa0f] = 0;
    FUN_007ec1b2();
    return;
  }
  return;
}

