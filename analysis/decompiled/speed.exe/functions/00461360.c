/* speed.exe 00461360 FUN_00461360; analysis pseudocode, not buildable source.
 * calls 00460e30 FUN_00460e30
 */

char * FUN_00461360(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      iVar2 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar1 = param_2[iVar2];
    }
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    iVar2 = FUN_00460e30(param_1,param_2,iVar3);
    if (iVar2 == 0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

