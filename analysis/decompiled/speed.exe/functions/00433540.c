/* speed.exe 00433540 FUN_00433540; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432060 FUN_00432060
 */

int __thiscall FUN_00433540(int param_1,byte param_2)

{
  FUN_00432060();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x758,0);
  }
  return param_1;
}

