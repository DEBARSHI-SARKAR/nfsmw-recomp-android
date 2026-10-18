/* speed.exe 0070f190 FUN_0070f190; analysis pseudocode, not buildable source.
 * calls 007053d0 FUN_007053d0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070f190(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008967fc;
  FUN_007053d0();
  if (param_1[2] != 0) {
    FUN_005d0370(param_1[2],0xc,0);
  }
  param_1[2] = 0;
  return;
}

