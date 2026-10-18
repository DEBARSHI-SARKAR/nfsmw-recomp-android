/* speed.exe 0043f730 FUN_0043f730; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043f760 thunk_FUN_00438190
 */

int __thiscall FUN_0043f730(int param_1,byte param_2)

{
  thunk_FUN_00438190();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28,0);
  }
  return param_1;
}

