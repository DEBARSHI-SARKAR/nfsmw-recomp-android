/* speed.exe 005e7670 FUN_005e7670; analysis pseudocode, not buildable source.
 * calls 005e1970 FUN_005e1970
 */

int * __thiscall FUN_005e7670(int *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  iVar1 = DAT_0091dfe4;
  bVar2 = DAT_0091dfe4 != 0;
  *param_1 = DAT_0091dfe4;
  if ((bVar2) && ((param_2 & *(ushort *)(iVar1 + 0x18)) == 0)) {
    FUN_005e1970();
  }
  return param_1;
}

