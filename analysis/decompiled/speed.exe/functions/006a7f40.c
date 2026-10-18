/* speed.exe 006a7f40 FUN_006a7f40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0069be00 FUN_0069be00
 */

int __thiscall FUN_006a7f40(int param_1,byte param_2)

{
  FUN_0069be00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xf0,0);
  }
  return param_1;
}

