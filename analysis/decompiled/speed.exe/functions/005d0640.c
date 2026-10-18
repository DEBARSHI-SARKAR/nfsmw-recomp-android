/* speed.exe 005d0640 FUN_005d0640; analysis pseudocode, not buildable source.
 * calls 005ca6a0 FUN_005ca6a0
 */

int __thiscall FUN_005d0640(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1[3];
  if (iVar2 == 0) {
    iVar2 = 0;
    if (0 < *param_1) {
      piVar3 = (int *)param_1[1];
      do {
        if (*piVar3 == param_2) {
          return ((int *)param_1[1])[iVar2 * 2 + 1];
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar2 < *param_1);
    }
    return 0;
  }
  iVar1 = FUN_005ca6a0(param_2);
  if (iVar1 == -1) {
    return 0;
  }
  return *(int *)(iVar2 + 4 + iVar1 * 8);
}

