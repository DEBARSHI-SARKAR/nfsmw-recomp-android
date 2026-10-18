/* speed.exe 00764ad0 FUN_00764ad0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00764ad0(int param_1,int param_2,float *param_3)

{
  char cVar1;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_1 + 0x15);
    *param_3 = (float)(int)*(char *)(param_1 + 0x13) * _DAT_00890bf0;
    param_3[1] = (float)(int)cVar1 * _DAT_00890bf0;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  *param_3 = (float)(int)*(char *)(param_1 + 0x10) * _DAT_008b5b30;
  param_3[1] = (float)(int)cVar1 * _DAT_008b5b30;
  return;
}

