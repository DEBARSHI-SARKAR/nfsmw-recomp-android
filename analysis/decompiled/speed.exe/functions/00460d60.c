/* speed.exe 00460d60 FUN_00460d60; analysis pseudocode, not buildable source.
 */

int FUN_00460d60(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    return -(uint)(param_2 != (char *)0x0);
  }
  if (param_2 != (char *)0x0) {
    do {
      iVar3 = param_3 + -1;
      if (((param_3 == 0) || (cVar1 = *param_1, cVar1 == '\0')) || (cVar2 = *param_2, cVar2 == '\0')
         ) break;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      param_3 = iVar3;
    } while (cVar1 == cVar2);
    if (iVar3 < 0) {
      return 0;
    }
    if (*param_1 == '\0') {
      if (*param_2 == '\0') {
        return (int)param_1[-1] - (int)param_2[-1];
      }
      return -1;
    }
  }
  return 1;
}

