/* speed.exe 0077f900 FUN_0077f900; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077d3b0 thunk_FUN_0077c740
 */

int __thiscall FUN_0077f900(int param_1,byte param_2)

{
  thunk_FUN_0077c740();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10,0);
  }
  return param_1;
}

