/* speed.exe 005afc80 FUN_005afc80; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005afc80(short *param_1)

{
  char cVar1;
  short sVar2;
  char cVar3;
  char *in_EAX;
  char cVar4;
  
  while( true ) {
    sVar2 = *param_1;
    if ((sVar2 < -0x80) || (0x7e < sVar2)) {
      return (int)*in_EAX - (int)*param_1;
    }
    cVar1 = *in_EAX;
    cVar4 = cVar1;
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar4 = cVar1 + -0x20;
    }
    cVar3 = (char)*param_1;
    if (('`' < cVar3) && (cVar3 < '{')) {
      cVar3 = cVar3 + -0x20;
    }
    if ((int)cVar4 - (int)cVar3 != 0) break;
    param_1 = param_1 + 1;
    if ((sVar2 == 0) || (in_EAX = in_EAX + 1, cVar1 == '\0')) {
      return 0;
    }
  }
  return (int)cVar4 - (int)cVar3;
}

