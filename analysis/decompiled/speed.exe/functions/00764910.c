/* speed.exe 00764910 FUN_00764910; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00764910(int param_1,float *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x12);
  *param_2 = (float)(int)*(char *)(param_1 + 0x10) * _DAT_008b5b30;
  param_2[1] = (float)(int)cVar1 * _DAT_008b5b30;
  return;
}

