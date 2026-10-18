/* speed.exe 007916d0 FUN_007916d0; analysis pseudocode, not buildable source.
 * calls 008428e0 FUN_008428e0
 */

void __fastcall FUN_007916d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008b68f0;
  if (param_1[1] != 0) {
    FUN_008428e0(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

