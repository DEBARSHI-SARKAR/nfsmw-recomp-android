/* speed.exe 006b8600 FUN_006b8600; analysis pseudocode, not buildable source.
 * calls 006b7d80 FUN_006b7d80
 */

void __fastcall FUN_006b8600(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008ad008;
  param_1[2] = &PTR_LAB_008acffc;
  param_1[0x12] = &PTR_LAB_008acf50;
  param_1[0x14] = &PTR_LAB_008acea8;
  param_1[0x16] = &PTR_LAB_008acea4;
  param_1[0x18] = &PTR_LAB_008ace6c;
  param_1[0x19] = &PTR_FUN_008ace68;
  param_1[0x1a] = &PTR_LAB_008ace58;
  param_1[0x4c] = &PTR_LAB_008ace38;
  FUN_006b7d80();
  return;
}

