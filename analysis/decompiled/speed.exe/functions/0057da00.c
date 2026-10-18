/* speed.exe 0057da00 FUN_0057da00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0057da20 FUN_0057da20
 */

undefined4 __thiscall FUN_0057da00(undefined4 param_1,byte param_2)

{
  FUN_0057da20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

