/* speed.exe 007ba760 FUN_007ba760; analysis pseudocode, not buildable source.
 * calls 007aade0 FUN_007aade0
 * calls 007ba5c0 FUN_007ba5c0
 * calls 0056dbe0 FUN_0056dbe0
 */

void FUN_007ba760(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_0056dbe0(0xb);
  cVar2 = *(char *)(iVar1 + 0xd);
  if (param_1 == -1) {
    if (cVar2 == '\0') {
      cVar2 = '\x03';
    }
    else {
      cVar2 = cVar2 + -1;
    }
  }
  else if (param_1 == 1) {
    if (cVar2 == '\x03') {
      cVar2 = '\0';
    }
    else {
      cVar2 = cVar2 + '\x01';
    }
  }
  iVar1 = FUN_0056dbe0(0xb);
  *(char *)(iVar1 + 0xd) = cVar2;
  FUN_007ba5c0();
  FUN_007aade0();
  return;
}

