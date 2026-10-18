/* speed.exe 0082a150 FUN_0082a150; analysis pseudocode, not buildable source.
 * calls 00834de4 FUN_00834de4
 */

undefined4 __thiscall FUN_0082a150(undefined4 param_1,byte param_2)

{
  FUN_00834de4();
  if (((param_2 & 1) != 0) && (DAT_009c298c != (code *)0x0)) {
    (*DAT_009c298c)(param_1);
  }
  return param_1;
}

