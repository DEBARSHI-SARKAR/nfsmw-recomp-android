/* speed.exe 007139a0 FUN_007139a0; analysis pseudocode, not buildable source.
 * calls 00712040 FUN_00712040
 */

undefined4 __thiscall FUN_007139a0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00712040(param_2 + 4);
    return param_1;
  }
  FUN_00712040(0);
  return param_1;
}

