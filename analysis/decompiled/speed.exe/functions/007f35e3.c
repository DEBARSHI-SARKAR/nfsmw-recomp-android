/* speed.exe 007f35e3 FUN_007f35e3; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 */

undefined4 * __thiscall FUN_007f35e3(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c2390;
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,4);
  }
  return param_1;
}

