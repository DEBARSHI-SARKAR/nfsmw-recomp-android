/* speed.exe 0084ee80 FUN_0084ee80; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084ed50 FUN_0084ed50
 * calls 0084ec30 FUN_0084ec30
 */

void FUN_0084ee80(int param_1)

{
  int in_EAX;
  DWORD DVar1;
  undefined4 *unaff_EDI;
  
  DVar1 = GetTickCount();
  *(DWORD *)(in_EAX + 0xcc) = DVar1 - 1000;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0x10:
    if (*(int *)(in_EAX + 0x94) == 2) {
      *(undefined4 *)(in_EAX + 0x84) = *unaff_EDI;
      *(undefined4 *)(in_EAX + 0x88) = unaff_EDI[1];
      *(undefined4 *)(in_EAX + 0x8c) = unaff_EDI[2];
      *(undefined4 *)(in_EAX + 0x90) = unaff_EDI[3];
      FUN_0084ec30();
      *(undefined4 *)(in_EAX + 0x94) = 3;
    }
    FUN_0084ed50(0x12);
    return;
  case 0x11:
    if (*(int *)(in_EAX + 0x94) == 1) {
      *(undefined4 *)(in_EAX + 0x84) = *unaff_EDI;
      *(undefined4 *)(in_EAX + 0x88) = unaff_EDI[1];
      *(undefined4 *)(in_EAX + 0x8c) = unaff_EDI[2];
      *(undefined4 *)(in_EAX + 0x90) = unaff_EDI[3];
      return;
    }
    break;
  case 0x12:
    if (*(int *)(in_EAX + 0x94) == 1) {
      FUN_0084ec30();
      *(undefined4 *)(in_EAX + 0x94) = 3;
      return;
    }
    break;
  case 0x14:
    if (*(int *)(in_EAX + 0x94) == 3) {
      *(undefined4 *)(in_EAX + 0x94) = 4;
    }
  }
  return;
}

