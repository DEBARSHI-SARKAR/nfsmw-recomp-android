/* speed.exe 0070f8d0 FUN_0070f8d0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0070ebf0 FUN_0070ebf0
 */

int __thiscall FUN_0070f8d0(int param_1,byte param_2)

{
  FUN_0070ebf0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,600,0);
  }
  return param_1;
}

