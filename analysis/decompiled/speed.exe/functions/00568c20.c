/* speed.exe 00568c20 FUN_00568c20; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00568c20(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    pcVar2 = (char *)(param_1 + 0x60);
    do {
      if (*pcVar2 == '\0') {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x40));
  }
  return 0;
}

