/* speed.exe 007f364c FUN_007f364c; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_007f364c(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (*param_1 != '\0') {
    param_2 = param_2 - (int)param_1;
    do {
      cVar1 = param_1[param_2];
      if (cVar1 == '\0') {
        return iVar3;
      }
      cVar2 = *param_1;
      if ((cVar2 < 'A') || ('Z' < cVar2)) {
        iVar5 = (int)cVar2;
      }
      else {
        iVar5 = cVar2 + 0x20;
      }
      if ((cVar1 < 'A') || ('Z' < cVar1)) {
        iVar4 = (int)cVar1;
      }
      else {
        iVar4 = cVar1 + 0x20;
      }
      if (iVar5 != iVar4) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
  }
  return iVar3;
}

