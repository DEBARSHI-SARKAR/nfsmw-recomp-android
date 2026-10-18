/* speed.exe 005f8a90 FUN_005f8a90; analysis pseudocode, not buildable source.
 * calls 005f7c10 FUN_005f7c10
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_005f8a90(int param_1,byte param_2)

{
  FUN_005f7c10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x40,0);
  }
  return param_1;
}

