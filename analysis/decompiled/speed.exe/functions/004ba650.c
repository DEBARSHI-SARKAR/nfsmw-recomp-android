/* speed.exe 004ba650 FUN_004ba650; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b09d0 FUN_004b09d0
 */

int __thiscall FUN_004ba650(int param_1,byte param_2)

{
  FUN_004b09d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

