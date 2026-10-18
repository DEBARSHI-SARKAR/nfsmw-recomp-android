/* speed.exe 004baa40 FUN_004baa40; analysis pseudocode, not buildable source.
 * calls 004b1e50 FUN_004b1e50
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004baa40(int param_1,byte param_2)

{
  FUN_004b1e50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

