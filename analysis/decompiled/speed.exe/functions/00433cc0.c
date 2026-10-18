/* speed.exe 00433cc0 FUN_00433cc0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432820 FUN_00432820
 */

int __thiscall FUN_00433cc0(int param_1,byte param_2)

{
  FUN_00432820();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa8,0);
  }
  return param_1;
}

