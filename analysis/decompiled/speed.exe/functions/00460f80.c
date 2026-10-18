/* speed.exe 00460f80 FUN_00460f80; analysis pseudocode, not buildable source.
 */

int FUN_00460f80(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  cVar1 = *param_1;
  if ((cVar1 == '0') && (param_1[1] == 'x')) {
    bVar5 = param_1[2];
    param_1 = param_1 + 2;
    iVar4 = 0;
    if (bVar5 == 0) {
      return 0;
    }
    do {
      if (((char)bVar5 < '0') || ('9' < (char)bVar5)) {
        if (('`' < (char)bVar5) && ((char)bVar5 < '{')) {
          bVar5 = bVar5 & 0x5f;
        }
        if ((char)bVar5 < 'A') {
          return iVar4;
        }
        if ('F' < (char)bVar5) {
          return iVar4;
        }
        iVar6 = (char)bVar5 + -0x37;
      }
      else {
        iVar6 = (char)bVar5 + -0x30;
      }
      iVar4 = iVar4 * 0x10 + iVar6;
      bVar5 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar5 == 0) {
        return iVar4;
      }
    } while( true );
  }
  bVar2 = false;
  if (cVar1 == '-') {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (cVar1 != '+') goto LAB_00460fed;
  }
  bVar2 = bVar3;
  param_1 = param_1 + 1;
LAB_00460fed:
  iVar4 = 0;
  cVar1 = *param_1;
  while (((cVar1 != '\0' && ('/' < cVar1)) && (cVar1 < ':'))) {
    param_1 = param_1 + 1;
    iVar4 = cVar1 + -0x30 + iVar4 * 10;
    cVar1 = *param_1;
  }
  if (bVar2) {
    iVar4 = -iVar4;
  }
  return iVar4;
}

