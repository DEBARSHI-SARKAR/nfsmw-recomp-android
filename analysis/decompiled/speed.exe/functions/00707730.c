/* speed.exe 00707730 FUN_00707730; analysis pseudocode, not buildable source.
 * calls 00700360 FUN_00700360
 * calls 0045f2e0 FUN_0045f2e0
 */

undefined4 __thiscall FUN_00707730(undefined4 param_1,byte param_2)

{
  FUN_00700360();
  if (((param_2 & 1) != 0) && (DAT_00993cc8 != 0)) {
    FUN_0045f2e0(param_1);
  }
  return param_1;
}

