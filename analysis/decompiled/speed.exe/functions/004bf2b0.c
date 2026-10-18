/* speed.exe 004bf2b0 FUN_004bf2b0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b5d50 FUN_004b5d50
 */

int __thiscall FUN_004bf2b0(int param_1,byte param_2)

{
  FUN_004b5d50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

