/* speed.exe 004219a0 FUN_004219a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004219d0 FUN_004219d0
 */

int __thiscall FUN_004219a0(int param_1,byte param_2)

{
  FUN_004219d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

