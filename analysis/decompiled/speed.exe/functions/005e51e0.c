/* speed.exe 005e51e0 FUN_005e51e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e5210 FUN_005e5210
 */

int __thiscall FUN_005e51e0(int param_1,byte param_2)

{
  FUN_005e5210();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x24,0);
  }
  return param_1;
}

