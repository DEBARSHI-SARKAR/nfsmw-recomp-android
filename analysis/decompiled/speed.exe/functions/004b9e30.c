/* speed.exe 004b9e30 FUN_004b9e30; analysis pseudocode, not buildable source.
 * calls 004afb10 FUN_004afb10
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004b9e30(int param_1,byte param_2)

{
  FUN_004afb10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

