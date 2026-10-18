/* speed.exe 004bbab0 FUN_004bbab0; analysis pseudocode, not buildable source.
 * calls 004b36c0 FUN_004b36c0
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004bbab0(int param_1,byte param_2)

{
  FUN_004b36c0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

