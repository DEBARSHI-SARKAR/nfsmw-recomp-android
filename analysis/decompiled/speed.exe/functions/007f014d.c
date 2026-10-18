/* speed.exe 007f014d FUN_007f014d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000021 GetLogicalDrives
 * calls 007f0df9 FUN_007f0df9
 */

int FUN_007f014d(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DVar1 = GetLogicalDrives();
  FUN_007f0df9(&DAT_009bb1a0,0x68);
  iVar2 = 0;
  do {
    if ((DVar1 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
      (&DAT_009bb1a0)[iVar3] = (&PTR_DAT_00907740)[iVar2];
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  return iVar3;
}

