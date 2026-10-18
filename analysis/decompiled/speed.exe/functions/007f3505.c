/* speed.exe 007f3505 FUN_007f3505; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f35ce FUN_007f35ce
 */

undefined4 * __thiscall FUN_007f3505(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c234c;
  FUN_007f35ce();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x78);
  }
  return param_1;
}

