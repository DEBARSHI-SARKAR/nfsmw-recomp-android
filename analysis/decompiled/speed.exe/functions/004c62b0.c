/* speed.exe 004c62b0 FUN_004c62b0; analysis pseudocode, not buildable source.
 * calls 004bf600 FUN_004bf600
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004c62b0(int param_1,byte param_2)

{
  FUN_004bf600();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

