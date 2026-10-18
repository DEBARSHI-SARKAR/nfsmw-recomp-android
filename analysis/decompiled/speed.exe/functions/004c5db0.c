/* speed.exe 004c5db0 FUN_004c5db0; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 */

undefined4 * __fastcall FUN_004c5db0(undefined4 *param_1)

{
  FUN_004d61d0();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_008974f8;
  return param_1;
}

