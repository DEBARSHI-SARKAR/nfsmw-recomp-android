/* speed.exe 0083de40 FUN_0083de40; analysis pseudocode, not buildable source.
 * calls 0083db90 FUN_0083db90
 */

int FUN_0083de40(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *param_3;
  iVar3 = 0;
  iVar4 = 0;
  while ((cVar1 != '\0' && (iVar3 < param_2 + -1))) {
    iVar2 = FUN_0083db90();
    if (iVar2 < 4) {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + iVar2;
    cVar1 = param_3[iVar4];
  }
  *(undefined2 *)(param_1 + iVar3 * 2) = 0;
  return iVar3 + 1;
}

