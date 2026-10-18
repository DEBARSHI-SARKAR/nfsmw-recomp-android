/* speed.exe 006ff620 FUN_006ff620; analysis pseudocode, not buildable source.
 * calls 004b1ce0 FUN_004b1ce0
 * calls 004ccab0 FUN_004ccab0
 */

undefined4 __thiscall FUN_006ff620(undefined4 param_1,byte param_2)

{
  FUN_004ccab0();
  if ((param_2 & 1) != 0) {
    FUN_004b1ce0(param_1);
  }
  return param_1;
}

