/* speed.exe 007ee70b FUN_007ee70b; analysis pseudocode, not buildable source.
 * calls 007ed087 FUN_007ed087
 * calls 007ed7df FUN_007ed7df
 * calls 007ed884 FUN_007ed884
 */

undefined4 * __thiscall
FUN_007ee70b(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_007ed7df(param_3,param_4,param_5);
  *param_1 = &PTR_FUN_008c2028;
  FUN_007ed087(param_2);
  FUN_007ed884();
  return param_1;
}

