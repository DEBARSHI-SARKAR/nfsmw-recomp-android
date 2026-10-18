/* speed.exe 0084fd30 FUN_0084fd30; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084b110 FUN_0084b110
 */

int FUN_0084fd30(void)

{
  int *in_EAX;
  int iVar1;
  DWORD DVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar3 = *in_EAX + 8;
  iVar1 = FUN_0084b110(*(undefined4 *)(unaff_ESI + 0x80),in_EAX + 2,iVar3,0,unaff_ESI + 0x84,0x10);
  if (iVar1 == iVar3) {
    DVar2 = GetTickCount();
    *(DWORD *)(unaff_ESI + 0xe4) = DVar2;
    *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + iVar3;
    *(int *)(unaff_ESI + 100) = *(int *)(unaff_ESI + 100) + 1;
    if (0xff < (uint)in_EAX[2]) {
      *(undefined4 *)(unaff_ESI + 0xbc) = 0;
      return iVar1;
    }
  }
  else {
    *(int *)(unaff_ESI + 0xe0) = iVar1;
    iVar1 = -1;
  }
  return iVar1;
}

