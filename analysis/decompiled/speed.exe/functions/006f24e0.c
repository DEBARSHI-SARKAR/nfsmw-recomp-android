/* speed.exe 006f24e0 FUN_006f24e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ee930 FUN_006ee930
 */

int __thiscall FUN_006f24e0(int param_1,byte param_2)

{
  FUN_006ee930();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c,0);
  }
  return param_1;
}

