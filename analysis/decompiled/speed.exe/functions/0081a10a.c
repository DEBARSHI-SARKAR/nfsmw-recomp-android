/* speed.exe 0081a10a FUN_0081a10a; analysis pseudocode, not buildable source.
 * calls 0081f264 FUN_0081f264
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081a10a(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  *(char *)(param_1 * 0x90 + 0x60 + DAT_009c21f4) = (char)((uint)param_2 >> 8);
  iVar1 = param_1 * 0x90 + DAT_009c21f4;
  **(float **)(iVar1 + 100) = (float)(int)*(char *)(iVar1 + 0x60) * _DAT_00890bf0;
  FUN_0081f264(param_1,0);
  return;
}

