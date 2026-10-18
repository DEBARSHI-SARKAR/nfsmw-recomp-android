/* speed.exe 004bd130 FUN_004bd130; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b4b00 FUN_004b4b00
 */

int __thiscall FUN_004bd130(int param_1,byte param_2)

{
  FUN_004b4b00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

