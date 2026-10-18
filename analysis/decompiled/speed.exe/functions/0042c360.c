/* speed.exe 0042c360 FUN_0042c360; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004243f0 FUN_004243f0
 */

int __thiscall FUN_0042c360(int param_1,byte param_2)

{
  FUN_004243f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x378,0);
  }
  return param_1;
}

