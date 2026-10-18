/* speed.exe 006f9fa0 FUN_006f9fa0; analysis pseudocode, not buildable source.
 * calls 006f8bd0 FUN_006f8bd0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006f9fa0(int param_1,byte param_2)

{
  FUN_006f8bd0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

