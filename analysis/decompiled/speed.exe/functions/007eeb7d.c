/* speed.exe 007eeb7d FUN_007eeb7d; analysis pseudocode, not buildable source.
 * calls 007ed7df FUN_007ed7df
 * calls 007ed884 FUN_007ed884
 */

undefined4 * __thiscall
FUN_007eeb7d(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_007ed7df(param_6,param_7,param_8);
  param_1[5] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_3 >> 0x1f;
  param_1[8] = param_4;
  *param_1 = &PTR_FUN_008c2088;
  param_1[9] = param_4 >> 0x1f;
  param_1[0xc] = param_5;
  FUN_007ed884();
  return param_1;
}

