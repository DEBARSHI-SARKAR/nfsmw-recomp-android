/* speed.exe 005957c0 FUN_005957c0; analysis pseudocode, not buildable source.
 * calls 005951e0 FUN_005951e0
 */

undefined4 * __thiscall
FUN_005957c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_005951e0(param_2,param_3,param_4,0);
  param_1[0x15] = param_5;
  *param_1 = &PTR_FUN_008a1b30;
  param_1[0x16] = param_6;
  param_1[0x17] = param_7;
  return param_1;
}

