/* speed.exe 00568bd0 FUN_00568bd0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00568bd0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar4 = 0;
  if (0 < iVar2) {
    pcVar3 = (char *)(param_1 + 0x60);
    iVar5 = iVar2;
    do {
      if (*pcVar3 == '\0') {
        iVar4 = iVar4 + 1;
      }
      pcVar3 = pcVar3 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (1 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x44) + 1;
      if (iVar2 <= iVar4) {
        iVar4 = 0;
      }
      cVar1 = *(char *)(param_1 + (iVar4 * 3 + 0xc) * 8);
      while (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
        if (iVar2 <= iVar4) {
          iVar4 = 0;
        }
        cVar1 = *(char *)(param_1 + (iVar4 * 3 + 0xc) * 8);
      }
    }
  }
  return;
}

