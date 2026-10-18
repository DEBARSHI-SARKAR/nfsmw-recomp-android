/* speed.exe 006b23f0 FUN_006b23f0; analysis pseudocode, not buildable source.
 * calls 006aaf50 FUN_006aaf50
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b23f0(int param_1,byte param_2)

{
  FUN_006aaf50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10c,0);
  }
  return param_1;
}

