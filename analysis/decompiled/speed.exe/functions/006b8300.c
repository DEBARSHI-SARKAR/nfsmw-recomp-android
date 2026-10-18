/* speed.exe 006b8300 FUN_006b8300; analysis pseudocode, not buildable source.
 * calls 006b7ad0 FUN_006b7ad0
 */

undefined4 * __thiscall FUN_006b8300(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006b7ad0(param_2,param_3);
  *param_1 = &PTR_FUN_008acde0;
  param_1[2] = &PTR_LAB_008acdd4;
  param_1[0x12] = &PTR_LAB_008acd28;
  param_1[0x14] = &PTR_LAB_008acc80;
  param_1[0x16] = &PTR_LAB_008acc78;
  param_1[0x18] = &PTR_LAB_008acc40;
  param_1[0x19] = &PTR_FUN_008acc3c;
  param_1[0x1a] = &PTR_LAB_008acc2c;
  param_1[0x4c] = &PTR_LAB_008acc0c;
  return param_1;
}

