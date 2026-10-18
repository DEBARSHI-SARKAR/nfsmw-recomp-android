/* speed.exe 006b0260 FUN_006b0260; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a1dd0 FUN_006a1dd0
 */

int __thiscall FUN_006b0260(int param_1,byte param_2)

{
  FUN_006a1dd0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xd4,0);
  }
  return param_1;
}

