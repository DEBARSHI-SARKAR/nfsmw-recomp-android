/* speed.exe 0083dd50 FUN_0083dd50; analysis pseudocode, not buildable source.
 */

int FUN_0083dd50(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    bVar2 = param_1[iVar3];
    if ((char)bVar2 < '\0') {
      if ((bVar2 & 0xe0) == 0xc0) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = iVar3 + ((bVar2 & 0xf0) != 0xe0) + 3;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
    cVar1 = param_1[iVar3];
  }
  return iVar4;
}

