/* speed.exe 005e84d0 FUN_005e84d0; analysis pseudocode, not buildable source.
 * calls 005e8300 FUN_005e8300
 */

void __fastcall FUN_005e84d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x5f] = 0;
  param_1[99] = 0;
  param_1[3] = 0xffffffff;
  param_1[0x5c] = DAT_008a2fb4;
  param_1[0x5d] = DAT_008a2fb8;
  param_1[0x5e] = DAT_008a2fbc;
  param_1[0x60] = DAT_008a2fb4;
  param_1[0x61] = DAT_008a2fb8;
  param_1[0x62] = DAT_008a2fbc;
  FUN_005e8300();
  return;
}

