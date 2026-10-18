/* speed.exe 0084ed00 FUN_0084ed00; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084b110 FUN_0084b110
 */

int FUN_0084ed00(void)

{
  int in_EAX;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = *(int *)(in_EAX + 4) + 1;
  iVar1 = FUN_0084b110(*(undefined4 *)(unaff_EDI + 0x80),in_EAX + 8,iVar3,0,unaff_EDI + 0x84,0x10);
  if (iVar1 != iVar3) {
    return -1;
  }
  DVar2 = GetTickCount();
  *(DWORD *)(unaff_EDI + 200) = DVar2;
  *(int *)(unaff_EDI + 100) = *(int *)(unaff_EDI + 100) + 1;
  *(int *)(unaff_EDI + 0x5c) = *(int *)(unaff_EDI + 0x5c) + iVar3;
  return iVar3;
}

