/* speed.exe 00519fc0 FUN_00519fc0; analysis pseudocode, not buildable source.
 */

void FUN_00519fc0(short *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != (short *)0x0) && (param_3 != 0)) {
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      for (iVar2 = 0; (cVar1 != '\0' && (param_3 + -1 != iVar2)); iVar2 = iVar2 + 1) {
        *param_1 = (short)cVar1;
        cVar1 = param_2[1];
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
    }
    *param_1 = 0;
  }
  return;
}

