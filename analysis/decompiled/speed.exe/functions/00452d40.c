/* speed.exe 00452d40 FUN_00452d40; analysis pseudocode, not buildable source.
 */

undefined2 __fastcall FUN_00452d40(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(iVar2 + 0xb) >> 4 & 1;
  if ((bVar1 == 0) && (*(int *)(iVar2 + 4) == iVar2)) {
    return 0;
  }
  if ((*(byte *)(iVar2 + 0xb) & 2) != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    if (bVar1 != 0) {
      iVar2 = iVar2 + *(int *)(*param_1 + 8);
    }
    return *(undefined2 *)(iVar2 + 2);
  }
  return 1;
}

