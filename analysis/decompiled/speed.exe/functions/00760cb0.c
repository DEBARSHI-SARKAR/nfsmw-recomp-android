/* speed.exe 00760cb0 FUN_00760cb0; analysis pseudocode, not buildable source.
 * calls 00760ca0 FUN_00760ca0
 * calls 004655f0 FUN_004655f0
 */

undefined4 __thiscall FUN_00760cb0(undefined4 param_1,byte param_2)

{
  FUN_00760ca0();
  if ((param_2 & 1) != 0) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

