/* speed.exe 0041fc20 FUN_0041fc20; analysis pseudocode, not buildable source.
 * calls 0041fc50 FUN_0041fc50
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0041fc20(int param_1,byte param_2)

{
  FUN_0041fc50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x50,0);
  }
  return param_1;
}

