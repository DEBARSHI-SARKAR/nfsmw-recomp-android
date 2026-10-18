/* speed.exe 005b2d50 FUN_005b2d50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b2d50(uint *param_1,uint param_2)

{
  param_1[3] = param_2 >> 0x18;
  param_1[2] = param_2 >> 0x10 & 0xff;
  param_1[1] = param_2 >> 8 & 0xff;
  *param_1 = param_2 & 0xff;
  return;
}

