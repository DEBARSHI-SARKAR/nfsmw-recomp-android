/* speed.exe 006f9b10 FUN_006f9b10; analysis pseudocode, not buildable source.
 * calls 006f9800 FUN_006f9800
 */

undefined4 * __fastcall FUN_006f9b10(undefined4 *param_1)

{
  FUN_006f9800();
  *param_1 = &PTR_FUN_008b0a50;
  param_1[2] = &PTR_LAB_008b0a48;
  param_1[0xb] = &PTR_LAB_008b0a34;
  param_1[0xe] = &PTR_LAB_008b0a18;
  param_1[0x12] = &PTR_LAB_008b0a10;
  param_1[0x14] = &PTR_LAB_008b0a04;
  param_1[0x16] = &PTR_LAB_008b09f4;
  param_1[0x18] = &PTR_LAB_008b09e8;
  return param_1;
}

