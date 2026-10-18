/* speed.exe 00668520 FUN_00668520; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00668520(int param_1,float *param_2)

{
  *param_2 = (float)(int)*(short *)(param_1 + 0x10) * _DAT_00890d60;
  param_2[1] = (float)(int)*(short *)(param_1 + 0x12) * _DAT_00890d60;
  param_2[2] = (float)(int)*(short *)(param_1 + 0x14) * _DAT_00890d60;
  return;
}

