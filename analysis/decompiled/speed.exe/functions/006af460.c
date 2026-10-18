/* speed.exe 006af460 FUN_006af460; analysis pseudocode, not buildable source.
 * calls 006a0180 FUN_006a0180
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006af460(int param_1,byte param_2)

{
  FUN_006a0180();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1ac,0);
  }
  return param_1;
}

