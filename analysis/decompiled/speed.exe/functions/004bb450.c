/* speed.exe 004bb450 FUN_004bb450; analysis pseudocode, not buildable source.
 * calls 004b3390 FUN_004b3390
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004bb450(int param_1,byte param_2)

{
  FUN_004b3390();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

