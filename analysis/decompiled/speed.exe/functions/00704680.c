/* speed.exe 00704680 FUN_00704680; analysis pseudocode, not buildable source.
 * calls 007003d0 FUN_007003d0
 * calls 0045f2e0 FUN_0045f2e0
 */

undefined4 __thiscall FUN_00704680(undefined4 param_1,byte param_2)

{
  FUN_007003d0();
  if (((param_2 & 1) != 0) && (DAT_00993cc8 != 0)) {
    FUN_0045f2e0(param_1);
  }
  return param_1;
}

