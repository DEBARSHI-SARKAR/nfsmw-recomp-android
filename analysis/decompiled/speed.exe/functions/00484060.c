/* speed.exe 00484060 FUN_00484060; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00480dd0 FUN_00480dd0
 */

int __thiscall FUN_00484060(int param_1,byte param_2)

{
  FUN_00480dd0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c8,0);
  }
  return param_1;
}

