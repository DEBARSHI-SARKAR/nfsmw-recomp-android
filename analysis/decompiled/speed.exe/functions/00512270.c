/* speed.exe 00512270 FUN_00512270; analysis pseudocode, not buildable source.
 * calls 0078d0f0 FUN_0078d0f0
 */

undefined4 * __fastcall FUN_00512270(undefined4 *param_1)

{
  FUN_0078d0f0();
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  *param_1 = &PTR_FUN_0089b230;
  param_1[0x1cc] = 10;
  return param_1;
}

