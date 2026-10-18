/* speed.exe 00440010 FUN_00440010; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00440040 thunk_FUN_00438190
 */

int __thiscall FUN_00440010(int param_1,byte param_2)

{
  thunk_FUN_00438190();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

