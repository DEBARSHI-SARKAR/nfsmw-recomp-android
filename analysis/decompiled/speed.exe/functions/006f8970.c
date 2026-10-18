/* speed.exe 006f8970 FUN_006f8970; analysis pseudocode, not buildable source.
 * calls 006f8790 FUN_006f8790
 */

void __fastcall FUN_006f8970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008b0a50;
  param_1[2] = &PTR_LAB_008b0a48;
  param_1[0xb] = &PTR_LAB_008b0a34;
  param_1[0xe] = &PTR_LAB_008b0a18;
  param_1[0x12] = &PTR_LAB_008b0a10;
  param_1[0x14] = &PTR_LAB_008b0a04;
  param_1[0x16] = &PTR_LAB_008b09f4;
  param_1[0x18] = &PTR_LAB_008b09e8;
  FUN_006f8790();
  return;
}

