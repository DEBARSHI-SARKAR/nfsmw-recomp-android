/* speed.exe 005e7410 FUN_005e7410; analysis pseudocode, not buildable source.
 * calls 005e16c0 FUN_005e16c0
 */

int * __thiscall FUN_005e7410(int *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  iVar1 = DAT_0091dff4;
  bVar2 = DAT_0091dff4 != 0;
  *param_1 = DAT_0091dff4;
  if ((bVar2) && ((param_2 & *(ushort *)(iVar1 + 0x18)) == 0)) {
    FUN_005e16c0();
  }
  return param_1;
}

