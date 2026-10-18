/* speed.exe 004c3c50 FUN_004c3c50; analysis pseudocode, not buildable source.
 * calls 004c3c80 thunk_FUN_004b9c30
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004c3c50(int param_1,byte param_2)

{
  thunk_FUN_004b9c30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

