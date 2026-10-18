/* speed.exe 005d5080 FUN_005d5080; analysis pseudocode, not buildable source.
 * calls 005d3a40 FUN_005d3a40
 */

void FUN_005d5080(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    piVar1 = *(int **)(param_1 + -4 + iVar2 * 4);
    iVar2 = iVar2 + -1;
    *piVar1 = *piVar1 + 1;
    FUN_005d3a40(param_1,iVar2,iVar3);
  }
  return;
}

