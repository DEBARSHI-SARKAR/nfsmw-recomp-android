/* speed.exe 005e7470 FUN_005e7470; analysis pseudocode, not buildable source.
 * calls 005e1780 FUN_005e1780
 */

int * __thiscall FUN_005e7470(int *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  iVar1 = DAT_0091dff8;
  bVar2 = DAT_0091dff8 != 0;
  *param_1 = DAT_0091dff8;
  if ((bVar2) && ((param_2 & *(ushort *)(iVar1 + 0x18)) == 0)) {
    FUN_005e1780();
  }
  return param_1;
}

