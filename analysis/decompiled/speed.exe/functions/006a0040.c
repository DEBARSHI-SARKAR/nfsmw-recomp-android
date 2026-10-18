/* speed.exe 006a0040 FUN_006a0040; analysis pseudocode, not buildable source.
 * calls 00690e50 FUN_00690e50
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006a0040(int param_1,byte param_2)

{
  FUN_00690e50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xe8,0);
  }
  return param_1;
}

