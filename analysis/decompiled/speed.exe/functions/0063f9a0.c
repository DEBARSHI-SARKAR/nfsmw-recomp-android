/* speed.exe 0063f9a0 FUN_0063f9a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00634d00 FUN_00634d00
 */

int __thiscall FUN_0063f9a0(int param_1,byte param_2)

{
  FUN_00634d00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1858,0);
  }
  return param_1;
}

