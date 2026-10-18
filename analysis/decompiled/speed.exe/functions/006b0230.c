/* speed.exe 006b0230 FUN_006b0230; analysis pseudocode, not buildable source.
 * calls 006a0fe0 FUN_006a0fe0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b0230(int param_1,byte param_2)

{
  FUN_006a0fe0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x160,0);
  }
  return param_1;
}

