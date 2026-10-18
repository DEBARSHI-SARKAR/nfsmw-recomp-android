/* speed.exe 006b9e40 FUN_006b9e40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006b8b60 FUN_006b8b60
 */

int __thiscall FUN_006b9e40(int param_1,byte param_2)

{
  FUN_006b8b60();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc0,0);
  }
  return param_1;
}

