/* speed.exe 006f9de0 FUN_006f9de0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006f8a20 FUN_006f8a20
 */

int __thiscall FUN_006f9de0(int param_1,byte param_2)

{
  FUN_006f8a20();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x84,0);
  }
  return param_1;
}

