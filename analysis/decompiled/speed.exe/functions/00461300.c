/* speed.exe 00461300 FUN_00461300; analysis pseudocode, not buildable source.
 * calls 00460d60 FUN_00460d60
 */

char * FUN_00461300(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      iVar3 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_2[iVar3];
    }
  }
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    cVar1 = *param_2;
    do {
      if ((cVar2 == cVar1) && (iVar3 = FUN_00460d60(param_1,param_2,iVar4), iVar3 == 0)) {
        return param_1;
      }
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  return (char *)0x0;
}

