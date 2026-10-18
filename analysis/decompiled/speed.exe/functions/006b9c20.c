/* speed.exe 006b9c20 FUN_006b9c20; analysis pseudocode, not buildable source.
 * calls 006b9b20 FUN_006b9b20
 */

undefined4 * __thiscall FUN_006b9c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006b9b20(param_2,param_3);
  *param_1 = &PTR_FUN_008ad6ac;
  param_1[2] = &PTR_LAB_008ad6a4;
  param_1[0x13] = &PTR_LAB_008ad680;
  param_1[0x15] = &PTR_LAB_008ad67c;
  param_1[0x16] = &PTR_LAB_008ad670;
  param_1[0x18] = &PTR_LAB_008ad668;
  param_1[0x2e] = &PTR_LAB_008ad658;
  return param_1;
}

