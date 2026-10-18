/* speed.exe 006684d0 FUN_006684d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006684d0(int param_1,float *param_2)

{
  *param_2 = (float)(int)*(short *)(param_1 + 0x18) * _DAT_00890d60;
  param_2[1] = (float)(int)*(short *)(param_1 + 0x1a) * _DAT_00890d60;
  param_2[2] = (float)(int)*(short *)(param_1 + 0x1c) * _DAT_00890d60;
  return;
}

