/* speed.exe 0078bc60 FUN_0078bc60; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

undefined4 * __thiscall FUN_0078bc60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = 2;
  param_1[3] = 2;
  param_1[4] = 2;
  param_1[5] = 2;
  param_1[1] = 0xb;
  param_1[0xb] = 6;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00460ca0(param_1 + 6,param_3,0x10);
  return param_1;
}

