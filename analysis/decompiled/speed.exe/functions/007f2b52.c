/* speed.exe 007f2b52 FUN_007f2b52; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f2871 FUN_007f2871
 */

undefined4 __thiscall FUN_007f2b52(undefined4 param_1,byte param_2)

{
  FUN_007f2871();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x4a4);
  }
  return param_1;
}

