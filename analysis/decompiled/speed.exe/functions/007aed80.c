/* speed.exe 007aed80 FUN_007aed80; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00575b00 FUN_00575b00
 */

int __thiscall FUN_007aed80(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1b4) + -4;
  }
  do {
    if (param_1 == -0x1b4) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x1b0;
    }
    if (iVar4 == iVar2) {
      return iVar3;
    }
    if (*(char *)(iVar4 + 0x14) != '\0') {
      if ((param_2 == 0) || (param_2 == 2)) {
        if (*(char *)(*(int *)(iVar4 + 0xc) + 0x1c) == '\0') {
          switch(*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10)) {
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x72:
          case 0x85:
          case 0x86:
          case 0x87:
            goto switchD_007aedfc_caseD_4f;
          default:
            cVar1 = FUN_00575b00();
            if (cVar1 == '\0') {
              iVar2 = *(int *)(*(int *)(iVar4 + 0xc) + 0x24);
            }
            else {
              iVar2 = 1;
            }
          }
        }
        else {
          cVar1 = FUN_00575b00();
          if (cVar1 == '\0') {
            iVar2 = *(int *)(*(int *)(iVar4 + 0xc) + 0x24);
          }
          else {
            iVar2 = 1;
          }
        }
        iVar3 = iVar3 + iVar2;
      }
switchD_007aedfc_caseD_4f:
      if ((param_2 == 1) || ((param_2 == 2 && (cVar1 = FUN_00575b00(), cVar1 == '\0')))) {
        if (*(int *)(iVar4 + 0x10) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_007c4b80();
        }
        iVar3 = iVar3 - iVar2;
      }
    }
    if (*(int *)(iVar4 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + -4;
    }
  } while( true );
}

