/* speed.exe 0078c8e0 FUN_0078c8e0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0078c8e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x110);
  do {
    if (*pcVar2 == '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x161;
  } while (iVar1 < 6);
  return -1;
}

