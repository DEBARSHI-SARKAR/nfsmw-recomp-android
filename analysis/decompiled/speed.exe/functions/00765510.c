/* speed.exe 00765510 FUN_00765510; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00765510(int param_1,float *param_2,float *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  *param_3 = (float)(int)*(char *)(param_1 + 0x12) * _DAT_008b5b30;
  param_3[1] = 0.0;
  param_3[2] = (float)(int)cVar1 * _DAT_00890bf0;
  cVar1 = *(char *)(param_1 + 0x13);
  *param_2 = (float)(int)*(char *)(param_1 + 0x15) * _DAT_00890bf0;
  param_2[1] = 0.0;
  param_2[2] = (float)(int)cVar1 * _DAT_008b5b30;
  return;
}

