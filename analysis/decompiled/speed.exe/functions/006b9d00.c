/* speed.exe 006b9d00 FUN_006b9d00; analysis pseudocode, not buildable source.
 * calls 006b9920 FUN_006b9920
 */

undefined4 * __thiscall FUN_006b9d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006b9920(param_2,param_3);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *param_1 = &PTR_FUN_008ad3c4;
  param_1[2] = &PTR_LAB_008ad3bc;
  param_1[0x13] = &PTR_LAB_008ad398;
  param_1[0x15] = &PTR_FUN_008ad394;
  param_1[0x16] = &PTR_LAB_008ad388;
  param_1[0x18] = &PTR_LAB_008ad380;
  return param_1;
}

