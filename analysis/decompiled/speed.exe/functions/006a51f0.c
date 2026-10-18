/* speed.exe 006a51f0 FUN_006a51f0; analysis pseudocode, not buildable source.
 * calls 00696b10 FUN_00696b10
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006a51f0(int param_1,byte param_2)

{
  FUN_00696b10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

