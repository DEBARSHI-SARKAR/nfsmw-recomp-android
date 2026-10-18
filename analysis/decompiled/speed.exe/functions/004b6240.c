/* speed.exe 004b6240 FUN_004b6240; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 */

undefined4 * __fastcall FUN_004b6240(undefined4 *param_1)

{
  FUN_004d61d0();
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00896e44;
  param_1[0xf] = 0;
  DAT_00911ebc = 0;
  if (param_1[10] != 0) {
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    param_1[0xc] = 0;
  }
  if (param_1[0xd] != 0) {
    param_1[0xd] = 0;
  }
  return param_1;
}

