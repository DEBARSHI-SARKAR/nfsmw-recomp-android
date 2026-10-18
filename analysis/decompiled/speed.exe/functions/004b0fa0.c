/* speed.exe 004b0fa0 FUN_004b0fa0; analysis pseudocode, not buildable source.
 * calls 006539a0 FUN_006539a0
 */

undefined4 * __fastcall FUN_004b0fa0(undefined4 *param_1)

{
  FUN_006539a0();
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0xbf800000;
  param_1[0x11] = 0xbf800000;
  param_1[0x12] = 0xbf800000;
  param_1[4] = 0x3f800000;
  return param_1;
}

