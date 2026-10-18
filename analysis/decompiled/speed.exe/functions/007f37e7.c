/* speed.exe 007f37e7 FUN_007f37e7; analysis pseudocode, not buildable source.
 * calls 007f369d FUN_007f369d
 * calls 007f3611 FUN_007f3611
 * calls 0085d930 _strtok
 * calls 007f3732 FUN_007f3732
 */

void FUN_007f37e7(void)

{
  char *pcVar1;
  int iVar2;
  char local_108 [256];
  undefined4 local_8;
  
  local_8 = 0x3b2c20;
  FUN_007f369d(0x100);
  pcVar1 = _strtok(local_108,(char *)&local_8);
  while (pcVar1 != (char *)0x0) {
    if ((*pcVar1 == '-') || (*pcVar1 == '!')) {
      iVar2 = FUN_007f3732(pcVar1 + 1);
    }
    else {
      iVar2 = FUN_007f3732(pcVar1);
    }
    if (-1 < iVar2) {
      FUN_007f3611();
    }
    pcVar1 = _strtok((char *)0x0,(char *)&local_8);
  }
  return;
}

