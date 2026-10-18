/* speed.exe 004c20d0 FUN_004c20d0; analysis pseudocode, not buildable source.
 * calls 004b8de0 FUN_004b8de0
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004c20d0(int param_1,byte param_2)

{
  FUN_004b8de0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

