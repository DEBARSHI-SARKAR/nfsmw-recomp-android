/* speed.exe 0064cf20 FUN_0064cf20; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00460c50 FUN_00460c50
 */

void FUN_0064cf20(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte local_a0 [160];
  
  iVar1 = FUN_00460c50();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      bVar2 = *(byte *)(param_1 + iVar3);
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 & 0x5f;
      }
      if (bVar2 == 0x2f) {
        bVar2 = 0x5c;
      }
      local_a0[iVar3] = bVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  local_a0[iVar3] = 0;
  FUN_00460bf0();
  return;
}

