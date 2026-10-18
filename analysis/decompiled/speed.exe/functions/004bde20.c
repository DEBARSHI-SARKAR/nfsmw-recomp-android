/* speed.exe 004bde20 FUN_004bde20; analysis pseudocode, not buildable source.
 * calls 004b4e40 FUN_004b4e40
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004bde20(int param_1,byte param_2)

{
  FUN_004b4e40();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

