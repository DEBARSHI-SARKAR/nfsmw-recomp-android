/* speed.exe 0080037d FUN_0080037d; analysis pseudocode, not buildable source.
 */

void FUN_0080037d(byte *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 * (uint)param_1[1] >> 8;
  *param_2 = param_1[2] * uVar1 >> 8;
  param_2[1] = (0xff - (uint)param_1[2]) * uVar1 >> 8;
  uVar1 = (0xff - (uint)param_1[1]) * (uint)*param_1 >> 8;
  param_2[2] = param_1[3] * uVar1 >> 8;
  param_2[3] = (0xff - (uint)param_1[3]) * uVar1 >> 8;
  uVar1 = ((0xff - (uint)*param_1) * (uint)param_1[4] >> 8) * (uint)param_1[5] >> 8;
  param_2[4] = param_1[6] * uVar1 >> 8;
  param_2[5] = (0xff - (uint)param_1[6]) * uVar1 >> 8;
  uVar1 = ((0xff - (uint)*param_1) * (uint)param_1[4] >> 8) * (0xff - (uint)param_1[5]) >> 8;
  param_2[6] = param_1[7] * uVar1 >> 8;
  param_2[7] = (0xff - (uint)param_1[7]) * uVar1 >> 8;
  param_2[8] = (0xff - (uint)*param_1) * (0xff - (uint)param_1[4]) >> 8;
  return;
}

