/* speed.exe 006b0600 FUN_006b0600; analysis pseudocode, not buildable source.
 * calls 006a3e20 FUN_006a3e20
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b0600(int param_1,byte param_2)

{
  FUN_006a3e20();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x98,0);
  }
  return param_1;
}

