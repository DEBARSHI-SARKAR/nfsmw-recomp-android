/* speed.exe 00688ea0 FUN_00688ea0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00686de0 FUN_00686de0
 */

int __thiscall FUN_00688ea0(int param_1,byte param_2)

{
  FUN_00686de0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x14c,0);
  }
  return param_1;
}

