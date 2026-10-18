/* speed.exe 00764a10 FUN_00764a10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00764a10(int param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x14);
  cVar2 = *(char *)(param_1 + 0x15);
  *param_2 = (float)(int)*(char *)(param_1 + 0x13) * _DAT_00890bf0;
  param_2[1] = (float)(int)cVar1 * _DAT_00890bf0;
  param_2[2] = (float)(int)cVar2 * _DAT_00890bf0;
  return;
}

