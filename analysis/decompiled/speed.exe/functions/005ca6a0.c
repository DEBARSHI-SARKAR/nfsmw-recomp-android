/* speed.exe 005ca6a0 FUN_005ca6a0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005ca6a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *param_1 + -1;
  iVar2 = -1;
  if (-1 < iVar3) {
    do {
      iVar2 = iVar3 + iVar4 >> 1;
      iVar1 = *(int *)(param_1[3] + iVar2 * 8);
      if (iVar1 < param_2) {
        iVar4 = iVar2 + 1;
      }
      else {
        if (iVar1 <= param_2) {
          return iVar2;
        }
        iVar3 = iVar2 + -1;
      }
    } while (iVar4 <= iVar3);
  }
  if (param_2 != *(int *)(param_1[3] + iVar2 * 8)) {
    iVar2 = -1;
  }
  return iVar2;
}

