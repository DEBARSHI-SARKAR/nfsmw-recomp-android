/* speed.exe 00511d90 FUN_00511d90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00511d90(int param_1,float *param_2)

{
  *param_2 = (*param_2 - *(float *)(*(int *)(param_1 + 0x13c) + 0xac)) /
             *(float *)(*(int *)(param_1 + 0x13c) + 0xb4);
  param_2[1] = (*(float *)(*(int *)(param_1 + 0x13c) + 0xb0) - param_2[1]) /
               *(float *)(*(int *)(param_1 + 0x13c) + 0xb4) + _DAT_0089096c;
  *param_2 = *(float *)(param_1 + 0x14c) * *param_2 + *(float *)(param_1 + 0x144);
  param_2[1] = *(float *)(param_1 + 0x150) * param_2[1] + *(float *)(param_1 + 0x148);
  return;
}

