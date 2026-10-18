/* speed.exe 007ee815 FUN_007ee815; analysis pseudocode, not buildable source.
 * calls 007ed087 FUN_007ed087
 * calls 007ed7df FUN_007ed7df
 * calls 007ed884 FUN_007ed884
 */

undefined4 * __thiscall
FUN_007ee815(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_007ed7df(param_4,param_5,param_6);
  *param_1 = &PTR_FUN_008c2048;
  FUN_007ed087(param_2);
  param_1[9] = 0;
  param_1[8] = param_3;
  FUN_007ed884();
  return param_1;
}

