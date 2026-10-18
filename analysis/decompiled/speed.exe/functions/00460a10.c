/* speed.exe 00460a10 FUN_00460a10; analysis pseudocode, not buildable source.
 */

int FUN_00460a10(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = &DAT_0090de48;
  while (((*pcVar2 != '\0' || ((&DAT_0090df10)[iVar1] != 0)) || (*(int *)(pcVar2 + 8) != 0))) {
    pcVar2 = pcVar2 + 0xc;
    iVar1 = iVar1 + 1;
    if (0x90df07 < (int)pcVar2) {
      return -1;
    }
  }
  return iVar1;
}

