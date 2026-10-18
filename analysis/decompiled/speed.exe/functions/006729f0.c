/* speed.exe 006729f0 FUN_006729f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00672a20 thunk_FUN_00431990
 */

int __thiscall FUN_006729f0(int param_1,byte param_2)

{
  thunk_FUN_00431990();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c,0);
  }
  return param_1;
}

