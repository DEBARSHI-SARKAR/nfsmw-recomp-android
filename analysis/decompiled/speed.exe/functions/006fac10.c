/* speed.exe 006fac10 FUN_006fac10; analysis pseudocode, not buildable source.
 * calls 006f8db0 FUN_006f8db0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006fac10(int param_1,byte param_2)

{
  FUN_006f8db0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x8c,0);
  }
  return param_1;
}

