/* speed.exe 0083a630 FUN_0083a630; analysis pseudocode, not buildable source.
 */

int FUN_0083a630(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  for (; (1 < iVar1 && (*param_3 != '\0')); param_3 = param_3 + 1) {
    *param_1 = *param_3;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  }
  if (0 < iVar1) {
    *param_1 = '\0';
  }
  return param_2 - iVar1;
}

