/* speed.exe 006f0c50 FUN_006f0c50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ecd50 FUN_006ecd50
 */

int __thiscall FUN_006f0c50(int param_1,byte param_2)

{
  FUN_006ecd50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28,0);
  }
  return param_1;
}

