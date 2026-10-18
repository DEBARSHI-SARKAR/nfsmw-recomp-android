/* speed.exe 00762640 FUN_00762640; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00762640(int param_1,int param_2,float *param_3,float *param_4)

{
  *param_4 = param_4[4];
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[4] = param_4[8];
  param_4[5] = param_4[9];
  param_4[6] = param_4[10];
  param_4[8] = (float)(int)*(short *)(param_1 + 0x10 + param_2 * 8) * _DAT_00905cf4 + *param_3;
  param_4[9] = (float)(int)*(short *)(param_1 + 0x12 + param_2 * 8) * _DAT_00905cf4 + param_3[1];
  param_4[10] = (float)(int)*(short *)(param_1 + 0x14 + param_2 * 8) * _DAT_00905cf4 + param_3[2];
  *(undefined2 *)(param_4 + 0xb) = *(undefined2 *)(param_1 + 0x16 + param_2 * 8);
  return;
}

