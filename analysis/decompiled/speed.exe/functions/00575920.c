/* speed.exe 00575920 FUN_00575920; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall
FUN_00575920(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[0xc] = param_4;
  param_1[0xb] = param_3;
  FUN_00460ca0(param_1 + 3,param_5,0x1f);
  param_1[1] = param_6;
  return;
}

