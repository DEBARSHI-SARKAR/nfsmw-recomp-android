/* speed.exe 004c3950 FUN_004c3950; analysis pseudocode, not buildable source.
 * calls 004b9c30 FUN_004b9c30
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004c3950(int param_1,byte param_2)

{
  FUN_004b9c30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

