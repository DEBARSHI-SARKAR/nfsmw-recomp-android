/* speed.exe 006b48a0 FUN_006b48a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006b48d0 thunk_FUN_006a3e20
 */

int __thiscall FUN_006b48a0(int param_1,byte param_2)

{
  thunk_FUN_006a3e20();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x9c,0);
  }
  return param_1;
}

