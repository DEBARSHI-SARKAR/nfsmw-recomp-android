/* speed.exe 00478290 FUN_00478290; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 * calls 00460bf0 FUN_00460bf0
 */

int * __thiscall FUN_00478290(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return (int *)0x0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_0045d380(iVar5);
        if ((piVar3 != piVar1 + 1) && (piVar3 != (int *)0x0)) {
          iVar4 = FUN_00460bf0((int)piVar3 + 0xf);
          if (iVar4 == param_2) {
            return piVar3;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  return (int *)0x0;
}

