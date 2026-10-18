/* speed.exe 00627320 FUN_00627320; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00627320(uint *param_1)

{
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_1[2] * *param_1;
  *param_1 = param_1[2] * *param_1 & 0xffff;
  return param_1[1] >> 8 & 0xffff;
}

