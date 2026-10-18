/* speed.exe 006b83f0 FUN_006b83f0; analysis pseudocode, not buildable source.
 * calls 006b7d80 FUN_006b7d80
 */

void __fastcall FUN_006b83f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008acde0;
  param_1[2] = &PTR_LAB_008acdd4;
  param_1[0x12] = &PTR_LAB_008acd28;
  param_1[0x14] = &PTR_LAB_008acc80;
  param_1[0x16] = &PTR_LAB_008acc78;
  param_1[0x18] = &PTR_LAB_008acc40;
  param_1[0x19] = &PTR_FUN_008acc3c;
  param_1[0x1a] = &PTR_LAB_008acc2c;
  param_1[0x4c] = &PTR_LAB_008acc0c;
  FUN_006b7d80();
  return;
}

