/* speed.exe 007eea3f FUN_007eea3f; analysis pseudocode, not buildable source.
 * calls 007ed7df FUN_007ed7df
 * calls 007ed884 FUN_007ed884
 */

undefined4 * __thiscall
FUN_007eea3f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  FUN_007ed7df(param_8,param_9,param_10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[5] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[8] = param_5;
  param_1[9] = param_6;
  *param_1 = &PTR_FUN_008c2078;
  param_1[0xc] = param_7;
  FUN_007ed884();
  return param_1;
}

