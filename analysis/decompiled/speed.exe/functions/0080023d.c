/* speed.exe 0080023d FUN_0080023d; analysis pseudocode, not buildable source.
 */

void FUN_0080023d(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  param_2[0xb] = (uint)*param_1 * (uint)param_1[1] >> 8;
  *param_2 = (0xff - (uint)param_1[1]) * (uint)*param_1 >> 8;
  bVar1 = *param_1;
  param_2[1] = (uint)param_1[2] * (0xff - (uint)bVar1) >> 8;
  uVar3 = (0xff - (uint)param_1[2]) * (0xff - (uint)bVar1) >> 8;
  uVar2 = param_1[3] * uVar3 >> 8;
  param_2[2] = param_1[4] * uVar2 >> 8;
  uVar2 = (0xff - (uint)param_1[4]) * uVar2 >> 8;
  param_2[3] = param_1[5] * uVar2 >> 8;
  param_2[4] = (0xff - (uint)param_1[5]) * uVar2 >> 8;
  uVar3 = (0xff - (uint)param_1[3]) * uVar3 >> 8;
  uVar2 = param_1[6] * uVar3 >> 8;
  param_2[5] = param_1[7] * uVar2 >> 8;
  param_2[6] = (0xff - (uint)param_1[7]) * uVar2 >> 8;
  uVar3 = (0xff - (uint)param_1[6]) * uVar3 >> 8;
  uVar2 = param_1[8] * uVar3 >> 8;
  param_2[7] = param_1[9] * uVar2 >> 8;
  param_2[8] = (0xff - (uint)param_1[9]) * uVar2 >> 8;
  uVar2 = (0xff - (uint)param_1[8]) * uVar3 >> 8;
  param_2[9] = param_1[10] * uVar2 >> 8;
  param_2[10] = (0xff - (uint)param_1[10]) * uVar2 >> 8;
  return;
}

