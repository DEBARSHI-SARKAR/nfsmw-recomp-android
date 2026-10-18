/* speed.exe 007f359f FUN_007f359f; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 */

undefined4 * __thiscall FUN_007f359f(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c2370;
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x464);
  }
  return param_1;
}

