/* speed.exe 00620b40 FUN_00620b40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00620b40(int param_1,float *param_2)

{
  *param_2 = (float)(int)*(short *)(param_1 + 8) * _DAT_00890d60;
  param_2[1] = (float)(int)*(short *)(param_1 + 10) * _DAT_00890d60;
  param_2[2] = (float)(int)*(short *)(param_1 + 0xc) * _DAT_00890d60;
  return;
}

