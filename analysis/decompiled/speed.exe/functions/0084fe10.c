/* speed.exe 0084fe10 FUN_0084fe10; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084fbf0 FUN_0084fbf0
 * calls 0084fd30 FUN_0084fd30
 */

void FUN_0084fe10(void)

{
  int iVar1;
  int in_EAX;
  DWORD DVar2;
  int *unaff_EDI;
  bool bVar3;
  
  if (*unaff_EDI != 0) {
    return;
  }
  if (unaff_EDI[3] == *(int *)(in_EAX + 0x98)) {
    DVar2 = GetTickCount();
    *(DWORD *)(in_EAX + 0xe8) = DVar2 - 1000;
    iVar1 = unaff_EDI[2];
    if (iVar1 == 1) {
      FUN_0084fbf0();
      unaff_EDI[2] = 2;
      FUN_0084fd30();
      return;
    }
    if (iVar1 == 2) {
      if (*(int *)(in_EAX + 0x94) != 2) {
        return;
      }
      FUN_0084fbf0();
      *(undefined4 *)(in_EAX + 0x94) = 4;
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    bVar3 = *(int *)(in_EAX + 0x94) == 4;
  }
  else {
    bVar3 = unaff_EDI[2] == 1;
  }
  if (bVar3) {
    *(undefined4 *)(in_EAX + 0x94) = 5;
  }
  return;
}

