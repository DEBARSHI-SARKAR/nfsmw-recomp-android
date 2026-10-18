/* speed.exe 006b3dc0 FUN_006b3dc0; analysis pseudocode, not buildable source.
 * calls 006b3df0 FUN_006b3df0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b3dc0(int param_1,byte param_2)

{
  FUN_006b3df0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1d4,0);
  }
  return param_1;
}

