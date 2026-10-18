/* speed.exe 007f3019 FUN_007f3019; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f2f16 FUN_007f2f16
 */

undefined4 __thiscall FUN_007f3019(undefined4 param_1,byte param_2)

{
  FUN_007f2f16();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x7c);
  }
  return param_1;
}

