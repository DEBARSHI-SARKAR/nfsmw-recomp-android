/* speed.exe 004caad0 FUN_004caad0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004c7900 FUN_004c7900
 */

int __thiscall FUN_004caad0(int param_1,byte param_2)

{
  FUN_004c7900();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

