/* speed.exe 00404390 FUN_00404390; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00404390(int param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  
  cVar1 = *(char *)(param_1 + 0x14);
  cVar2 = *(char *)(param_1 + 0x15);
  fVar3 = (float)*(ushort *)(param_1 + 0xe) * _DAT_008eb344 * _DAT_00890bf0;
  *param_2 = (float)(int)*(char *)(param_1 + 0x13) * fVar3;
  param_2[1] = (float)(int)cVar1 * fVar3;
  param_2[2] = (float)(int)cVar2 * fVar3;
  return;
}

