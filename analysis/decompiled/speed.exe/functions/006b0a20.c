/* speed.exe 006b0a20 FUN_006b0a20; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a4b10 FUN_006a4b10
 */

int __thiscall FUN_006b0a20(int param_1,byte param_2)

{
  FUN_006a4b10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x60,0);
  }
  return param_1;
}

