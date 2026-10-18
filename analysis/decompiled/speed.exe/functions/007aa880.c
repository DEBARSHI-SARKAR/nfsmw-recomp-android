/* speed.exe 007aa880 FUN_007aa880; analysis pseudocode, not buildable source.
 * calls 00586fa0 FUN_00586fa0
 */

undefined4 * __thiscall
FUN_007aa880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00586fa0(param_2,param_3,0);
  *param_1 = &PTR_FUN_008b75b0;
  param_1[0x13] = param_4;
  return param_1;
}

