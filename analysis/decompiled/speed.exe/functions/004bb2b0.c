/* speed.exe 004bb2b0 FUN_004bb2b0; analysis pseudocode, not buildable source.
 * calls 004b3310 FUN_004b3310
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004bb2b0(int param_1,byte param_2)

{
  FUN_004b3310();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

