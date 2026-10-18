/* speed.exe 005b0c30 FUN_005b0c30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b0c30(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe0);
  iVar1 = 0;
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x1c) < (int)(uint)param_2) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  for (iVar2 = *(int *)(param_1 + 0x4128); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if ((iVar1 == 0) && ((*(byte *)(iVar2 + 0x14) & 3) != 0)) {
      iVar1 = 1;
    }
    else if ((*(uint *)(iVar2 + 0x14) & 2) == 0) {
      if ((*(uint *)(iVar2 + 0x14) & 1) != 0) {
        iVar1 = iVar1 + -1;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return;
}

