/* speed.exe 006a8f00 FUN_006a8f00; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a8f30 thunk_FUN_0069ccc0
 */

int __thiscall FUN_006a8f00(int param_1,byte param_2)

{
  thunk_FUN_0069ccc0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x74,0);
  }
  return param_1;
}

