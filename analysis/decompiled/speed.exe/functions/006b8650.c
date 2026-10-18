/* speed.exe 006b8650 FUN_006b8650; analysis pseudocode, not buildable source.
 * calls 006b7ad0 FUN_006b7ad0
 */

undefined4 * __thiscall FUN_006b8650(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006b7ad0(param_2,param_3);
  *param_1 = &PTR_FUN_008ad230;
  param_1[2] = &PTR_LAB_008ad224;
  param_1[0x12] = &PTR_LAB_008ad178;
  param_1[0x14] = &PTR_LAB_008ad0d0;
  param_1[0x16] = &PTR_LAB_008ad0cc;
  param_1[0x18] = &PTR_LAB_008ad094;
  param_1[0x19] = &PTR_FUN_008ad090;
  param_1[0x1a] = &PTR_LAB_008ad080;
  param_1[0x4c] = &PTR_LAB_008ad060;
  return param_1;
}

