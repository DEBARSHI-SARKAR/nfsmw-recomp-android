/* speed.exe 00824540 FUN_00824540; analysis pseudocode, not buildable source.
 */

void FUN_00824540(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == iVar1) {
    *param_1 = *(int *)(iVar1 + 8);
    return;
  }
  do {
    iVar2 = iVar1;
    if (*(int *)(iVar2 + 8) == 0) break;
    iVar1 = *(int *)(iVar2 + 8);
  } while (*(int *)(iVar2 + 8) != param_2);
  iVar1 = *(int *)(iVar2 + 8);
  if ((iVar1 != 0) && (iVar1 == param_2)) {
    if (*(int *)(iVar1 + 8) != 0) {
      *(int *)(*(int *)(iVar1 + 8) + 0x10) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*(int *)(iVar2 + 8) + 8);
  }
  return;
}

