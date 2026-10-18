/* speed.exe 005b2100 FUN_005b2100; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b2100(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x1c) <= *(int *)(param_2 + 0x1c)) break;
      iVar2 = *(int *)(iVar2 + 8);
    } while (iVar2 != 0);
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_2;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_1 + 8) = param_2;
    }
    else {
      iVar1 = *(int *)(iVar2 + 4);
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_2;
      }
      *(int *)(param_2 + 8) = iVar2;
      *(int *)(iVar2 + 4) = param_2;
    }
    if (*(int *)(param_1 + 0xc) == iVar2) {
      *(int *)(param_1 + 0xc) = param_2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}

