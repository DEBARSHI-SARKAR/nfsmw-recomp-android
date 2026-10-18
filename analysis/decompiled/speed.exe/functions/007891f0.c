/* speed.exe 007891f0 FUN_007891f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 007868f0 FUN_007868f0
 */

int __thiscall FUN_007891f0(int param_1,byte param_2)

{
  FUN_007868f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10,0);
  }
  return param_1;
}

