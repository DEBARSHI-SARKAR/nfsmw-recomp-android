/* speed.exe 0064af20 FUN_0064af20; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int __thiscall FUN_0064af20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      iVar1 = FUN_00460d20(param_2,*piVar3 + *(int *)(param_1 + 8) + param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return -1;
}

