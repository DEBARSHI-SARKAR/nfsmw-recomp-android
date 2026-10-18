/* speed.exe 007f7654 FUN_007f7654; analysis pseudocode, not buildable source.
 * calls 007f7232 FUN_007f7232
 * calls 007f5ac3 FUN_007f5ac3
 */

undefined4 * __thiscall FUN_007f7654(undefined4 *param_1,undefined4 param_2)

{
  FUN_007f7232(param_2);
  *param_1 = &PTR_LAB_008c2670;
  FUN_007f5ac3();
  return param_1;
}

