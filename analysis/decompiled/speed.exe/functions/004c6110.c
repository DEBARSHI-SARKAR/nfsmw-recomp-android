/* speed.exe 004c6110 FUN_004c6110; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004bf260 FUN_004bf260
 */

int __thiscall FUN_004c6110(int param_1,byte param_2)

{
  FUN_004bf260();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

