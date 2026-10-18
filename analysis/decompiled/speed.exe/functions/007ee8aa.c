/* speed.exe 007ee8aa FUN_007ee8aa; analysis pseudocode, not buildable source.
 * calls 007ed7df FUN_007ed7df
 * calls 007ed884 FUN_007ed884
 */

undefined4 * __thiscall
FUN_007ee8aa(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_007ed7df(param_3,param_4,param_5);
  *param_1 = &PTR_FUN_008c2058;
  param_1[5] = param_2;
  FUN_007ed884();
  return param_1;
}

