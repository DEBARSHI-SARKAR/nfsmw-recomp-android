/* speed.exe 00460cd0 FUN_00460cd0; analysis pseudocode, not buildable source.
 */

void FUN_00460cd0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 == (char *)0x0) {
    *param_1 = 0;
    return;
  }
  if (param_3 + -1 < 1) {
    *param_1 = 0;
    return;
  }
  iVar2 = (int)param_1 - (int)param_2;
  do {
    if (*param_2 == '\0') break;
    iVar1 = iVar1 + 1;
    param_2[iVar2] = *param_2;
    param_2 = param_2 + 1;
  } while (iVar1 < param_3 + -1);
  param_1[iVar1] = 0;
  return;
}

