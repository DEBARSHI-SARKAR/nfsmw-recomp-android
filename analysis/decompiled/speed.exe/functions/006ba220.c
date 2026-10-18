/* speed.exe 006ba220 FUN_006ba220; analysis pseudocode, not buildable source.
 * calls 006b90d0 FUN_006b90d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006ba220(int param_1,byte param_2)

{
  FUN_006b90d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10c,0);
  }
  return param_1;
}

