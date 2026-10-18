/* speed.exe 007f3241 FUN_007f3241; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f352d FUN_007f352d
 */

undefined4 * __thiscall FUN_007f3241(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c2308;
  FUN_007f352d();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x464);
  }
  return param_1;
}

