/* speed.exe 006b0ab0 FUN_006b0ab0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006b0ae0 FUN_006b0ae0
 */

int __thiscall FUN_006b0ab0(int param_1,byte param_2)

{
  FUN_006b0ae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

