/* speed.exe 0070f7b0 FUN_0070f7b0; analysis pseudocode, not buildable source.
 * calls 00705390 FUN_00705390
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070f7b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008967fc;
  FUN_00705390();
  if (param_1[2] != 0) {
    FUN_005d0370(param_1[2],0x18,0);
  }
  param_1[2] = 0;
  return;
}

