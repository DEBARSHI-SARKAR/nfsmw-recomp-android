/* speed.exe 006b8730 FUN_006b8730; analysis pseudocode, not buildable source.
 * calls 006b7d80 FUN_006b7d80
 */

void __fastcall FUN_006b8730(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008ad230;
  param_1[2] = &PTR_LAB_008ad224;
  param_1[0x12] = &PTR_LAB_008ad178;
  param_1[0x14] = &PTR_LAB_008ad0d0;
  param_1[0x16] = &PTR_LAB_008ad0cc;
  param_1[0x18] = &PTR_LAB_008ad094;
  param_1[0x19] = &PTR_FUN_008ad090;
  param_1[0x1a] = &PTR_LAB_008ad080;
  param_1[0x4c] = &PTR_LAB_008ad060;
  FUN_006b7d80();
  return;
}

