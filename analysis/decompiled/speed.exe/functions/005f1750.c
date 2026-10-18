/* speed.exe 005f1750 FUN_005f1750; analysis pseudocode, not buildable source.
 * calls 005ef2d0 FUN_005ef2d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_005f1750(int param_1,byte param_2)

{
  FUN_005ef2d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xcc,0);
  }
  return param_1;
}

