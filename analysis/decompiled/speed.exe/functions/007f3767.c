/* speed.exe 007f3767 FUN_007f3767; analysis pseudocode, not buildable source.
 * calls 007f36f5 FUN_007f36f5
 * calls 007f369d FUN_007f369d
 * calls 0085d930 _strtok
 */

void FUN_007f3767(void)

{
  char *pcVar1;
  int iVar2;
  char local_108 [256];
  undefined2 local_8;
  undefined1 uStack_6;
  
  local_8 = DAT_008c24a8;
  uStack_6 = DAT_008c24aa;
  FUN_007f369d(0x100);
  pcVar1 = _strtok(local_108,(char *)&local_8);
  while (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '-') {
      iVar2 = FUN_007f36f5(pcVar1 + 1);
      if (-1 < iVar2) {
        (&DAT_009081e8)[iVar2 * 0xc] = 0;
      }
    }
    else {
      iVar2 = FUN_007f36f5(pcVar1);
      if (-1 < iVar2) {
        (&DAT_009081e8)[iVar2 * 0xc] = 1;
      }
    }
    pcVar1 = _strtok((char *)0x0,(char *)&local_8);
  }
  return;
}

