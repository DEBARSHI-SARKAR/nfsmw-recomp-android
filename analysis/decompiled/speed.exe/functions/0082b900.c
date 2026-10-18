/* speed.exe 0082b900 FUN_0082b900; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 0082ae50 FUN_0082ae50
 */

undefined4 __thiscall FUN_0082b900(undefined4 param_1,byte param_2)

{
  FUN_0082ae50();
  if ((param_2 & 1) != 0) {
    FUN_008294a0(param_1);
  }
  return param_1;
}

