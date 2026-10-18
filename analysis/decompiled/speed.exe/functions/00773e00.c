/* speed.exe 00773e00 FUN_00773e00; analysis pseudocode, not buildable source.
 * calls 006e9c90 FUN_006e9c90
 * calls 006f82f0 FUN_006f82f0
 * calls 00771240 FUN_00771240
 * calls 00466330 FUN_00466330
 * calls 00771210 FUN_00771210
 */

void __fastcall FUN_00773e00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00881b43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5c88;
  param_1[2] = &PTR_LAB_008b5c80;
  param_1[0xb] = &PTR_LAB_008b5c6c;
  param_1[0xe] = &PTR_LAB_008b5c50;
  local_4 = 1;
  FUN_00771240();
  FUN_00466330(DAT_009b38f0);
  FUN_00466330(DAT_009b38ec);
  DAT_009b38f0 = 0;
  DAT_009b38ec = 0;
  FUN_006e9c90(param_1[0x12]);
  DAT_009b38fc = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00771210();
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

