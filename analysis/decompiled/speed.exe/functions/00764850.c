/* speed.exe 00764850 FUN_00764850; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00764850(int param_1,float *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  *param_2 = (float)(int)*(char *)(param_1 + 0x12) * _DAT_008b5b30;
  param_2[1] = 0.0;
  param_2[2] = (float)(int)cVar1 * _DAT_00890bf0;
  return;
}

