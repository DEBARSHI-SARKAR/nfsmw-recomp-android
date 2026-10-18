/* speed.exe 00825b6e FUN_00825b6e; analysis pseudocode, not buildable source.
 * calls 00825b1c FUN_00825b1c
 * calls 00825b46 FUN_00825b46
 * calls EXTERNAL:00000020 GetVersionExA
 */

uint FUN_00825b6e(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _OSVERSIONINFOA local_a8;
  int local_14 [3];
  byte local_5;
  
  local_a8.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_a8);
  uVar2 = 1;
  uVar3 = 0;
  if ((local_a8.dwPlatformId == 1) && (local_a8.dwMinorVersion == 0)) {
    uVar3 = uVar2;
  }
  iVar1 = FUN_00825b1c();
  if (iVar1 != 0) {
    FUN_00825b46(local_14,0);
    if (local_14[0] != 0) {
      FUN_00825b46(local_14,1);
      if (((local_5 & 2) != 0) && (uVar3 == 0)) {
        uVar2 = 3;
      }
      FUN_00825b46(local_14,0x80000001);
      if ((local_5 & 0x80) != 0) {
        uVar2 = uVar2 | 4;
      }
    }
  }
  return uVar2;
}

