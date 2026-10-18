/* speed.exe 005afcf0 FUN_005afcf0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005afcf0(short *param_1)

{
  short sVar1;
  char cVar2;
  char *in_EAX;
  char cVar3;
  
  while( true ) {
    sVar1 = *param_1;
    if ((sVar1 < -0x80) || (0x7e < sVar1)) {
      if (*in_EAX == '\0') {
        return 0;
      }
      return (int)*in_EAX - (int)*param_1;
    }
    cVar3 = *in_EAX;
    if (cVar3 == '\0') {
      return 0;
    }
    if (('`' < cVar3) && (cVar3 < '{')) {
      cVar3 = cVar3 + -0x20;
    }
    cVar2 = (char)*param_1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    if ((int)cVar3 - (int)cVar2 != 0) break;
    param_1 = param_1 + 1;
    if (sVar1 == 0) {
      return 0;
    }
    in_EAX = in_EAX + 1;
  }
  return (int)cVar3 - (int)cVar2;
}

