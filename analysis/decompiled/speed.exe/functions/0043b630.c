/* speed.exe 0043b630 FUN_0043b630; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043b660 FUN_0043b660
 */

int __thiscall FUN_0043b630(int param_1,byte param_2)

{
  FUN_0043b660();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

