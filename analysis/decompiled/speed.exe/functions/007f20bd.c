/* speed.exe 007f20bd FUN_007f20bd; analysis pseudocode, not buildable source.
 * calls 007f1f74 FUN_007f1f74
 * calls 007f1932 FUN_007f1932
 */

undefined4 __thiscall FUN_007f20bd(undefined4 param_1,byte param_2)

{
  FUN_007f1f74();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x46c);
  }
  return param_1;
}

