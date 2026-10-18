/* speed.exe 004be0f0 FUN_004be0f0; analysis pseudocode, not buildable source.
 * calls 004b4f90 FUN_004b4f90
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004be0f0(int param_1,byte param_2)

{
  FUN_004b4f90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

