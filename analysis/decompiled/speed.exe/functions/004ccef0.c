/* speed.exe 004ccef0 FUN_004ccef0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004cc910 FUN_004cc910
 */

int __thiscall FUN_004ccef0(int param_1,byte param_2)

{
  FUN_004cc910();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28,0);
  }
  return param_1;
}

