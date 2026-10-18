/* speed.exe 004841a0 FUN_004841a0; analysis pseudocode, not buildable source.
 * calls 00481480 FUN_00481480
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_004841a0(int param_1,byte param_2)

{
  FUN_00481480();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

