/* speed.exe 004bf220 FUN_004bf220; analysis pseudocode, not buildable source.
 * calls 004bf250 FUN_004bf250
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004bf220(int param_1,byte param_2)

{
  FUN_004bf250();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

