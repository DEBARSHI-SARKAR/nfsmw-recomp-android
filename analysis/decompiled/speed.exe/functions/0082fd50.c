/* speed.exe 0082fd50 FUN_0082fd50; analysis pseudocode, not buildable source.
 */

int FUN_0082fd50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x20))(0);
  while (-1 < iVar1) {
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + 1;
    iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x20))(iVar2);
  }
  return iVar3;
}

