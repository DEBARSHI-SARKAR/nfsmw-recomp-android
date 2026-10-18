/* speed.exe 00712b70 FUN_00712b70; analysis pseudocode, not buildable source.
 * calls 0070fb20 FUN_0070fb20
 * calls 00705ef0 FUN_00705ef0
 */

void __thiscall FUN_00712b70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    for (puVar2 = (undefined4 *)**(undefined4 **)(iVar1 + 4); puVar2 != *(undefined4 **)(iVar1 + 4);
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] == param_2) {
        return;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
    iVar3 = FUN_00705ef0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
    FUN_0070fb20(1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return;
}

