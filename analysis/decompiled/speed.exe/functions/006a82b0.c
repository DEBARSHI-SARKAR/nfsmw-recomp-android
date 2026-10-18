/* speed.exe 006a82b0 FUN_006a82b0; analysis pseudocode, not buildable source.
 * calls 006a82e0 FUN_006a82e0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006a82b0(int param_1,byte param_2)

{
  FUN_006a82e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xf0,0);
  }
  return param_1;
}

