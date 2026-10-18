/* speed.exe 004c5bc0 FUN_004c5bc0; analysis pseudocode, not buildable source.
 * calls 004c5bf0 thunk_FUN_004b4f90
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004c5bc0(int param_1,byte param_2)

{
  thunk_FUN_004b4f90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

