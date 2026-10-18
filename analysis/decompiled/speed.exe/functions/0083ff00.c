/* speed.exe 0083ff00 FUN_0083ff00; analysis pseudocode, not buildable source.
 * calls 0083fed0 FUN_0083fed0
 * calls 0083cd40 FUN_0083cd40
 * calls 0084bcb0 GetTickCount
 */

void FUN_0083ff00(void)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_0083cd40(0x6f70656e,0,0);
  if (iVar1 != 0) {
    DVar2 = GetTickCount();
    if (DVar2 < DAT_009c36d0) {
      return;
    }
    DVar2 = GetTickCount();
    DAT_009c36d0 = DVar2 + 5;
  }
  FUN_0083fed0();
  return;
}

