/* speed.exe 006b02a0 FUN_006b02a0; analysis pseudocode, not buildable source.
 * calls 006a2a90 FUN_006a2a90
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b02a0(int param_1,byte param_2)

{
  FUN_006a2a90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x120,0);
  }
  return param_1;
}

