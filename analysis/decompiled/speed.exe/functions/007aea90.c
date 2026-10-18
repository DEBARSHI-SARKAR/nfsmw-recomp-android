/* speed.exe 007aea90 FUN_007aea90; analysis pseudocode, not buildable source.
 * calls 007a4890 FUN_007a4890
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007aea90(undefined4 param_1,byte param_2)

{
  FUN_007a4890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

