/* speed.exe 005e7440 FUN_005e7440; analysis pseudocode, not buildable source.
 * calls 005e1700 FUN_005e1700
 */

int * __thiscall FUN_005e7440(int *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  iVar1 = DAT_0091dfec;
  bVar2 = DAT_0091dfec != 0;
  *param_1 = DAT_0091dfec;
  if ((bVar2) && ((param_2 & *(ushort *)(iVar1 + 0x18)) == 0)) {
    FUN_005e1700();
  }
  return param_1;
}

