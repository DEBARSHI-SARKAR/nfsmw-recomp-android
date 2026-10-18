/* speed.exe 00824500 FUN_00824500; analysis pseudocode, not buildable source.
 */

void FUN_00824500(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 0;
  if (iVar2 != 0) {
    do {
      iVar1 = iVar2;
      iVar2 = iVar1;
      if (*(ushort *)(param_2 + 0x18) <= *(ushort *)(iVar1 + 0x18)) break;
      iVar2 = *(int *)(iVar1 + 8);
      iVar3 = iVar1;
    } while (iVar2 != 0);
  }
  *(int *)(param_2 + 8) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = param_2;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = param_2;
    *(int *)(param_2 + 0x10) = iVar3;
    return;
  }
  *param_1 = param_2;
  return;
}

