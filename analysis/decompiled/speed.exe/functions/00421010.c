/* speed.exe 00421010 FUN_00421010; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00421040 FUN_00421040
 */

int __thiscall FUN_00421010(int param_1,byte param_2)

{
  FUN_00421040();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa8,0);
  }
  return param_1;
}

