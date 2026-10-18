/* speed.exe 004493a0 FUN_004493a0; analysis pseudocode, not buildable source.
 * calls 004457d0 FUN_004457d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_004493a0(int param_1,byte param_2)

{
  FUN_004457d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x54,0);
  }
  return param_1;
}

