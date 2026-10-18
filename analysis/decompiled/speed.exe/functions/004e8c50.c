/* speed.exe 004e8c50 FUN_004e8c50; analysis pseudocode, not buildable source.
 * calls 0081e274 FUN_0081e274
 * calls 0081e063 FUN_0081e063
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

void __fastcall FUN_004e8c50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00898dd0;
  if (param_1[9] != 0) {
    FUN_0081bccb();
    FUN_0081e274(param_1[7]);
    FUN_0081bcd9();
    param_1[9] = 0;
  }
  FUN_0081e063(param_1[7]);
  *param_1 = &PTR_LAB_008967fc;
  return;
}

